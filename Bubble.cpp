/* Honor Pledge:
 *
 * I pledge that i have
 * neither given nor received any 
 * help on this assignment 
 *
 * kevbravo */
                    
//include statements
#include "Bubble.h"
#include <iostream>

//constructor with int pointer
Bubble::Bubble(int* numbers){

//sort method
	sort(numbers);
}

//destructor
Bubble::~Bubble(){


}

//sorting method for bubble
void Bubble::sort(int numbers[]){

	int x;

//we use this for loop to go through the number of times as there
//are elements
	for(int i = 0; i < 50; i++){

//and we must use a second for loop to get the position of the elements 
		for(x = 0; x < (50 - i); x++){

//comparing the two numbers to be able to swap them
			if(numbers[x] < numbers[x + 1]){

//we bubble the numbers to their correct location
				int a = numbers[x];
				int b = numbers[x + 1];

				numbers[x] = b;
				numbers[x + 1] = a;
			}
		}	
	}

//setting the numbers into an array to specify sorting is done
	sorted = numbers;
}

//a method to return the array when called in the driver
int* Bubble::getArray(){

	return sorted;
}
