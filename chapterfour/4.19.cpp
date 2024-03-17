#include<iostream>
#include "4.19.h"

using namespace::std;

// by default constructor
largest_number::largest_number(){
	number = 0;
}
// function definition to calculate the maximum and second maximum number in range of 1 to 10
void largest_number::setData(){
	int max_num = 0, max_second_num = 0, counter = 0;
	while(counter < 10){
		cout<<"Please enter an integer: ";
		cin>>number;
		
		if(number > max_num){
			max_num = number;
		}else if(number > max_second_num){
			max_second_num = number;
		}
		counter++;
	}
	cout<<"The maximum number is: "<<max_num<<endl;
	cout<<"The second maximum number is: "<<max_second_num<<endl;
}

