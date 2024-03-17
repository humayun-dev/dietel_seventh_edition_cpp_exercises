#include <iostream>
#include "5.23.h"

using namespace::std;

diamondAsterisk::diamondAsterisk(){
	i = j = 0;
}

// setData definition
void diamondAsterisk::setData(){
	/*
	int n, c, k, space = 1;

    cout << "Enter number of rows: ";
    cin >> n;

    space = n - 1;

    for (k = 1; k <= n; k++) {
        for (c = 1; c <= space; c++)
            cout << " ";
        space--;

        for (c = 1; c <= 2 * k - 1; c++)
            cout << "*";

        cout << endl;
    }
    */
    
    
   int n;
   cout<<"Please enter the number of rows: ";
   cin>>n;
   
    for(int i = 1; i < n; i++){
    	for(int j = i; j <= n; j++){
    		cout<<" ";
		}
		for(int j = 1; j < i; j++){
			cout<<"*";
		}
		for(int j = 1; j <= i; j++){
			cout<<"*";
		}
		cout<<endl;
	}
	for(int i = 1; i <= n; i++){
    	for(int j = 1; j <= i; j++){
			cout<<" ";
		}
		for(int j = i; j < n; j++){
			cout<<"*";
		}
		for(int j = i; j <= n; j++){
    		cout<<"*";
		}
		
		
		cout<<endl;
	}
	
}
