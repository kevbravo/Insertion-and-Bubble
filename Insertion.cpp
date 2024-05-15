/* Honor Pledge:
 *
 * I pledge that i have neither given nor received any help on this 
 * assignment
 *
 * kevbravo */

//our includes to use in our code
#include "Insertion.h"
#include <iostream>

//here we have a constructor with an integer array as a parameter
Insertion::Insertion(int numbers[]){

//next we call our sort method
	sort(numbers);
}

//deconstructor
Insertion::~Insertion(){

}

//this method will do the sorting for us
void Insertion::sort(int numbers[]){
	
	int x;

//this for loop will iterate through each element of the array
	for(int i = 0; i < 49; ++i){

//if the element chosen is less than the element to its right we will proceed to
//test the element to the left
		if (numbers[i] < numbers[i + 1]){

//this for loop will decrement to ensure we iterate through all the numbers to the 
//left of the number chosen
			for(x = i; x > -1; --x){

//if the number to the left is less than the original number we must swap them
				if(numbers[x] < numbers[x + 1]){

//after we insert the number to the corresponding spot the sub list to the left of
//the original number will be sorted
					int a = numbers[x];
					int b = numbers[x + 1];
	
//next we just set each number to its respective location
					numbers[x] = b;
					numbers[x + 1] = a;
				}
			}
		}
	}

//after that we set our newly sorted array into the member stored in our class
	sorted = numbers;
}

//this method will return our sorted array
int* Insertion::getArray(){

	return sorted;
}

