#include "Point.h"
#include <string>

using namespace PointClass;
Point::Point(const double x, const  double y)
	:abscissa(x), ordinate(y)
{
}

std::string PointClass::Point::to_string()
{
	std::string pointString;
	pointString += '(' + std::to_string(int(abscissa)) + ',' + std::to_string(int(ordinate)) + ')';
	return pointString;
}

std::ostream& PointClass::operator<<(std::ostream& out, const Point& point)
{
	out << '(' << point.abscissa << ',' << point.ordinate << ')';
	return out;
}

