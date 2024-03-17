#include<iostream>
#include "4.34.h"

using namespace::std;

// by default constructor 
factorial::factorial(){
	number = integer = 0;
	result = 1;
}

// setData function
void factorial::setData(){
	cout<<"Please enter an integer to calculate the factorial: ";
	cin>>number;
	
	integer = number;
	
	while(number > 0){
		result *= number;
		number--;
	}
	cout<<"The Factorial of "<<integer<<" is "<<result<<endl;
}
