/*	Program: pointers practicing
	Author: Muhammad Humayun Khan
*/
#include <iostream>

using namespace::std;

	// using pointers to test the array elements
	void array_pointers(){
		int array[] = {1,2,3,4,5},i;
		for(i = 0; i < 5; i++){
			cout<<*(array+i);
		}
	}
/*	================================================================================================================================================= */	
	// incrementing the array elements
	void array_increment(){
		int array_two[] = {1,2,3,4,5},i;
		int* ptr = array_two;
		
		for(i = 0; i < 5; i++){
			cout<<*(ptr++);		// here pointer is a variable and it will increment. Array can't increment as array is a constant
		}
	}
/*	================================================================================================================================================= */	
	// reference and pointers differences
	void ref_ptr(){
		int value = 10;
		int* ptr;
		ptr = &value;		// using pointer to store the address of the variable
		
		int& ref = value;	// ref acts as another name of the same memory location where the value resides
		
		cout<<"Original value = "<<value<<endl;
		cout<<"Value stored at pointer is = "<<*ptr<<endl;
		cout<<"Value stored by the reference is = "<<ref<<endl;
		cout<<"Address of the value is = "<<&value<<endl;
		cout<<"Pointer stored memory address= "<<ptr<<endl;
		cout<<"Another name of the value memory address = "<<&ref<<endl;
		
		ref = 20;
		
		cout<<"Another name changed the value from 10 to 20 = "<<ref<<endl;
		cout<<"Now pointer value is = "<<*ptr<<endl;
		cout<<"Integer value is = "<<value<<endl;
	}
/*	================================================================================================================================================= */
	// passing reference and pointers to the function
	void modifyByRef(int&);		// reference prototype
	void modifyByPtr(int*);		// pointer prototype
	
	void ref_ptr_func(){
		int value = 10;
		
		cout<<"Before passing to the functions: "<<endl;
		cout<<"Value of the integer variable is: "<<value<<endl;
		
		modifyByRef(value);		// value passed to the reference function
		cout<<"Value passed to the function where reference exist = "<<value<<endl;
		
		modifyByPtr(&value);	// value passed to the pointer function
		cout<<"Value passed to the function where pointer exist = "<<value<<endl;
		
	}
	
	// reference function definition
	void modifyByRef(int& valueAlias){
		valueAlias += 20;		// value changed from 10 to 30
	}
	
	// pointer function definition
	void modifyByPtr(int* pointerValue){
		*pointerValue += 50;		// value changed from 30 to 80
	}
/*	================================================================================================================================================= */
	// passing entire array to a function
	void array_passed(int*,int); // function prototype
	void array_ptr(){
		int array[] = {1,2,3,4,5},i,j;
		int array_size = sizeof(array) / sizeof(array[0]);		// sizeof returns in bytes so 10/2 = 5
		
		cout<<"Before passing the array values are: "<<endl;
		for(i = 0; i < array_size; i++){
			cout<<array[i]<<" ";
		}
		
		array_passed(array,array_size);		// array passed to the function
		
		cout<<endl<<"After passing the array values are: "<<endl;
		for(j = 0; j < array_size; j++){
			cout<<array[j]<<" ";
		}
	}
	// function definition
	void array_passed(int* array,int size){
		int i;
		for(i = 0; i < size; i++){
			array[i] += 5;
		}
	}
/*	================================================================================================================================================= */
	// funciton pointers concept 
	void func_one();		// prototype
	void func_two();		// prototype
	void add(int,int);		// prototype for the arguments
	void operation(int,int,void(*)(int,int));	// last argument is as pointer argument
	
	void func_pointers(){
		void (*ptr)();		// function pointer declaration that returns void and having no arguments
		
		ptr = &func_one;	// assign the address of func_one
		ptr();				// call func_one through pointer
		
		ptr = &func_two;	// reassing the pointer to another function
		ptr();				// call func_two through pointer
		
		int a = 2, b = 3;
		operation(a,b,&add);		// function having two arguments and last arguments passed as pointer argument
	}
	
	// prototype definitions
	void func_one(){
		cout<<"I am first function and my address is assigned to the pointer "<<endl;
	}
	void func_two(){
		cout<<"I am second function and my address is assigned to the pointer "<<endl;
	}
	void add(int a, int b){
		cout<<"Sum is: "<<a + b<<endl;
	}
	void operation(int a, int b, void(*func)(int a,int b)){
		func(a,b);	// it will call to the add() function having a,b as arguments
	}
/*	================================================================================================================================================= */
	
	
	
	
	











