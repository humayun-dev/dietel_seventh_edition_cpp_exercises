#include<iostream>
#include "5.9.h"

using namespace::std;

product_odd_integers::product_odd_integers(){
	product = 1;
}

// setData definition
void product_odd_integers::setData(){
	for(int i = 1; i <= 15; i++){
		if(i % 2 != 0){
			product *= i;
		}
	}
	cout<<"The product of odd integers from 1 to 15: "<<product<<endl;
}
