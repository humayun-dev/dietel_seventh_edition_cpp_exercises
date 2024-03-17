#include<iostream>
#include "4.15.h"

using namespace::std;

salesCommisionCalculator::salesCommisionCalculator(){
	gross_sales = total_earnings = 0.0;
}

void salesCommisionCalculator::setData(){
	cout<<"Please enter salesperson's gross sales: (-1 to quit) $";
	cin>>gross_sales;
	
	while(gross_sales != -1){
		total_earnings = 200 + ((gross_sales / 100) * 9);	// calculating $200 salary and total gross 9 percent 
		cout<<"Total Earnings of the salesperson's: $"<<total_earnings<<endl;
		
		cout<<"Please enter salesperson's gross sales: (-1 to quit) $";
		cin>>gross_sales;
	}
}

