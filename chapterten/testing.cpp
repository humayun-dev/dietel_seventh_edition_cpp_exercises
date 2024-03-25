/*	Program: header file source code
	Author: Muhammad Humayun Khan
*/
#include <iostream>
#include "testing.h"

using namespace::std;

	// friend function accessing private data attributes of a class
	void display(testing obj){
		obj.a = 5;
		obj.b = 6;
		
		cout<<"Value of the data attributes are: "<<endl;
		cout<<"a = "<<obj.a<<" "<<"b = "<<obj.b<<endl;
	}
/*	===================================================================================================================================================== */
	// friend function to compare both the objects value
	void testing_one::getData(){
		cout<<"Please input the integer value: ";
		cin>>a;
	}	
	void testing_two::inputData(){
		cout<<"Please input the integer value: ";
		cin>>b;
	}
	// friend function definition to compare both objects value
	void greater_value(testing_one first,testing_two second){
		if(first.a > second.b){
			cout<<"First class object value is greater";
		}else{
			cout<<"Second class object value is greater";
		}
	}
/*	===================================================================================================================================================== */
	// friend class accessing another class
	void containerClass::getData(){
		cout<<"Please enter an integer value: ";
		cin>>a;
	}
	void containerClass::displayData(){
		cout<<"The private data attribute of container class is: "<<a<<endl;
	}	
	void containedClass::setter(containerClass obj){
		cout<<"The data accessed by the contained class is: "<<obj.a<<endl;
	}
/*	===================================================================================================================================================== */
/*	===================================================================================================================================================== */
/*	===================================================================================================================================================== */
/*	===================================================================================================================================================== */
/*	===================================================================================================================================================== */
/*	===================================================================================================================================================== */

