#include<iostream>
#include <iomanip>
#include "4.18.h"

using namespace::std;

// setData definition
void multiple_of_ten::setData(){
	cout<<"N"<<setw(13)<<"10 * N"<<setw(13)<<"100 * N"<<setw(13)<<"1000 * N"<<endl<<endl;
	int i = 1;
	while(i <= 5){
		cout<<i<<setw(13)<<10*i<<setw(13)<<100*i<<setw(13)<<1000*i<<endl;
		i++;
	}
}
