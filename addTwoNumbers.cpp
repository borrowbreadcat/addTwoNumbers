// learncpp Chapter1quiz 18 04 05.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

#include "io.h"

int main()
{
	std::cout << "We are going to add together two numbers of your choice." << std::endl;
	int firstNumber = { 0 }; //uniform initialization
	int secondNumber{ 0 };
	std::cout << "You'll need to choose the first number." << std::endl;
	firstNumber = getNumber();
	std::cout << "The first number you chose is " << firstNumber << ". " << std::endl;
	std::cout << "Now we need the second number." << std::endl;
	secondNumber = getNumber();
	std::cout << "The second number you chose is " << secondNumber << ". " << std::endl;
	showAnswer(firstNumber, secondNumber);
    return 0;
}

