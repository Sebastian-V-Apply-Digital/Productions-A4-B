#include "Vec3.h"

void Vec3::Set(const float x_, const float y_, const float z_)
{
    x = x_;
    y = y_;
    z = z_;
}

Vec3::Vec3()
{
    x = 0.0f;
	y = 0.0f;
	z = 0.0f;
}

Vec3::Vec3(const float x_, const float y_, const float z_)
{
    Set(x, y, z);
}