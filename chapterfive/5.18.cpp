#include <iostream>
#include "5.18.h"

using namespace::std;


// by default constructor definition
numberSystems::numberSystems(){
	i = 1;
	j = binary = 0;
}

// setData() definition
void numberSystems::setData(){
	int number,decimal,power_of_ten = 1;
	cout<<"Please enter decimal to convert into binary: ";
	cin>>number;
	
	decimal = number;		// for the sake of output only at the end
	
	long long binary = 0;
    int remainder;

    // Until the value of number becomes 0.
    for(i = 1; number != 0; i++){
    	remainder = number % 2;
    	binary = binary + remainder * power_of_ten;
    	power_of_ten = power_of_ten * 10;		// power of 10 in decimal systems such as 123 = 3 * 10^0 2 = 10^1 1 = 10^2
    	number = number / 2;		// suppose number = 12 then 6 then 3 etc.
	}
    cout<<"The decimal "<<decimal<<" into binary is: "<<binary<<endl;
}
