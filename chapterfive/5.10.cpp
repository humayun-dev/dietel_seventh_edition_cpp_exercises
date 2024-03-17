#include <iostream>
#include "5.10.h"
#include <iomanip>

using namespace::std;

// by default constructor definition
factorial::factorial(){
	result = 1;
}

// setData definition
void factorial::setData(){
	cout<<"Value"<<setw(13)<<"Factorial"<<endl;
	for(int i = 1; i <= 5; i++){
		result = 1;
		for(int j = 1; j <= i; j++){
			result = result * j;
		}
		cout<<i<<setw(13)<<result<<endl;
	}
}
