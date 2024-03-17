/*		Program: Finding palindrome of a 5-digit number
		Author: Muhammad Humayun Khan
*/

#include<iostream>
#include "4.26.h"

using namespace::std;

// by default constructor definition
palindrome::palindrome(){
	number = firstDigit = secondDigit = fourthDigit = fifthDigit = 0;
}

// definiton of setData(), find firstdigit, seconddigit, fourthdigit and fifthdigit and compare. no need to find the middle digit as always remain the same
void palindrome::setData(){
	cout<<"Please enter any 5-digit integer (-1 to quit): ";
	cin>>number;
	
	while(number != -1){
		firstDigit = number / 10000;							// 12321 / 10000 = 1
		secondDigit = number % 10000 / 1000;					// 12321 % 10000 = 2321 / 1000 = 2
		fourthDigit = number % 10000 % 1000 % 100 / 10;			// 12321 % 10000 = 2321 % 1000 = 321 % 100 = 21 / 10 = 2
		fifthDigit = number % 10;								// 12321 % 10 = 1
		
		if(firstDigit == fifthDigit && secondDigit == fourthDigit){
			cout<<"The entered number is palindrome."<<endl;
		}else{
			cout<<"The entered number is not a palindrome."<<endl;
		}
		cout<<"Please enter any 5-digit integer (-1 to quit): ";
		cin>>number;
	}
}
