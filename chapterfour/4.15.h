/*		Program: (Sales Commission Calculator) 
		A large company pays its salespeople on a commission basis. The salespeople each receive $200 per week plus 9% of their gross sales for that week.
		For example, a salesperson who sells $5000 worth of chemicals in a week receives $200 plus 9% of $5000, or a total of $650. Develop a C++ program
		that uses a while statement to input each salesperson�s gross sales for last week and calculates and displays that salesperson�s earnings.
		Process one salesperson�s figures at a time.
		Author: Muhammad Humayun Khan
*/

class salesCommisionCalculator{
	private:
		float gross_sales, total_earnings;
	public:
		salesCommisionCalculator();		// by default constructor
		void setData();						// input and display the required data
};


