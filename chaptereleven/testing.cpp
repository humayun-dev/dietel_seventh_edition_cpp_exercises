/*	Program: testing.h source file
	Author: Muhammad Humayun Khan
*/

#include <iostream>
#include "testing.h"

using namespace::std;

	// prefix unary operator overloading 
	/*
	testing::testing():count(0){
	}
	
	// prefix unary operator overloading
	void testing::operator ++(){
		++count;
	}
	
	// to display the incremented value
	void testing::display(){
		cout<<"The value after increment is: "<<count<<endl;
	}
	*/
	
	// prefix unary operator overloading with return value
	/*
	testing::testing():count(0){
	}
	// prefix unary operator overloading 
	testing testing::operator ++(){
		++count;
		testing temp;
		temp.count = count;
		return temp;
	}
	
	void testing::display(){
		cout<<"The value after increment is: "<<count<<endl;
	}
	*/
	
	// prefix unary operator overloading with return value
	/*
	testing::testing():count(0){
	}
	
	// one argument constructor due to the nameless object
	testing::testing(int c):count(c){
	}
	// prefix unary operator overloading 
	testing testing::operator ++(){
		++count;
		return testing(count);		// nameless object and it should have one argument construcotr
	}
	
	void testing::display(){
		cout<<"The value after increment is: "<<count<<endl;
	}
	*/
/* =================================================================================================================================================== */

	// binary operator overloading
	/*
	testing::testing():a(0){
	}
	testing::testing(int x):a(x){
	}
	
	testing testing::operator +(testing obj){
		testing temp;
		temp.a = a + obj.a;
		return temp;
	}
	
	void testing::display(){
		cout<<a<<endl;
	}
	*/
/* =================================================================================================================================================== */
