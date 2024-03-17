#include<iostream>
#include "5.5.h"

using namespace::std;

sumIntegers::sumIntegers(){
	number = sum = 0;
}

// setData definition
void sumIntegers::setData(){
	cout<<"Please enter first integer and its corresponding five values with space apart: ";
	cin>>number;
	
	for(int i = 1; i < number; i++){
		sum += number;
		cin>>number;
	}
	cout<<"The summation is "<<sum<<endl;
}
