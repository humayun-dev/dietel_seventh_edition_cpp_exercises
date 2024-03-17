/*
	Program: Credit Limit Calculator 
	Develop a C++ program that will determine whether a department-store customer has exceeded the credit limit on a charge
	account. For each customer, the following facts are available:
		a) Account number (an integer)
		b) Balance at the beginning of the month
		c) Total of all items charged by this customer this month
		d) Total of all credits applied to this customer's account this month
		e) Allowed credit limit
	The program should use a while statement to input each of these facts, calculate the new balance 
    (= beginning balance + charges � credits) and determine whether the new balance exceeds the customer�s credit limit. 
	For those customers whose credit limit is exceeded, the program should display the customer�s account number, credit limit,
	new balance and the message �Credit Limit Exceeded.�
	
	Author: Muhammad Humayun Khan
*/

class credit_limit_calculator {
	private:
		int acc_num;
		float start_balance, total_items_charge, in_out_account, credit_allowed, new_balance;
	public:
		credit_limit_calculator();			// by default constructor
		void setData();						// input and display the required data
};

