#include "stdafx.h"
#include "statistics.hpp"
#include "geometry.hpp"

int main()
{

	//polyd test{ vector2d(-2, 4), vector2d(4, 1), vector2d(2, -4), vector2d(-3, -2) };
	//
	//for (auto angle : test.angles())
	//	std::cout << "[Angle] " << angle << std::endl;

	vector2d a(-2, -3);
	vector2d b(4, 1);

	std::cout << a.formula(b) << std::endl;

	return 0;
}

