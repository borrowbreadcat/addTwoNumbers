//input and output functions are gathered here

#include "stdafx.h"
#include <iostream>

int getNumber()
{
	int x = (0);
	std::cout << "Please type a number now..." << std::endl;
	std::cin >> x;
	return x;
}

void showAnswer(int x, int y)
{
	std::cout << "Now let's add them together..." << std::endl;
	std::cout << x << " + " << y << " = " << x + y << std::endl;
}
