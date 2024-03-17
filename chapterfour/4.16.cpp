#include<iostream>
#include "4.16.h"

using namespace::std;

// by default constructor definition
salaryCalculator::salaryCalculator(){
	total_hours = hour_per_rate = salary = 0;
}

// setData definition
void salaryCalculator::setData(){
		cout<<"Please enter total hours of the employee worked: ";
		cin>>total_hours;
		while(total_hours != -1){
			cout<<"Please enter hour rate of this employee: ";
			cin>>hour_per_rate;
			
			salary = total_hours * hour_per_rate;
			cout<<"Employee salary is: "<<salary<<endl;	
			
			cout<<"Please enter total hours of the employee worked: ";
			cin>>total_hours;
		}
	}
