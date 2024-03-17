/*		Program: Asterisk pattern
		Author: Muhammad Humayun Khan
*/

#include<iostream>
#include "4.25.h"

using namespace::std;

asteriskPattern::asteriskPattern(){
	patternSize = 0;
}

// display the asterisk pattern
void asteriskPattern::displayPattern(){
	cout<<"Please enter the size for the asterisk pattern: ";
	cin>>patternSize;
	
	int rows = 1,columns;
	while(rows <= patternSize){
		columns = 1;
		while(columns <= patternSize){
			if(rows == 1 || rows == patternSize || columns == 1 || columns == patternSize){
				cout<<"*";
			}else {
				cout<<" ";
			}
			columns++;
		}
		cout<<endl;
		rows++;
	}
}
