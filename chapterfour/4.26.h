/*	Program: Palindrome
	A palindrome is a number or a text phrase that reads the same backward as forward. For example, each of the following five-digit integers is a 
	palindrome: 12321, 55555, 45554 and 11611. Write a program that reads in a five-digit integer and determines whether it’s a palindrome.
	
	Author: Muhammad Humayun Khan
*/

class palindrome{
	private:
		int number, firstDigit, secondDigit, fourthDigit, fifthDigit;
	public:
		palindrome();				// by default constructor
		void setData();				// to input and display the desired result
};
