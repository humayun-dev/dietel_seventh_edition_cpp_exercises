#include <iostream>
#include "5.12.h"

using namespace::std;

// by default constructor
patterns::patterns(){
	i = j = 0;
}

// setData definition
void patterns::setData(){
	/* Part a
	for(i = 0; i < 10; i++){
		for(j = 0; j <= i; j++){
			cout<<"*";
		}
		cout<<endl;
	}
	*/
	
	// Part b
	/*
	for(i = 0; i < 10; i++){
		for(j = 9; j >= i; j--){
			cout<<"*";
		}
		cout<<endl;
	}
	*/
	
	// Part c
	/*
	for(i = 0; i < 10; i++){
		for(j = 0; j < 10; j++){
			if(j >= i){
				cout<<"*";
			}else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	*/
	
	// Part d
	/*
	for(i = 0; i < 10; i++){
		for(j = 9; j >= 0; j--){
			if(j > i){
				cout<<" ";
			}else{
				cout<<"*";
			}
		}
		cout<<endl;
	}
	*/
}
