#include<iostream>
#include "4.13.h"

using namespace::std;

// by default constructor
gasMileage::gasMileage(){
	miles_driven = tankful = total_miles = total_tankful = miles_per_gallon = total_miles_per_gallon = 0.0;
}

// setData
void gasMileage::setData(){
	cout<<"Enter Miles driven (-1 to quit): ";
	cin>>miles_driven;
	
	while(miles_driven != (-1)){
		cout<<"Enter gallons used for each tankful: ";
		cin>>tankful;	
		
		miles_per_gallon = miles_driven / tankful;	// miles_per_gallon for one tankful
		cout<<"Miles per gallon for this tankful: "<<miles_per_gallon<<endl;
		
		total_miles += miles_driven;	// total miles
		total_tankful += tankful;		// total tankful
		
		total_miles_per_gallon = total_miles / total_tankful;	// total miles per total tankful
		
		cout<<"Combine miles per gallon = "<<total_miles_per_gallon<<endl;
		cout<<"Enter Miles Drive (-1 to quit): ";
		cin>>miles_driven;
	}
}
