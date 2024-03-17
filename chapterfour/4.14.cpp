#include<iostream>
#include "4.14.h"

using namespace::std;

credit_limit_calculator::credit_limit_calculator(){
	acc_num = 0;
	start_balance = total_items_charge = in_out_account = credit_allowed = new_balance = 0.0;
}

void credit_limit_calculator::setData(){
	cout<<"Enter Account Number (-1 to quit): ";
	cin>>acc_num;
	
	while(acc_num != -1){
		cout<<"Enter balance at the beginning of the month: ";
		cin>>start_balance;
		cout<<"Total of all items charged by this customer this month: ";
		cin>>total_items_charge;
		cout<<"Total of all credits applied to this customer this month: ";
		cin>>in_out_account;
		cout<<"Allowed credit limit: ";
		cin>>credit_allowed;
		
		new_balance = start_balance + total_items_charge - in_out_account;
		cout<<"New Balance: "<<new_balance<<endl;
		if(new_balance > credit_allowed){
			cout<<"Account Number: "<<acc_num<<endl<<"Credit Limit: "<<credit_allowed<<endl<<"Balance: "<<new_balance<<
			endl<<"Credit Limit Exceeded"<<endl;
		}
	cout<<"Enter Account Number (-1 to quit): ";
	cin>>acc_num;
	}
	
}
