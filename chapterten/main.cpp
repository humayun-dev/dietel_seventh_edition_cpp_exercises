#include <iostream>
#include "testing.h"

using namespace::std;

int main(int argc, char** argv) {
	
	// friend function accessing the class data attributes
	/*
	testing obj;
	display(obj);
	*/
	
	// friend function comparing both the objects value
	/*
	testing_one obj;
	obj.getData();
	
	testing_two obj_two;
	obj_two.inputData();
	
	greater_value(obj,obj_two);
	*/
	
	// friend class accessing another class
	/*
	containerClass obj;
	obj.getData();
	obj.displayData();
	
	containedClass obj_two;
	obj_two.setter(obj);
	*/
	
	
	
	
	
	return 0;
}
