#include "Vector.hpp"
#include <math.h>

Geometry::Vector::Vector(double magnitude, double angle)
{
	this->magnitude = magnitude;
	this->angle = angle;
}

Geometry::Vector Geometry::Vector::operator+(Vector const &right)
{
	double newMagnitude = sqrt(magnitude*magnitude+right.magnitude*right.magnitude+2*right.magnitude*magnitude*cos(angle-right.angle));
	double newAngle = angle + atan2(right.magnitude*sin(right.angle - angle), magnitude + right.magnitude*cos(right.magnitude - magnitude));
	return Vector(newMagnitude,angle);
}

Geometry::Vector Geometry::Vector::operator-(Vector const &right)
{
	double newMagnitude = sqrt(magnitude*magnitude + right.magnitude*right.magnitude - 2 * right.magnitude*magnitude*cos(angle - right.angle));
	double newAngle = angle + atan2(-right.magnitude*sin(right.angle - angle), magnitude - right.magnitude*cos(right.magnitude - magnitude));
	return Vector(newMagnitude, angle);
}

Geometry::Vector & Geometry::Vector::operator+=(Vector const &right)
{
	*this = *this + right;
	return *this;
}

Geometry::Vector & Geometry::Vector::operator-=(Vector const &right)
{
	*this = *this - right;
	return *this;
}
