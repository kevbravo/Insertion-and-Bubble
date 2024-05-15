/* Honor Pledge:
 *
 * I pledge that i have neither given nor received any help 
 * on this assignment 
 *
 * kevbravo */

//we must always include our header guards
#ifndef SORT_H
#define SORT_H

//this will be our base class which utilizes abstraction for sorting
class Sort{

//we define our public deconstructor and methods
	public:

//we must make them virtual
		virtual ~Sort(){};

//for classes to be forced to implement these we make them pure virtual
//with = 0
		virtual int* getArray() = 0;
		virtual void sort(int numbers[]) = 0;
};

#endif
