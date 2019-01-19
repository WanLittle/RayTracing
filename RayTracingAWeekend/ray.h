#pragma once

#include "vec3.h"

class ray
{
public:
	vec3 A; //起点
	vec3 B; //方向

public:
	ray() {};

	ray(const vec3& a, const vec3& b) 
	{
		A = a; B = b;
	}

	vec3 origin() const 
	{ 
		return A;	 
	}

	vec3 direction() const 
	{ 
		return B;	 
	}

	// 计算某t值下，射线上的点的坐标
	vec3 point_at_parameter(float t) const 
	{ 
		return A + t * B;	 
	}

};