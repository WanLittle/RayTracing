#pragma once

#include "vec3.h"

class ray
{
public:
	vec3 A; //���
	vec3 B; //����

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

	// ����ĳtֵ�£������ϵĵ������
	vec3 point_at_parameter(float t) const 
	{ 
		return A + t * B;	 
	}

};