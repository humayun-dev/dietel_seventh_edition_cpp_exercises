#include <iostream>
#include "header_file.h"
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace::std;

// 6.12 task
/*
void calculateCharges(){
	float hours = 0.0;
	int flag = 1;
	
	cout<<"Please enter the hours parked for three cars space apart: ";
	for(int i = 1; i <= 3; i++){
		cin>>hours;
		
		// The following condition is only to print the table heading once
		if(flag){
			cout<<"Car"<<setw(13)<<"Hours"<<setw(13)<<"Charge"<<endl;
			flag = 0;  // will stop to execute more than one
		}
		
		if(hours <= 3){
			cout<<i<<setw(13)<<hours<<setw(13)<<hours * 2.0<<endl;
		}else if(hours > 3 && hours < 24){
			cout<<i<<setw(13)<<hours<<setw(13)<<hours * 2.0 * 0.50<<endl;
		}else{
			cout<<i<<setw(13)<<hours<<setw(13)<<10.0<<endl;
		}
	}	
}
*/

// 6.18 task
/*
void exponentiation(){
	int base, power, number, result = 1;
	
	cout<<"Please enter the base: ";
	cin>>base;
	cout<<"Please enter the power to the base: ";
	cin>>power;
	
	number = base;	// for output only
	
	for(int i = 1; i <= power; i++){
		result *= base;
	}
	cout<<"The base "<<number<<" to the power "<<power<<" is: "<<result<<endl;
}
*/

// 6.19 task
/*
void hypotenuse(){
		double side_one, side_two, bigger_side;
		int i;		
		
		for(i = 1; i <= 3; i++){
			cout<<"Please enter both sides of the right triangle with space apart: ";
			cin>>side_one>>side_two;
			
			bigger_side = sqrt(side_one * side_one + side_two * side_two);
			
			cout<<"Sr. No"<<setw(13)<<"Side 1"<<setw(13)<<"Side 2"<<setw(13)<<"Hypotenuse"<<endl<<endl;
			cout<<i<<setw(13)<<side_one<<setw(13)<<side_two<<setw(13)<<bigger_side<<endl;
		}		
}	
*/

// 6.20 task
/*
void multiples(){
	int first_number, second_number;
	for(int i = 1; i <= 3; i++){
		cout<<"Please enter two integers to test the multiples: ";
		cin>>first_number>>second_number;
	
		if(first_number % second_number == 0){
			cout<<first_number<<" is a multiple of "<<second_number<<endl;
		}else{
			cout<<first_number<<" is not a multiple of "<<second_number<<endl;;
		}
	}	
}
*/

// 6.28 task
/*
void isPerfect(){
	int i,j,result = 0;
	cout<<"Perfect Numbers from 1 to 1000 are: "<<endl;
	for(i = 1; i <= 1000; i++){
		result = 0;				// calculation from start
		for(j = 1; j < i; j++){
			if(i % j == 0){
				result = result + j;
			}
		}
		if(result == i){
			cout<<i<<endl;
		}
	}
}
*/

// 6.29 task
/*
void primeNumbers(){
		
		int number, count = 0, i;
		cout<<"Please enter the integer: ";
		cin>>number;
		
		for(i = 1; i <= number; i++){
			if(number % i == 0){
				count++;
			}
		}
		if(count == 2){
			cout<<"Prime number";
		}else{
			cout<<"Not prime number";
		}		
	}
*/

// 6.31 task
/*
void gcd(){
	int firstNumber, secondNumber, i, min,greatest_common_divisor;
	cout<<"Please enter two integers with space apart: ";
	cin>>firstNumber>>secondNumber;
	
	if(firstNumber > secondNumber){
		min = secondNumber;
	}else{
		min = firstNumber;
	}
	
	for(i = 1; i <= min; i++){
		if( (firstNumber % i == 0) && (secondNumber % i == 0)){
			greatest_common_divisor = i;
		}
	}
	cout<<"The greatest common divisor of "<<firstNumber<<" and "<<secondNumber<<" is "<<greatest_common_divisor<<endl;
}
*/

// 6.33 task
/*
void coinTossing(){
	 	int head = 0, tail = 0, i;
	 	srand(time(0));			// for coin tossing having seed value of current time
	 	
	 	for(i = 1; i <= 100; i++){
	 		(1 + rand() % 2 == 1) ? head++ : tail++;
		 }
		 cout<<"The head appears "<<head<<" times "<<endl;
		 cout<<"The tail appears "<<tail<<" times "<<endl;
	 }
*/

// 6.34 task
void guessNumber(){
	srand(time(0)); // Seed the random number generator
    char ch;

    do {
        int secretNumber = 1 + rand() % 1000; // Generate a random number between 1 and 1000
        int guess;
        bool correct = false;

        cout<<"I have a number between 1 and 1000."<<endl;
        cout<<"Can you guess my number?"<<endl;
        cout<<"Please type your first guess."<<endl;

        while (!correct) {
            cin>>guess;

            if(guess == secretNumber){
                cout << "Excellent! You guessed the number!" << endl;
                correct = true;
            } else {
                string message = (guess > secretNumber) ? "Too high. Try again." : "Too low. Try again.";
                cout<<message<<endl;
            }
        }

        cout<<"Would you like to play again (y or n)? ";
        cin>>ch;

    } while(ch == 'y' || ch == 'Y');
}

// 6.36 task
int recursive_basePower(int,int);			// prototype for the recursive function
void recursiveExponentiation(){
	int base = 0, power = 0, result = 0;
	cout<<"Please enter base and raised to the power space apart: ";
	cin>>base>>power;
	
	result = recursive_basePower(base,power);
	cout<<"The base "<<base<<" raised to the power "<<power<<" is "<<result<<endl;	
}
// recursive function definition
int recursive_basePower(int b, int p){
	return p == 1 ? b : b * recursive_basePower(b,p - 1);
}

// 6.37 task
void fibonacciSeries(){
	double limit = 0.0, prev = 0.0, newnumber = 1, latest = 0;
	int i = 0;
	cout<<"Please enter the limit of the fabonacci Series: ";
	cin>>limit;
	
	for(i = 0; i < limit; i++){
		if(i <= 1){
			latest = i;
		}else{
			latest = prev + newnumber;
			prev = newnumber;
			newnumber = latest;
		}		
		cout<<latest<<" ";
		
		if( (i > 0) && (i % 50) == 0){
			cout<<endl;
		}		
	}	
}

// 6.38 task
void tower_process(int,char,char,char);
void tower_hanoi(){
	char source = 'A', temp = 'B', destination = 'C';
	int number_disc = 0;
	cout<<"Please enter the number of disc for the tower of honoi: ";
	cin>>number_disc;
	
	tower_process(number_disc, source, temp, destination);
}

void tower_process(int number_disc, char source, char temp, char destination){
	if(number_disc == 1){
		cout<<"Move disc 1 from "<<source<<" to "<<destination<<endl;
	}else{
		tower_process(number_disc - 1, source, destination, temp);
		cout<<"Move disc "<<number_disc<<" from "<<source<<" to "<<destination<<endl;
		tower_process(number_disc - 1, temp, source, destination);
	}
}

// task 6.40 
		int fact_recursion(int);			// prototype
		void recursive_factorial(){
			int number,factorial;
			cout<<"Please enter the factorial number: ";
			cin>>number;
			
			factorial = fact_recursion(number);
			cout<<"The factorial is: "<<factorial<<endl;
		}
		int fact_recursion(int number){
			return (number == 1) ? 1 : number * fact_recursion(number - 1);
		}	






























