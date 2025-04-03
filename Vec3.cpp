#include "Vec3.h"

void Vec3::Set(const float x_, const float y_, const float z_)
{
    x = x_;
    y = y_;
    z = z_;
}

Vec3::Vec3()
{
    Set(0.0f, 0.0f, 0.0f);
}

Vec3::Vec3(const float x, const float y, const float z)
{
    Set(x, y, z);
}