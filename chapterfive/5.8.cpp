#include<iostream>
#include "5.8.h"

using namespace::std;

smallestInteger::smallestInteger(){
	smallest_number = inputLimit = nextNumber = 0;
}
void smallestInteger::setData(){
	cout<<"Please enter the limit of integers and values in one line space apart: ";
	cin>>inputLimit;
	smallest_number = inputLimit;
	
	for(int i = 0; i < inputLimit; i++){
		cin>>nextNumber;		
		if(nextNumber < smallest_number){
			smallest_number = nextNumber;
		}
	}
	cout<<"The smallest number is: "<<smallest_number<<endl;
}
