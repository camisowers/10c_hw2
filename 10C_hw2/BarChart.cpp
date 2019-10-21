#include "BarChart.h"

//	Default constructor
BarChart::BarChart() : Chart() {}

/*
	The function draw() formats and couts the numbers stored in the Bar Chart (vector) and draws stars(*) proportional to the int.
*/
 void BarChart::draw() const
{
	for (auto iter = data.begin(); iter != data.end(); iter++)
	{
		std::cout << *iter << ": ";
		for (int i = 0; i < *iter; i++)
			std::cout << "*";
		std::cout << "\n";
	}
}
