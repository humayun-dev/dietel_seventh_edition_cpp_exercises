#include<iostream>
#include "4.17.h"

using namespace::std;

// by default constructor
largest::largest(){
	number = 0;
}
void largest::setData(){
	int counter = 0, max = 0;
	while(counter < 10){
		cout<<"Enter an integer: ";
		cin>>number;
		
		if(number > max){
			max = number;
		}
		counter++;
	}
	cout<<"The maximum number is: "<<max<<endl;
}
