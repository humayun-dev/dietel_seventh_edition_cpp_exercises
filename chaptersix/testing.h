#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace::std;

// rolling dice game
/*
int rollDice();
int rollingDiceGame(){
	enum Status {CONTINUE, WIN, LOSES};
	int sum_of_dice;
	
	Status gameStatus;
	int userPoints;
	
	srand(time(0));
	
	sum_of_dice = rollDice();
	switch(sum_of_dice){
		case 7:
		case 11:
			gameStatus = WIN;
			break;
		case 2:
		case 3:
		case 12:
			gameStatus = LOSES;
			break;
		default:
			gameStatus = CONTINUE;
			userPoints = rollDice();
			cout<<"User points: "<<userPoints<<endl;
			break;			
	}
	while(gameStatus == CONTINUE){
		sum_of_dice = rollDice();
		
		if(sum_of_dice == userPoints){
			gameStatus = WIN;
		}else if(sum_of_dice == 7){
			gameStatus = LOSES;
		}
		if(gameStatus == WIN){
			cout<<"Player wins";
		}else{
			cout<<"Player loses";
		}
	}
	return 0;
}

int rollDice(){	
	int diceOne = 1 + rand() % 6;
	int diceTwo = 1 + rand() % 6;
	
	int sum = diceOne + diceTwo;
	
	cout<<"Player roll "<<diceOne<<" + "<<diceTwo<<" = "<<sum<<endl;
	return sum;
}
*/

// scope resolution operator to access the global variable
/*
int scope_resolution_operator(){
	int number = 7;
	{
		int number = 8;
		cout<<"The local number is: "<<number<<endl;
		cout<<"The global number is: "<< ::number<<endl;
	}
	return 0;
}
*/

// function template
template <class T>
	T maximum(T valueOne, T valueTwo, T valueThree){
		T maximum = valueOne;
		if(valueTwo > maximum){
			maximum = valueTwo;
		}else if(valueThree > maximum){
			maximum = valueThree;
		}
		return maximum;
	}
int function_template(){	
	int first, second, third;
	cout<<"Please enter three values with space apart: ";
	cin>>first>>second>>third;
	
	cout<<"The maximum value is: "<<maximum(first,second,third)<<endl;;
	
	
	double firstvalue,secondvalue,thirdvalue;
	cout<<"Please enter three double values with space apart: ";
	cin>>firstvalue>>secondvalue>>thirdvalue;
	
	cout<<"The maximum value is: "<<maximum(firstvalue,secondvalue,thirdvalue);
	
}
