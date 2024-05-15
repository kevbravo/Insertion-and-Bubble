/* Honor Pledge:
 *
 * I pledge that i have neither given nor received any help on 
 * this assignment
 *
 * kevbravo */

//our header guards and include statements
#ifndef INSERTION_H
#define INSERTION_H

#include "Sort.h"

//insertion will inherit from sort
class Insertion : public Sort{

//we define our protected data members
	protected:
		int* sorted;

//as well as our public constructors and methods
	public:
		Insertion(int* numbers);

		 ~Insertion();

//again we made them virtual
		virtual void sort(int* numbers);

		virtual int* getArray();
};

#endif
