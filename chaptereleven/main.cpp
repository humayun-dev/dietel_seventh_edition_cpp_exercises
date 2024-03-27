#include <iostream>
#include "testing.h"

using namespace::std;

int main(int argc, char** argv) {
	
	// prefix unary operator overloading with no return value
	/*
	testing obj;
	cout<<"Before operator overloading: "<<endl;
	obj.display();
	
	cout<<"After operator overloading: "<<endl;
	++obj;
	obj.display();
	*/
	
	// prefix unary operator overloading with return value
	/*
	testing obj,obj_two;
	
	cout<<"Before operator overloading: "<<endl;
	obj.display();
	cout<<endl;
	obj_two.display();
	
	cout<<"After operator overloading: "<<endl;
	++obj;
	obj.display();
	
	cout<<"After assigning to another object: "<<endl;
	obj_two = ++obj;
	obj_two.display();
	*/
	
	// prefix unary operator overloading with return value using nameless object
	/*	
	testing obj,obj_two;
	
	cout<<"Before operator overloading: "<<endl;
	obj.display();
	cout<<endl;
	obj_two.display();
	
	cout<<"After operator overloading: "<<endl;
	++obj;
	obj.display();
	
	cout<<"After assigning to another object: "<<endl;
	obj_two = ++obj;
	obj_two.display();
	*/
	
/* =================================================================================================================================================== */	
	// binary operator overloading
	/*
	testing obj_one(2),obj_two(3),obj_three;
	
	cout<<"obj_one value: ";
	obj_one.display();
	
	cout<<"obj_two value: ";
	obj_two.display();
	
	obj_three = obj_one + obj_two;		// obj_one call function and obj_two passed as argument
	
	cout<<"obj_three value: ";
	obj_three.display();
	*/
/* =================================================================================================================================================== */
	return 0;
}
