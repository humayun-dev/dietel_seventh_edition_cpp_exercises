#include <iostream>
#include <vector>		// for the vector concept

using namespace::std;

/*
// implementation of the linear search
int search(int [],int);		// function prototype

void linear_searching(){
	
	int array[100],i,element,result;
	
	// create some data for the array
	for(i = 0; i < 100; i++){
		array[i] = i + 5;
	}	
	
	// display the created elements in the array
	for(i = 0; i < 100; i++){
		cout<<array[i]<<" ";
		if(i != 0 && i % 20 == 0){
			cout<<endl;
		}
	}
	cout<<endl;
	// user input for the searched element
	cout<<"Please enter the element for the linear search: ";
	cin>>element;
	
	result = search(array,element);
	if(result != -1){
		cout<<"The element "<<element<<" found at "<<result<<" index number"<<endl;
	}else{
		cout<<"Element not found in the array";
	}
}
// search function will traverse in the array for searching of the user input
int search(int array[],int key){
	for(int i = 0; i < 100; i++){
		if(array[i] == key){
			return i;
		}
	}
	return -1;
}
*/

// sorting of the array
/*
void array_sort(){
	int array[10] = {36,56,4,10,77,51,93,30,5,52}, i, j, temp;
	cout<<"Unsorted array is: "<<endl;
	
	// dipslay of unsorted array
	for(i = 0; i < 10; i++){
		cout<<array[i]<<" ";
	}
	cout<<endl;
	cout<<"Sorted array is: "<<endl;
	// outer loop for the overall iterations and inner loop for the comparison
	for(i = 0; i < 10; i++){
		for(j = 0; j < 9 - i; j++){
			if(array[j] > array[j + 1]){
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}	
	// display of sorted array
	for(i = 0; i < 10; i++){
		cout<<array[i]<<" ";
	}
}
*/

// vectors in C++ having static number of values such as 5 only
void vector_concept() {
    vector<int> myVec;
    int i;
    // adding values to the vector using pushback()
    for(i = 0; i < 5; i++){
    	myVec.push_back(i);
	}
	// display of the vector elements
    for (i = 0; i < myVec.size(); i++) {
        cout<<myVec[i]<<endl;
    }
}

// vectors in c++ having dynamic number of values
void vector_dynamic(){
	vector<int> vecDynamic;
	int input;
	cout<<"Please enter the integers to be entered in the vector (non-integer value to stop): ";
	
	// store input values into the vector
	while(cin >> input){
		vecDynamic.push_back(input);
	}
	
	// display of the values
	for(int i = 0; i < vecDynamic.size(); i++){
		cout<<vecDynamic[i]<<" ";
	}
}







