/* Honor Pledge:
 *
 * I pledge that i have neither given nor received any help on this assignment 
 *
 * kevbravo */

//we must include header guards and the sort class
#ifndef BUBBLE_H
#define BUBBLE_H

#include "Sort.h"

//inheriting from sort
class Bubble : public Sort{

//basically the same as insertion sort
	protected:
		int* sorted;

//constructor, destructor and virtual functions
	public:
		Bubble(int* numbers);

		~Bubble();

		virtual void sort(int* numbers);

		virtual int* getArray();
};

#endif
