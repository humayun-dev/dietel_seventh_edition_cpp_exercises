/*	Program: Chapter 9 source file
	Author: Muhammad Humayun Khan
*/

#include <iostream>
#include "testing.h"

using namespace::std;

	// utility function concept
	// by default constructor definition
		testing::testing(int value):m_value(value){
		}
		
	// private utility function
		int testing::utilityFunction(){
			return m_value * m_value;
		}
	
	// public member function definition
		void testing::addition(){
			int result = utilityFunction();
			cout<<"The summation of the private data attribute is: "<<result<<endl;
		}
/* =================================================================================================================================================== */
	// task 9.5
	// by default constructor
	Complex::Complex():realPart_one(0),realPart_two(0),imaginary_one(0),imaginary_two(0),sum(0){
	}
	
	// input and addition of the complex numbers
	void Complex::calculation(){
		cout<<"Please enter the real part numbers with space apart: ";
		cin>>realPart_one>>realPart_two;
		cout<<"Please enter the imaginary numbers with space apart: ";
		cin>>imaginary_one>>imaginary_two;
		
		int real = realPart_one + realPart_two;
		int imaginary = imaginary_one + imaginary_two;
		
		cout<<"Complex numbers are: "<<endl<<realPart_one<<" + "<<imaginary_one<<endl<<realPart_two<<" + "<<imaginary_two<<endl;
		cout<<"The summation of complex numbers are: "<<real<<" + "<<imaginary<<"i"<<endl; 
	}
	
	// display function to show the result
	void Complex::display(){
		calculation();
	}
/* =================================================================================================================================================== */

	// task 9.6
	// by default constructor
	Rational::Rational():numerator_one(0),denominator_one(0),numerator_two(0),denominator_two(0){
	}
	
	// input to calculate the fractions
	void Rational::input(){
		cout<<"Please enter the first fraction number with space apart: ";
		cin>>numerator_one>>denominator_one;
		cout<<"Please enter the second fraction number with space apart: ";
		cin>>numerator_two>>denominator_two;
		
		int first_fraction = numerator_one / denominator_one;
		int second_fraction = numerator_two / denominator_two;
		
		int result = first_fraction + second_fraction;
		cout<<numerator_one<<"/"<<denominator_two<<" + "<<numerator_two<<"/"<<denominator_two<<" = "<<result<<endl;
	}
/* =================================================================================================================================================== */
	

