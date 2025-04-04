#pragma once

#include <cstdio>

union Point2d {
	struct {
		
		float x;
		float y;
		float w;
	};

	struct {
		float e20, e01, e12; 
	};

	Point2d() {
		w = y = x = 0;
	}

	Point2d(float x_, float y_, float w_) 
		: x(x_)
		, y(y_)
		, w(w_)
	{
	}

	void print() {
		printf("Point: %f x + %f y + %f w\n", x, y, w);
	}
};