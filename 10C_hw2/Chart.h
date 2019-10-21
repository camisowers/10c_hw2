#pragma once
#include <vector>
#include <iostream>


class Chart				//base class
{
public:
	Chart();					//default constructor
	void add(int item);			//add to chart
	virtual void draw() const;	
	
	class Iterator			//normal iterator
	{
	public: 
		int* pos;
		int operator*();							//dereference operator
		Iterator& operator++();						//increment operator
		bool operator!= (const Iterator& iter);		//not equal operator
	};

	class constIterator		//constant iterator
	{
	public:
		const int* pos;
		int operator*();
		constIterator& operator++();
		bool operator!= (const constIterator& iter);
	};

	Iterator begin();				//create iterator at the beginning of vector
	Iterator end();					//create iterator at the end of vector
	constIterator begin() const;	
	constIterator end() const;

protected: std::vector <int> data;		//vector of int to stor chart data
};	

