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
