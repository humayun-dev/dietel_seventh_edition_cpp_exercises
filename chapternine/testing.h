/*	Program: Chapter 9 header file
	Author: Muhammad Humayun Khan
*/
#ifndef UTILITYFUNCTION
#define UTILITYFUNCTION

	// utility function concept 
	class testing{
		private:
			int m_value;
			int utilityFunction();		// good concept of the encapsulation / utitlity function concept
		public:
			testing(int);		// by default contructor
			void addition();	// public member function
	};
/* =================================================================================================================================================== */
	/* task: 9.5 (Complex Class) 
	Create a class called Complex for performing arithmetic with complex numbers. Write a program to test your class. Complex numbers have the form
			realPart + imaginaryPart * i 
			where i is underroot -1
	Use double variables to represent the private data of the class. Provide a constructor that enables an object of this class to be initialized when 
	it’s declared. The constructor should contain default 	values in case no initializers are provided. Provide public member functions that perform the 
	following tasks:
		a) Adding two Complex numbers: The real parts are added together and the imaginary parts are added together.
		b) Subtracting two Complex numbers: The real part of the right operand is subtracted from the real part of the left operand, and the imaginary part 
		   of the right operand is subtracted from the imaginary part of the left operand.
		c) Printing Complex numbers in the form (a, b), where a is the real part and b is the imaginary part.
	
	Author: Muhammad Humayun Khan
	*/
	
	class Complex{
		private:
			double realPart_one, realPart_two, imaginary_one, imaginary_two, sum,subtract;
		public:
			Complex();		// by default construction
			void calculation();	// input and the addition of the complex numbers
			void display();
	};
/* =================================================================================================================================================== */
	/*
		task 9.6 (Rational)
		Create a class called Rational for performing arithmetic with fractions. Write a program to test your class. Use integer variables to represent 
		the private data of the class—the numerator and the denominator. Provide a constructor that enables an object of this class to be initialized when
		it’s declared. The constructor should contain default values in case no initializers are provided and should store the fraction in reduced form. 
		For example, the fraction 2/4 would be stored in the object as 1 in the numerator and 2 in the denominator. Provide public member functions that 
		perform each of the following tasks:
		a) Adding two Rational numbers. The result should be stored in reduced form.
		b) Subtracting two Rational numbers. The result should be stored in reduced form.
		c) Multiplying two Rational numbers. The result should be stored in reduced form.
		d) Dividing two Rational numbers. The result should be stored in reduced form.
		e) Printing Rational numbers in the form a/b, where a is the numerator and b is the denominator.
		f) Printing Rational numbers in floating-point format.
		
		Author: Muhammad Humayun Khan
	*/
	class Rational{
		private:
			int numerator_one, denominator_one, numerator_two, denominator_two;
		public:
			Rational();
			void input();
	};
/* =================================================================================================================================================== */
	

















#endif


