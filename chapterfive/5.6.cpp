#include<iostream>
#include "5.6.h"

using namespace::std;

averageIntegers::averageIntegers(){
	number = average = sum = 0;
}

// setData definition
void averageIntegers::setData(){
	cout<<"Please enter an integer (9999 to quit): ";
	cin>>number;
	
	for(int i = 1; number != 9999; i++){
		sum += number;
		average = sum/i;
		cin>>number;
	}
	cout<<"The average is: "<<average<<endl;
}
