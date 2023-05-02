#include "Math.h"
bool areSameDouble(double x, double y, double precision)
{
	return ((x - y) < precision);
}