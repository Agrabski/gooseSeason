#pragma once
#include "Vector.hpp"
#include <math.h>

namespace Geometry
{
	struct Point
	{
		int x = 0;
		int y = 0;
		Point(int x, int y);
		Point() {};
		Point operator+(Point const&);
		Point operator+(Vector const&);
		Point& operator+=(Point const&);
		Point& operator+=(Vector const&);
		Point operator-(Point const&);
		Point operator-(Vector const&);
		Point& operator-=(Point const&);
		Point& operator-=(Vector const&);
		bool operator==(const Point& other);
		bool operator!=(const Point& other);
		double magnitude() const;
		double distanceTo(Point secondPoint) const;
	};
}