#pragma once

#include "ray.h"

class material;

struct hit_record 
{
	float t;
	vec3 p; //交点
	vec3 normal;
	material *mat_ptr;
};

// 物体（基类）
class hitable 
{
public:
	virtual bool hit(const ray& r, float t_min, float t_max, hit_record& rec) const = 0;
};
