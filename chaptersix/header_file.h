/*		Program: 6.12 (Parking Charges) 
		A parking garage charges a $2.00 minimum fee to park for up to three hours. The garage charges an additional $0.50 per hour for each hour or part
		thereof in excess of three hours. The maximum charge for any given 24-hour period is $10.00. Assume that no car parks for longer than 24 hours at
		a time. Write a program that calculates and prints the parking charges for each of three customers who parked their cars in this garage yesterday. 
		You should enter the hours parked for each customer. Your program should print the results in a neat tabular format and should calculate and print 
		the total of yesterdayís receipts. The program should use the function calculateCharges to determine the charge for each customer. Your outputs 
		should appear in the following format:
		
		Car Hours Charge
		1 	1.5 	2.00
		2 	4.0 	2.50
		3 	24.0 	10.00
	  TOTAL	29.5 	14.50
		
		Author: Muhammad Humayun Khan
*/
	//void calculateCharges();

/*		Program: 6.18 (Exponentiation) 
		Write a function integerPower(base, exponent) that returns the value of base^exponent. For example, integerPower(3, 4) = 3 * 3 * 3 * 3.
		Assume that exponent is a positive, nonzero integer and that base is an integer. Do not use any math library functions.
		
		Author: Muhammad Humayun Khan
*/
	// void exponentiation();

/*		Program: 6.19 (Hypotenuse Calculations) 
		Define a function hypotenuse that calculates the hypotenuse of a right triangle when the other two sides are given. The function should take two
		double arguments and return the hypotenuse as a double. Use this function in a program to determine the hypotenuse for each of the triangles shown 
		below.
		Triangle 	Side 1 	Side 2
		   1 		3.0 	  4.0
		   2 		5.0 	  12.0
		   3 		8.0 	  15.0
		
		Author: Muhammad Humayun Khan
*/
	// void hypotenuse();

/* 		Program: 6.20 (Multiples) 
		Write a function multiple that determines for a pair of integers whether the second is a multiple of the first. The function should take two
		integer arguments and return true if the second is a multiple of the first, false otherwise. Use this function in a program that inputs a series
		of pairs of integers.
		
		Author: Muhammad Humayun Khan
*/

	// void multiples();

/*		Program: 6.28 (Perfect Numbers) 
		An integer is said to be a perfect number if the sum of its divisors, including 1 (but not the number itself), is equal to the number. 
		For example, 6 is a perfect number, because 6 = 1 + 2 + 3. Write a function isPerfect that determines whether parameter number is a perfect 
		number. Use this function in a program that determines and prints all the perfect numbers between 1 and 1000. Print the divisors of each perfect
		number to confirm that the number is indeed perfect. Challenge the power of your computer by testing numbers much larger than 1000.
		
		Author: Muhammad Humayun Khan
*/

	// void isPerfect();
	
/*		Program: 6.29 (Prime Numbers) 
		An integer is said to be prime if itís divisible by only 1 and itself. For example, 2, 3, 5 and 7 are prime, but 4, 6, 8 and 9 are not.
			a) Write a function that determines whether a number is prime.
			b) Use this function in a program that determines and prints all the prime numbers between 2 and 10,000. How many of these numbers do you 
			   really have to test before being sure that youíve found all the primes?
			c) Initially, you might think that n/2 is the upper limit for which you must test to see whether a number is prime, but you need only go 
			   as high as the square root of n. Why?
			   
			Rewrite the program, and run it both ways. Estimate the performance improvement.
		
		Author: Muhammad Humayun Khan
*/	
	//void primeNumbers();
	
/*		Program: 6.31 (Greatest Common Divisor) 
	    The greatest common divisor (GCD) of two integers is the largest integer that evenly divides each of the numbers. Write a function gcd that 
		returns the greatest common divisor of two integers.
		
		Author: Muhammad Humayun Khan
*/

	//void gcd();

/*		Program: 6.33 (Coin Tossing)
	    Write a program that simulates coin tossing. For each toss of the coin, the program should print Heads or Tails. Let the program toss the coin 100
		times and count the number
		
		Author: Muhammad Humayun Khan
*/
	 //void coinTossing();
	 
/*		Program: 6.34 (Guess-the-Number Game) 
		Write a program that plays the game of ìguess the numberî as follows: Your program chooses the number to be guessed by selecting an integer at 
		random in the range 1 to 1000. The program then displays the following:
		
					I have a number between 1 and 1000.
					Can you guess my number?
					Please type your first guess.
		
		The player then types a first guess. The program responds with one of the following:
		
		1. Excellent! You guessed the number!
			Would you like to play again (y or n)?
		2. Too low. Try again.
		3. Too high. Try again.
		
		If the playerís guess is incorrect, your program should loop until the player finally gets the number right. Your program should keep telling 
		the player Too high or Too low to help the player ìzero inî on the correct answer.
		
		Author: Muhammad Humayun Khan
*/
		//void guessNumber();

/*		Program: 6.36 (Recursive Exponentiation) 
		Write a recursive function power( base, exponent ) that, when invoked, returns
				base^exponent
		For example, power( 3, 4 ) = 3 * 3 * 3 * 3. Assume that exponent is an integer greater than or equal to 1. Hint: The recursion step would use 
		the relationship 
						base^exponent = base ∑ base^exponent - 1
		and the terminating condition occurs when exponent is equal to 1, because base^1 = base
		
		Author: Muhammad Humayun Khan
*/
		//void recursiveExponentiation();

/*		Program: 6.37 (Fibonacci Series) 
		The Fibonacci series 0, 1, 1, 2, 3, 5, 8, 13, 21, Ö begins with the terms 0 and 1 and has the property that each succeeding term is the sum 
		of the two preceding terms. 
				(a) Write a nonrecursive function fibonacci(n) that uses type int to calculate the nth Fibonacci number. 
				(b) Determine the largest int Fibonacci number that can be printed on your system. Modify the program of part (a) to use double 
				    instead of int to calculate and return Fibonacci numbers, and use this modified program to repeat part (b).
    	
    	Author: Muhammad Humayun Khan
*/

		//void fibonacciSeries();

/*		Program: 6.38 (Tower of Hanoi)
		In this chapter, you studied functions that can be easily implemented both recursively and iteratively. In this exercise, we present a problem 
		whose recursive solution demonstrates the elegance of recursion, and whose iterative solution may not be as apparent. 
		The Towers of Hanoi is one of the most famous classic problems every budding computer scientist must grapple with. Legend has it that in a temple
		in the Far East, priests are attempting to move a stack of golden disks from one diamond peg to another (Fig. 6.35). The initial stack has 64
		disks threaded onto one peg and arranged from bottom to top by decreasing size. The priests are attempting to move the stack from one peg to 
		another under the constraints that exactly one disk is moved at a time and at no time may a larger disk be placed above a smaller disk. 
		Three pegs are provided, one being used for temporarily holding disks. Supposedly, the world will end when the priests complete their task, 
		so there is little incentive for us to facilitate their efforts. Let's assume that the priests are attempting to move the disks from peg 1 
		to peg 3. We wish to develop an algorithm that prints the precise sequence of peg-to-peg disk transfers. If we were to approach this problem with 
		conventional methods, we would rapidly find ourselves hopelessly knotted up in managing the disks. Instead, attacking this problem with recursion
		in mind allows the steps to be simple. Moving n disks can be viewed in terms of moving only n-1 disks (hence, the recursion), as follows:
		
		a) Move n-1 disks from peg 1 to peg 2, using peg 3 as a temporary holding area.
		b) Move the last disk (the largest) from peg 1 to peg 3.
		c) Move the n-1 disks from peg 2 to peg 3, using peg 1 as a temporary holding area.
		
		The process ends when the last task involves moving n = 1 disk (i.e., the base case). This task is accomplished by simply moving the disk, 
		without the need for a temporary holding area. Write a program to solve the Towers of Hanoi problem. Use a recursive function with four parameters:
		a) The number of disks to be moved
		b) The peg on which these disks are initially threaded
		c) The peg to which this stack of disks is to be moved
		d) The peg to be used as a temporary holding area
	
		Display the precise instructions for moving the disks from the starting peg to the destination peg. To move a stack of three disks from peg 1 to
		peg 3, the program displays the following moves:
		1 Å® 3 (This means move one disk from peg 1 to peg 3.)
		1 Å® 2
		3 Å® 2
		1 Å® 3
		2 Å® 1
		2 Å® 3
		1 Å® 3

		Author: Muhammad Humayun Khan
*/
		//void tower_hanoi();
		
/*		Program: 6.40 (Visualizing Recursion) 
		Itís interesting to watch recursion ìin action.î Modify the factorial function of Fig. 6.29 to print its local variable and recursive call 
		parameter. For each recursive call, display the outputs on a separate line and add a level of indentation. Do your utmost to make the
		outputs clear, interesting and meaningful. Your goal here is to design and implement an output format that helps a person understand recursion 
		better. You may want to add such display capabilities to the many other recursion examples and exercises throughout the text.
	
		Author: Muhammad Humayun Khan
*/
		//void recursive_factorial();

/*		Program: 6.41 (Recursive Greatest Common Divisor) 
		The greatest common divisor of integers x and y is the largest integer that evenly divides both x and y. Write a recursive function gcd that 
		returns the greatest common divisor of x and y, defined recursively as follows: If y is equal to 0, then gcd(x, y) is x; otherwise, gcd(x, y)
		is gcd(y, x % y), where % is the modulus operator. [Note: For this algorithm, x must be larger than y.]
		
		Author: Muhammad Humayun Khan
*/	

/*		Program: 6.42 (Recursive Greatest Common Divisor) 
		The greatest common divisor of integers x and y is the largest integer that evenly divides both x and y. Write a recursive function gcd that 
		returns the greatest common divisor of x and y, defined recursively as follows: If y is equal to 0, then gcd(x, y) is x; otherwise, gcd(x, y)
		is gcd(y, x % y), where % is the modulus operator. [Note: For this algorithm, x must be larger than y.]
		
		Author: Muhammad Humayun Khan
*/	
		//void recursive_gcd();
		/*
		void recursive_gcd(){
			int first_number, second_number;
			cout<<"Please enter two integers with space apart: ";
			cin>>first_number>>second_number;
			
			return (first_number > second_number ? (min = second_number) : (min = first_number));
		}
		*/
