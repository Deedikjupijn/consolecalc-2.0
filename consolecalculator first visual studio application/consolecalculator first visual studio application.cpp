// consolecalculator first visual studio application.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include "Calculator.h" //add Calculator.h to the main cpp file (this file) to be called in.

using namespace std; //

int main()
{
	double x = 0.0;
	double y = 0.0;
	double result = 0.0;
	char oper = '+'; //no clue what this does, prob importand so lets just leave it here. it also works whitout it.
	
	std::cout << "My amazing calculator :D" << endl << endl; //amazing tekst
	std::cout << "Type in a calculation to perform. Example: a+b | a-b | a*b | a/b" << endl; //even more amazing tekst
	
	Calculator c;
	while (true)
	{
		cin >> x >> oper >> y;
		result = c.Calculate(x, oper, y); //
		cout << "Result: " << result << endl; //result of the calculation by adding the result that came out of the calculator.h file to the result tekst.
	}
}
