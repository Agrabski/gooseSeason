#include "Point.hpp"

Geometry::Point::Point(int x, int y)
{
	this->x = x;
	this->y = y;
}

Geometry::Point Geometry::Point::operator+(Point const &right)
{
	return Point(x + right.x, y + right.y);
}

Geometry::Point Geometry::Point::operator+(Vector const &right)
{
	return Point(x+static_cast<int>( right.magnitude*cos(right.angle)), y + static_cast<int>(right.magnitude*sin(right.angle)));
}

Geometry::Point & Geometry::Point::operator+=(Point const &right)
{
	x += right.x;
	y += right.y;
	return *this;
}

Geometry::Point & Geometry::Point::operator+=(Vector const &right)
{
	x += static_cast<int>(right.magnitude*cos(right.angle));
	y += static_cast<int>(right.magnitude*sin(right.angle));
	return *this;
}

Geometry::Point Geometry::Point::operator-(Point const &right)
{
	return Point(x - right.x, y - right.y);
}

Geometry::Point Geometry::Point::operator-(Vector const &right)
{
	return Point(x - static_cast<int>(right.magnitude*cos(right.angle)), y - static_cast<int>(right.magnitude*sin(right.angle)));
}

Geometry::Point & Geometry::Point::operator-=(Point const &right)
{
	x -= right.x;
	y -= right.y;
	return *this;
}

Geometry::Point & Geometry::Point::operator-=(Vector const &right)
{
	x -= static_cast<int>(right.magnitude*cos(right.angle));
	y -= static_cast<int>(right.magnitude*sin(right.angle));
	return *this;
}

bool Geometry::Point::operator==(const Point & other)
{
	return x == other.x&&y == other.y;
}

bool Geometry::Point::operator!=(const Point & other)
{
	return !(*this==other);
}

double Geometry::Point::magnitude() const
{
	return sqrt(x ^ 2 + y ^ 2);
}

double Geometry::Point::distanceTo(Point secondPoint) const
{
	Point relativePosition(secondPoint.x - x, secondPoint.y - y);
	return relativePosition.magnitude();
}
