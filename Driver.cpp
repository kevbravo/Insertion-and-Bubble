/* Honor Pledge:
 *
 * I pledge that I have neither given nor received any
 * help on this assignment
 *
 * kevbravo */

//first we must include necessary libraries and classes
#include <iostream>
#include <sstream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include "Insertion.h"
#include "Bubble.h"

//our driver will implement our program
int main(){

//I created an array of strings for reading in the contents of the file
	std::string s_numbers [50];

//and I created an array of integers to convert the string numbers to numbers
	int numbers[50];

	int* sorted;

	int answer;

	bool check = false;

	Sort* insertion;

	Sort* bubble;

//our while loop will keep asking the user what they want to do until they choose
//to exit
	while(true){

//we give a menu of options to the user
		std::cout << "1. Load Data (From File)" << std::endl;
		std::cout << "2. Exit Program" << std::endl;
		std::cout << "Please enter your selection: " << std::endl;

//next we scan their input and store it
		std::cin >> answer;
		std::cout << "" << std::endl;

//if they want to load the numbers from the file we proceed to read in the contents
//and store them in a string
		if(answer == 1){

			int choice;

			std::ifstream inputFile("data.txt");

//using string stream for parsing
			std::stringstream ss;

//checking to make sure the file was opened
			if (inputFile.is_open()){

//clearing stringstream
				ss.clear();
				ss.str("");
	
				std::string line;

//this while loop will ensure all the lines are read in from the file
				while(std::getline(inputFile, line)){

//storing it into string stream for parsing
					ss.str(line);

//I used a for loop to keep appending the numbers separated by the commas into our string
//array
					for(int i = 0; i < 50; i++){
				
						std::getline(ss, s_numbers[i], ',');

//I then used a function called atoi to convert my strings into integers
						int x = atoi(s_numbers[i].c_str());

						numbers[i] = x;
					}
				}

//make sure to close the file after using
				inputFile.close();
			}

//if the file is not found we print out a message
			else{

				std::cout << "Unable to open file" << std::endl;
			}

//next we print out the unsorted array
			std::cout << "Unsorted Array: ";

			for(int i = 0; i < 49; i++){

				std::cout << numbers[i] << ", ";
			}

			std::cout << numbers[49] << std::endl;

			std::cout << "" << std::endl;

//a second while loop for the second menu
		while(true){

//more menu options for the user
			std::cout << "1. Insertion Sort" << std::endl;
			std::cout << "2. Bubble Sort" << std::endl;
			std::cout << "3. Exit Program" << std::endl;
			std::cout << "Please enter your selection: ";

//stored user input into variable
			std::cin >> choice;
			std::cout << "" << std::endl;

//if they choose to use insertion sort we create an instance of sort through polymorphism
			if(choice == 1){

				insertion = new Insertion(numbers);

//we then call our virtual method to get our array and store it
				sorted = insertion->getArray();

//we then print out the sorted array
				std::cout << "Insertion Sort: ";

				for(int i = 0; i < 49; i++){

					std::cout << sorted[i] << ", ";
				}

				std::cout << sorted[49] << std::endl;
				std::cout << "" << std::endl;

//then we exit our while loop to prompt the user with the first menu
				break;
			}

//if the user chooses bubble sort we create an instance of it with polymorphism
			else if(choice == 2){

				bubble = new Bubble(numbers);

//we call the virtual method to get the array again
				sorted = bubble->getArray();

//and we print out each element of the array with a for loop
				std::cout << "Bubble Sort: ";

				for(int i = 0; i < 49; i++){

					std::cout << sorted[i] << ", ";
				}

				std::cout << sorted[49] << std::endl;
				std::cout << "" << std::endl;

//finally we just exit the second while loop
				break;
			}

//we exit the second while loop when the user specifies to exit
			else if(choice == 3){

				std::cout << "Goodbye" << std::endl;

//Im using a boolean to check if the user wants to exit so I can exit my first while
//loop
				check = true;

				break;
			}

//making sure the user enters a valid response
			else{

				std::cout << "Please enter a 1, 2, or 3" << std::endl;
			}
			}
		}

//if the user has chosen option 3 we exit this while loop automatically
		if(check == true){
			
			break;
		}

//else if the user specifies to exit we break out of the while loop
		if(answer == 2){
			
//			delete insertion;
//			delete bubble;
//			delete sorted;

			break;
		}
	}

	delete insertion;
	delete bubble;
	delete sorted;
}
