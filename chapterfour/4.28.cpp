#include<iostream>
#include "4.28.h"

using namespace::std;

// by default construction
checkerBoard::checkerBoard(){
	num_of_rows = rows = cols = 0;
}

// setData defintion for the board
void checkerBoard::setData(){
	cout<<"Please enter the number of rows: ";
	cin>>num_of_rows;
	
	rows = 1;
	while(rows <= num_of_rows){
		if(rows % 2 == 0){
			cout<<" ";
		}
		cols = 1;
		while(cols <= num_of_rows){
			cout<<"* ";
			cols++;
		}
		cout<<endl;
		rows++;
	}
}

