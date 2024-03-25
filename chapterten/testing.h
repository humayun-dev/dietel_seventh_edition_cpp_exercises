/*	Program: Chapter 10 of Dietel and dietel how to program C++
	Author: Muhammad Humayun Khan
*/

#ifndef GENERAL
#define GENERAL
	
	// through friend function we can access the data attributes of a class
	class testing{
		private:
			int a,b;
		
		friend void display(testing);		// friend function is not part of the class but a friend and can be declared anywhere 			
	};
/*	===================================================================================================================================================== */
	// friend function can compare the objects of different class, here comparison is which object value is greater
	class testing_two;		// declaration of second class to avoid error when passing to the friend function
	class testing_one{
		private:
			int a;
		public:
			void getData();		
			
		friend void greater_value(testing_one,testing_two);		// as testing_two is not declare yet so better to declare above testing_one to avoid error
	};
	
	class testing_two{
		private:
			int b;
		public:
			void inputData();
		
		friend void greater_value(testing_one,testing_two);
	};
/*	===================================================================================================================================================== */
	// friend class can access another class. Class to be accessed is called container and class which access another or having friend
	// is called as contained
	
	class containerClass{
		private:
			int a;
		public:
			void getData();
			void displayData();
		
		friend class containedClass;		// friend class (containedClass) accessing another class (containerClass)
	};
	
	class containedClass{
		public:
			void setter(containerClass);
	};	
/*	===================================================================================================================================================== */
/*	===================================================================================================================================================== */
/*	===================================================================================================================================================== */
/*	===================================================================================================================================================== */
/*	===================================================================================================================================================== */
/*	===================================================================================================================================================== */
/*	===================================================================================================================================================== */

#endif
