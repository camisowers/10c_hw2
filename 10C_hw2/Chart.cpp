#include "Chart.h"
#include <string>
#include <assert.h>


// Default constructor
Chart::Chart() : data(NULL) {}

/*
	The funciton add() puts another int into the vector by calling push_back().
	@param: int item
	@return: n/a
*/
void Chart::add(int item)
{
	data.push_back(item);
}

/*
	The function draw() does nothing for Chart. Cout "Cannot draw base chart."
*/
void Chart::draw() const
{
	std::cout << "Cannot draw base chart.\n";
}


/*
	This defines the operator * to derefence a pointer, and access the value stored at where the iterator is pointing.
	@param: n/a
	@return: int
*/
int Chart::Iterator::operator*()
{
	assert(pos != NULL);			//check pointer
	return *pos;					//dereference to return int 
}

/*
	This defines the operator ++ used to increment the iterator and return the iterator by reference.
	param: n/a
	return: Iterator&	
*/
Chart::Iterator& Chart::Iterator::operator++()
{
	assert(pos != NULL);			//check pointer
	pos += 1;						//move iterator to next position in the vector
	return *this;
}

/*
	This defines the operator != and returns a bool telling whether the two iterators are at the same location.
	@param const Iterator& iter
	@return: bool
*/
bool Chart::Iterator::operator!=(const Iterator& iter)
{
	bool not_equal = (pos != iter.pos);			//if two iterators are the same
	return not_equal;	
}

/*
	This defines the operator * to derefence a pointer, and access the value stored at where the const iterator is pointing.
	@param: n/a
	@return: int
*/
int Chart::constIterator::operator*()
{
	assert(pos != NULL);			//check pointer
	return *pos;					//dereference to return int
}

/*
	This defines the operator ++ used to increment the iterator and return the const iterator by reference.
	param: n/a
	return: Iterator&
*/
Chart::constIterator& Chart::constIterator::operator++()
{
	assert(pos != NULL);			//check pointer
	pos += 1;						//move iterator to next postion in the vector
	return *this;
}

/*
	This defines the operator != and returns a bool telling whether the two const iterators are at the same location.
	@param const Iterator& iter
	@return: bool
*/
bool Chart::constIterator::operator!=(const constIterator& iter)
{
	bool not_equal = (pos != iter.pos);			//if two iterators are the same
	return not_equal;
}

/*
	The begin() function creates an iterator and assigns its position to be the first in the vector.
	@param: n/a
	@return: Iterator
*/
Chart::Iterator Chart::begin()
{
	Iterator new_it;
	new_it.pos = &data[0];			//set iterator to point to first value in vector
	return new_it;
}

/*	
	The end() function creates an iterator and assigns its position one after the last in the vector.
	@param: n/a
	@return: Iterator
*/
Chart::Iterator Chart::end()
{
	Iterator new_it;
	new_it.pos = &data[data.size()];		//use .size() to reference the end of the vector (no value)
	return new_it;
}

/*
	The begin() function creates an iterator and assigns its position to be the first in the vector.
	@param: n/a
	@return: Iterator
*/
Chart::constIterator Chart::begin() const
{
	constIterator new_it;
	new_it.pos = &data[0];			//set iterator to point to first value in vector
	return new_it;
}

/*
	The end() function creates an iterator and assigns its position one after the last in the vector.
	@param: n/a
	@return: Iterator
*/
Chart::constIterator Chart::end() const
{
	constIterator new_it;
	new_it.pos = &data[data.size()];		//use .size() to reference the end of the vector (no value)
	return new_it;
}