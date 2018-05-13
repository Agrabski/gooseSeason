#pragma once

namespace Geometry
{
	class Vector
	{
	public:
		double magnitude = 0.0;
		double angle = 0.0;
		Vector(double magnitude, double angle);
		Vector() {};
		Vector operator+(Vector const&);
		Vector operator-(Vector const&);
		Vector& operator+=(Vector const&);
		Vector& operator-=(Vector const&);
	};
}