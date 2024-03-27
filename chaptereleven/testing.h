/*	Program: Chapter 11 of dietel how to program c++ Operator overloading practice
	Author: Muhammad Humayun Khan
*/

	// prefix unary operator overloading with no return value
	/*
	class testing{
		private:
			int count;
		public:
			testing();					// by default constructor
			void operator ++();			// prefix operator overloading
			void display();				// to display the count value
	};
	*/
	
	// prefix unary operator overloading with return value
	/*
	class testing{
		private:
			int count;
		public:
			testing();			// by default constructor
			testing operator ++();
			void display();		
	};
	*/
	
	// prefix unary operator overloading with return value
	/*
	class testing{
		private:
			int count;
		public:
			testing();			// by default constructor
			testing(int);		// one argument constructor due to the nameless object
			testing operator ++();
			void display();		
	};
	*/
/* =================================================================================================================================================== */
	
	// binary operator overloading
	/*
	class testing{
		private:
			int a;
		public:
			testing();			// by default contructor
			testing(int);		// one argument constructor for the obj_one and obj_two
			testing operator +(testing);	// binary operator overloading
			void display();		// display the data
	};
	*/
/* =================================================================================================================================================== */
	
	
	
