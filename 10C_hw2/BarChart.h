#pragma once
#include "Chart.h"

/*
	BarChart is a class deriving from the Chart class.
*/
class BarChart : public Chart
{
public:
	BarChart();					//default constructor`
	virtual void draw() const;	//draw out chart
};

