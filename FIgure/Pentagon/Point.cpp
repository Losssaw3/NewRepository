#include "Point.h"
#include <string>


using namespace PointClass;
Point::Point(const double x, const  double y)
	:abscissa(x), ordinate(y)
{
}

std::string PointClass::Point::to_string()
{
	stringstream buffer;
	buffer << '(' << this->abscissa << ',' << this->ordinate << ')';
	return buffer.str();
}

std::ostream& PointClass::operator<<(std::ostream& out, const Point& point)
{
	out << '(' << point.abscissa << ',' << point.ordinate << ')';
	return out;
}

