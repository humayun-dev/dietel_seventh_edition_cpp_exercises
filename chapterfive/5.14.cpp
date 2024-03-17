#include <iostream>
#include "5.14.h"

using namespace::std;

// by default constructor intitializing of the private data attributes
totalSales::totalSales(){
	retail_price = quantity_sold= 0.0;
	product_number = 0;
}

// required input and display of data
void totalSales::setData(){
	cout<<"Please enter the product number 1-5 (-1 to quit): ";
	cin>>product_number;
	
	while(product_number != -1){
		cout<<"Please enter the quantity sold: ";
		cin>>quantity_sold;
		
		switch(product_number){
		case 1:
			retail_price = 2.98;
			cout<<"The retail price of the product is $"<<retail_price<<" and total retail value of all products sold "<<retail_price * quantity_sold<<endl;
			break;
		case 2:
			retail_price = 4.50;
			cout<<"The retail price of the product is $"<<retail_price<<" and total retail value of all products sold "<<retail_price * quantity_sold<<endl;
			break;
		case 3:
			retail_price = 9.98;
			cout<<"The retail price of the product is $"<<retail_price<<" and total retail value of all products sold "<<retail_price * quantity_sold<<endl;
			break;
		case 4:
			retail_price = 4.49;
			cout<<"The retail price of the product is $"<<retail_price<<" and total retail value of all products sold "<<retail_price * quantity_sold<<endl;
			break;
		case 5:
			retail_price = 6.87;
			cout<<"The retail price of the product is $"<<retail_price<<" and total retail value of all products sold "<<retail_price * quantity_sold<<endl;
			break;
		default:
			cout<<"Wrong product ID provided";
			break;
		}
		cout<<"Please enter the product number 1-5 (-1 to quit): ";
		cin>>product_number;
	}	
}
