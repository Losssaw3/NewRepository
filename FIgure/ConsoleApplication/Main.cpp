#include "..//Pentagon/Pentagon.h"

using namespace PentagonClass;
int main()
{
	Point a(4, 6);
	Point b(0, 0);
	Pentagon pent;
	Pentagon pent1(9, { 1,5 });
	std::cout << pent.ToString(); /*pent.ToString() << std::endl;*/
	return 0;
}