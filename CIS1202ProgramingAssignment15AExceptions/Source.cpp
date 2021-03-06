/*
 *Leslie Glascoe
 * CIS 1202-501
 * WK 15 Programming Assignment 15A Exceptions
 * 04/27/2021
 */

#include<iostream>
#include <cmath>
using namespace std;

char character(char start, int offset);

int main() {
	char ch;
	try {

		ch = character ('Z', -3);
		cout << ch<< endl;
	}
	catch (string exception) {
		cout << exception << endl;
	}

	system("pause");
	return 0;
}

char character(char start, int offset) {
    
		
	if (start < 'A' || (start > 'Z') && (start < 'a') || start > 'z')
	{
		string exception = "Error! Invalid Character Exception";
			throw exception;
	}
	char result = start + offset;

	if (result < 'A' || (result > 'Z') && (result < 'a') || result > 'z')
	{

		string exception = "Error! Invalid Range Exception";
			throw exception;
	}

	if (!((isupper(start) == 0 ) || (islower(result )== 0)))
	{
		
		string exception = "Error! No upper to lower transitions allowed";
			throw exception;
	}
	return result;
}

