/*	Program: Chapter 9 source file
	Author: Muhammad Humayun Khan
*/

#include <iostream>
#include "testing.h"

using namespace::std;

// by default constructor definition
	testing::testing(int value):m_value(value){
	}
	
// private utility function
	int testing::utilityFunction(){
		return m_value * m_value;
	}

// public member function definition
	void testing::addition(){
		int result = utilityFunction();
		cout<<"The summation of the private data attribute is: "<<result<<endl;
	}


