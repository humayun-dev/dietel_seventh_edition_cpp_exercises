/*		Program: Conversion of binary into decimal
		Author: Muhammad Humayun Khan
*/

#include<iostream>
#include "4.27.h"

using namespace::std;

// by default constructor
binaryToDecimal::binaryToDecimal(){
	binaryNumber = number = total_digits_input = lastDigit = decimal = 0, base = 1;
}

// setData definition, need to calculate the number of digits input by the user first
void binaryToDecimal::setData(){
	cout<<"Please enter a binary number (-1 to quit): ";
	cin>>binaryNumber;

	while(binaryNumber != -1){
		number = binaryNumber;			// for later output only line number 32
		decimal = 0; base = 1;			// re-intialize the values for new input
		int temp = binaryNumber;		// first count the number of digits the user provided or condition for loop exit
		while(temp != 0){
			temp = temp / 10;							// loop exit condition
			lastDigit = binaryNumber % 10;				// 1101 % 10 = 1 (which is the last digit)
			decimal += lastDigit * base;				// 0 = 0 + 1 * 1 = decimal
			binaryNumber /= 10;							// 1101 / 10 = 110 (last number eliminated and binary value updated)
			base *= 2;									// base should be updated such as 1 2 4 8 16 32 64 128, so everything base is double of previous
		}	
		cout<<"The decimal equivalent of the "<<number<<" is "<<decimal<<endl;
		
		cout<<"Please enter a binary number (-1 to quit): ";
		cin>>binaryNumber;						
	}	
}

