#include <iostream>
#include "5.13.h"

using namespace::std;

// initialization of the private data attributes
barChart::barChart(){
	number = i = j = 0;
}

// setData() definition, outer loop for the 1-5 number and inner loop for asterisk printing
void barChart::setData(){
	cout<<"Please enter five number in range of (1 - 30): ";
	for(; i < 5; i++){
		cin>>number;
		for(j = 0; j < number; j++){
			cout<<"*";
		}		
		cout<<endl;
	}	
}

