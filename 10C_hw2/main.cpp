/*
	Hw#2 C++
	Cameron Sowers
	UID: 404766299

	Collaborators: Gaurav Gulati
	
	Honesty Pledge: "I pledge that I have neither given nor received unauthorized assistance on this assignment.
*/


#include <iostream>
#include "Chart.h"
#include "BarChart.h"

/*
	The main function creates an object of BarChart and adds values to it.
	It then "draws" aka outputs the desired chart to the console.
*/
int main()
{
	BarChart bc;		//create bar chart
	bc.add(3);			//add values
	bc.add(5);
	bc.add(2);
	bc.add(7);

	bc.draw();			//cout chart
}
