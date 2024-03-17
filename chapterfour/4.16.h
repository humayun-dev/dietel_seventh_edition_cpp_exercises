/*	Program: Salary Calculator
	Develop a C++ program that uses a while statement to determine the gross pay for each of several employees. The company pays �straight time� 
	for the first 40 hours worked by each employee and pays �time-and-a-half� for all hours worked in excess of 40 hours. You are given a list of the 
	employees of the company, the number of hours each employee worked last week and the hourly rate of each employee. Your program should input this
	information for each employee and should determine and display the employee�s gross pay.
	
	Author: Muhammad Humayun Khan
*/

class salaryCalculator{
	private:
		int total_hours, hour_per_rate, salary;
	public:
		salaryCalculator();			// by default calculator
		void setData();				// input and display the required data		
};

