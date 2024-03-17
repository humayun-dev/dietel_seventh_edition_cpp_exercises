/*		Program: (Drawing Patterns with Nested for Loops) 
		Write a program that uses for statements to print the following patterns separately, one below the other. Use for loops to generate the patterns.
		All asterisks (*) should be printed by a single statement of the form cout << '*'; (this causes the asterisks to print side by side). 
		[Hint: The last two patterns require that each line begin with an appropriate number of blanks. Extra credit: Combine your code from the four separate
		problems into a single program that prints all four patterns side by side by making clever use of nested for loops.]

(a) 			(b) 					(c) 				(d)
* 			********** 				********** 				*
** 			********* 				 ********* 			   **
*** 		******** 				  ******** 			  ***
**** 		******* 				   ******* 			 ****
***** 		****** 					    ****** 			*****
****** 		***** 					     ***** 		   ******
******* 	**** 					      **** 		  *******
******** 	*** 					       *** 		 ********
********* 	** 						        ** 		*********
********** 	* 						         * 	   **********
		
		Author: Muhammad Humayun Khan
*/

class patterns{
	private:
		int i, j;
	public:
		patterns();				// by default constructor
		void setData();
};
