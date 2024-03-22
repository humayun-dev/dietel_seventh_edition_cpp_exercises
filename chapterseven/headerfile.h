/*	Program: Chapter 7 exercise solution of Dietel 7th Edition
	Author: Muhammad Humayun Khan
*/

/*	Program: 7.10 (Salesperson Salary Ranges) 
	Use a one-dimensional array to solve the following problem. A company pays its salespeople on a commission basis. The salespeople each receive $200 per 
	week plus 9 percent of their gross sales for that week. For example, a salesperson who grosses $5000 in sales in a week receives $200 plus 9 percent of 
	$5000, or a total of $650. Write a program (using an array of counters) that determines how many of the salespeople earned salaries in each of the 
	following ranges (assume that each salesperson’s salary is truncated to an integer amount):
		a) $200–299
		b) $300–399
		c) $400–499
		d) $500–599
		e) $600–699
		f) $700–799
		g) $800–899
		h) $900–999
		i) $1000 and over

	Author: Muhammad Humayun Khan
*/

	void sales_person(){
		int i, fixed_salary = 200, salepeople[] = {0}, bonus = 0, input, array_size,salary_range[9] = {0};
		double totalsalary;
		
		cout<<"Please enter the gross sale for each person (non-integer to end): ";
		while(cin>>input){
			salepeople[i++] = input;
			cout<<"Please enter the gross sale for each person (non-integer to end): ";
		}
		
		// to calculate the salary
		array_size = sizeof(salepeople) / sizeof(salepeople[0]);
		for(i = 0; i < array_size; i++){
			totalsalary = static_cast<double>(fixed_salary + (salepeople[i] * 9 / 100 ));
			
			if(totalsalary >= 200 && totalsalary < 300){
				salary_range[0]++;
			}else if(totalsalary >= 300 && totalsalary < 400){
				salary_range[1]++;
			}else if(totalsalary >= 400 && totalsalary < 500){
				salary_range[2]++;
			}else if(totalsalary >= 500 && totalsalary < 600){
				salary_range[3]++;
			}else if(totalsalary >= 600 && totalsalary < 700){
				salary_range[4]++;
			}else if(totalsalary >= 700 && totalsalary < 800){
				salary_range[5]++;
			}else if(totalsalary >= 800 && totalsalary < 900){
				salary_range[6]++;
			}else if(totalsalary >= 900 && totalsalary < 1000){
				salary_range[7]++;
			}else{
				salary_range[8]++;
			}
		}
		
		// to display the salary range
		cout<<"Employees in the range: "<<endl;
		for(i = 0; i < 9; i++){
			int lower_bound = 200 + (i * 100);
    		int upper_bound = lower_bound + 99;
    		cout <<"$"<<lower_bound<<"-$"<<upper_bound<<": "<<salary_range[i]<<endl;
		}		
	}

/*	Program: 7.15 (Duplicate Elimination) 
	Use a one-dimensional array to solve the following problem. Read in 20 numbers, each of which is between 10 and 100, inclusive. As each number is read,
	validate it and store it in the array only if it isn’t a duplicate of a number already read. After reading all the values, display only the unique 
	values that the user entered. Provide for the “worst case” in which all 20 numbers are different. Use the smallest possible array to solve this problem.
	
	Author: Muhammad Humayun Khan
*/
void duplicate_elimination(){
    int array[10] = {0}, i = 0, j, input, flag = 1;
    
    cout<<"Please enter integers between 10 and 100: "<<endl;
    while(i < 20){
        cout<<"Please enter integer "<<i + 1<<": ";
        cin>>input;
        
        if(input >= 10 && input <= 100){
            for(j = 0; j < i; j++){
                if(array[j] == input){
                    flag = 0;
                    cout<<"Duplicate found! Please enter a different integer."<<endl;
                    break;
                }
            }
            if(flag) {
                array[i] = input;
                i++;
            }
        }
        else {
            cout<<"Please enter an integer between 10 and 100."<<endl;
        }
        flag = 1;
    }
    
    cout<<"Array elements are: "<<endl;
    for(i = 0; i < 10; i++){
        cout<<array[i]<<" ";
    }
}

/*	Program: 7.17 (Dice Rolling) 
	Write a program that simulates the rolling of two dice. The program should use rand to roll the first die and should use rand again to roll the 
	second die. The sum of the two values should then be calculated. [Note: Each die can show an integer value from 1 to 6, so the sum of the two values
	will vary from 2 to 12, with 7 being the most frequent sum and 2 and 12 being the least frequent sums.] Figure 7.26 shows the 36 possible combinations
	of the two dice. Your program should roll the two dice 36,000 times. Use a one-dimensional array to tally the numbers of times each possible sum 
	appears. Print the results in a tabular format. Also, determine if the totals are reasonable (i.e., there are six ways to roll a 7, so approximately 
	one-sixth of all the rolls should be 7).
	
	Author: Muhammad Humayun Khan
*/
	#include <cstdlib>
	#include <iomanip>
	void dice_rolling(){
		int first_dice, second_dice, sum, result[11] = {0}, i;
		for(i = 0; i < 36000; i++){
			first_dice = 1 + rand() % 6;
			second_dice = 1 + rand() % 6;		
			sum = first_dice + second_dice;
			
			result[sum - 2]++;			// count the frequency sum
		}
		// display of the result in tabular format
		cout<<"Sum "<<setw(13)<<"Frequency "<<endl;		
		for(i = 0; i < 11; i++){
			cout<<i+2<<setw(13)<<result[i]<<endl;
		}		
	}

/* 	Program: (Airline Reservations System) 
	A small airline has just purchased a computer for its new automated reservations system. You’ve been asked to program the new system. You are to write
	a program to assign seats on each flight of the airline’s only plane (capacity: 10 seats). Your program should display the following menu of 
	alternatives —Please type 1 for "First 	Class" and Please type 2 for "Economy". If the person types 1, your program should assign a seat in the first 
	class section (seats 1–5). If the person types 2, your program should assign a seat in the economy section (seats 6–10). Your program should print 
	a boarding pass indicating the person’s seat number and whether it’s in the first class or economy section of the plane. Use a one-dimensional array 
	to represent the seating chart of the plane. Initialize all the elements of the array to false to indicate that all seats are empty. As each seat is 
	assigned, set the corresponding elements of the array to true to indicate that the seat is no longer available. Your program should, of course, never 
	assign a seat that has already been assigned. When the first class section is full, your program should ask the person if it’s acceptable to be placed in the
	economy section (and vice versa). If yes, then make the appropriate seat assignment. If no, then print the message "Next flight leaves in 3 hours."
	
	Author: Muhammad Humayun Khan
*/
	#include<cstdlib>
	#include<ctime>	
	void reservation_system(){
		int input, seats[10] = {0}, seatAssigned;
		cout<<"Select 1 for First Class & 2 for Economy Class: ";
		cin>>input;
		
		srand(time(NULL));
		
		switch(input){
			case 1:
				cout<<"First Class"<<endl;
				 seatAssigned = 1 + rand() % 5;
				 if(seatAssigned){
				 	if(seats[seatAssigned] == 0){
				 		seats[seatAssigned] = 1;	// seat reserved
					 }else{
					 	// when seat is already reserved 
					 	while(seats[seatAssigned] != 0){
					 		seatAssigned = 1 + rand() % 5;	
						 }
						 seats[seatAssigned] = 1; 	// reserve the new seat
					 }
				 }
				 cout<<"You will travel in First Class having seat number: "<<seatAssigned<<endl;
				break;
			case 2:
				cout<<"Economy Class"<<endl;
				// random number generation from 7 to 10
				seatAssigned = rand() % 4 + 7;		// from 0 to 3
				if(seatAssigned){
				 	if(seats[seatAssigned] == 0){
				 		seats[seatAssigned] == 1;
					 }else{
					 	while(seats[seatAssigned] != 0){
					 		seatAssigned = rand() % 4 + 7;
						 }
						 seats[seatAssigned] = 1;	// reserve the new seat
					 }
				 }
				 cout<<"You will travel in Economy Class having seat number: "<<seatAssigned<<endl;
				break;
			default:
				cout<<"Wrong selection.";
				break;
		}		
	}

/*	Program: 7.22 (Sales Summary) 
	Use a two-dimensional array to solve the following problem. A company has four salespeople (1 to 4) who sell five different products (1 to 5). 
	Once a day, each salesperson passes in a slip for each different type of product sold. Each slip contains the following:
		a) The salesperson number
		b) The product number
		c) The total dollar value of that product sold that day
	Thus, each salesperson passes in between 0 and 5 sales slips per day. Assume that the information from all of the slips for last month is available.
	Write a program that will read all this information for last month’s sales and summarize the total sales by salesperson by product. All totals should
	be stored in the two-dimensional array sales. After processing all the information for last month, print the results in tabular format with each of 
	the columns representing a particular salesperson and each of the rows representing a particular product. Cross total each row to get the total sales 
	of each product for last month; cross total each column to get the total sales by salesperson for last month. Your tabular printout should include 
	these cross totals to the right of the totaled rows and to the bottom of the totaled columns.

	Author: Muhammad Humayun Khan
*/

	void sales_summary(){		
		int num_of_prod = 5, sale_person = 4, i,sales[4][5],j;
		
		// data input for the problem
		for(i = 0; i < sale_person; i++){
			for(j = 0; j < num_of_prod; j++){
				cout<<"Please enter sales for saleperson "<<i + 1<<" for product "<<j+1<<" : ";
				cin>>sales[i][j];				
			}
			cout<<endl;
		}
		// display of the saleperson 		
		cout<<"Salesperson\t";
		for(i = 0; i < sale_person; i++){
			cout<<i + 1<<"\t";
		}
	// Prints total for each saleperson
	cout<<"Total"<<endl;    
    for(int i = 0; i < num_of_prod; i++){
    	cout<<"Product "<<i + 1<<" \t";
    	int productTotal = 0;
    	for(int j = 0; j < sale_person; j++){
    		cout<<sales[j][i]<<"\t";
    		productTotal += sales[j][i];
		}
		cout<<productTotal<<endl;
	}
	// Print totals for each salesperson
    cout << "Total\t\t";
    int grandTotal = 0;
    for(int i = 0; i < 4; i++){
    	int personTotal = 0;
    	for(int j = 0; j < 5; j++){
    		personTotal += sales[i][j];
		}
		grandTotal += personTotal;
		cout<<personTotal<<"\t";
	}
	cout<<grandTotal<<endl;
	}
	
/*	Program: 7.23 turtle graphics
	Author: Muhamamd Humayun Khan
*/
	const int size = 20;
	void initial_grid(char grid[size][size], int);		// initial grid prototype
	void print_grid(char grid[size][size],int);		// printing the grid
	void move_object(int&, int&, char grid[][size], char);	// when object moves in the grid
	void right_turn(int&);	// when object turns right
	void left_turn(int&);	// when object turns left
	void move_forward(int&, int&, int, char grid[][size], char);
		
	int turtle_movement() {
	    const int size = 20;
	    char grid[size][size];
	    initial_grid(grid, size);
	
	    int xPos = 0, yPos = 0, orientation = 0; // Initial position and orientation
	
	    while (true) {
	        print_grid(grid, size);
	        cout<<"Please enter command (1 for space, 2 for asterisk, 3 for turn right, 4 for turn left, 9 to quit): ";
	        int command;
	        cin>>command;
	
	        switch(command){
	            case 1:
	                move_object(xPos, yPos, grid, ' ');
	                break;
	            case 2:
	                move_object(xPos, yPos, grid, '*');
	                break;
	            case 3:
	                right_turn(orientation);
	                break;
	            case 4:
	                left_turn(orientation);
	                break;
	            case 9:
	                cout<<"Final grid is: "<<endl;
	                print_grid(grid, size);
	                return 0;
	            default:
	                cout<<"Your selection is wrong."<<endl;
	        }
	        
	        // Move forward after each command
	        move_forward(xPos, yPos, orientation, grid, '*');
	    }
	}
	// Initializes the grid with empty spaces.
	void initial_grid(char grid[][20], int size){
	    for(int i = 0; i < size; ++i){
	        for (int j = 0; j < size; ++j){
	            grid[i][j] = ' ';
	        }
	    }
	}
	// Prints the grid to the console
	void print_grid(char grid[][20], int size){
	    for(int i = 0; i < size; ++i){
	        for(int j = 0; j < size; ++j){
	            cout << grid[i][j] << ' ';
	        }
	        cout << endl;
	    }
	}
	// Moves the turtle on the grid and places the specified character
	void move_object(int& xPos, int& yPos, char grid[][20], char ch) {
	    if (xPos >= 0 && xPos < 20 && yPos >= 0 && yPos < 20) {
	        grid[yPos][xPos] = ch;
	    } else {
	        cout << "Invalid position" << endl;
	    }
	}
	// Updates the turtle's orientation to turn right
	void right_turn(int& orientation) {
	    orientation = (orientation + 1) % 4;
	}
	// Updates the turtle's orientation to turn left
	void left_turn(int& orientation) {
	    orientation = (orientation + 3) % 4;
	}
	// Moves the turtle forward in the direction it's facing
	void move_forward(int& xPos, int& yPos, int orientation, char grid[][20], char ch){
	    switch (orientation) {
	        case 0: // Move upward
	            if (yPos > 0)
	                --yPos;
	            break;
	        case 1: // Move to the right
	            if (xPos < 19)
	                ++xPos;
	            break;
	        case 2: // Move downward
	            if (yPos < 19)
	                ++yPos;
	            break;
	        case 3: // Move to the left
	            if (xPos > 0)
	                --xPos;
	            break;
	    }
	    move_object(xPos, yPos, grid, ch);
	}
