#pragma once
#include <iostream>
#include <sstream>

using namespace std;

namespace PointClass
{
	/*
	@brief Point class
	*/
	struct Point {
		double abscissa;
		double ordinate;

		/*
		@brief Initializes a new instance of the 'Point' class
		@param x - abscissa
		@param y - ordinate
		*/
		Point(const double x = 0, const double y = 0);

		/*
		@brief function overriding the output stream
		@param out outstream
		@param point point
		@return returns output stream
		*/
		friend ostream& operator<< (ostream& out, const Point& point);

		/*
		* @brief a function, which convert point into string
		* @return string, which consist of point coordinates
		*/
		std::string to_string();
	};
}