/*	Program: Gas Mileage  
	Drivers are concerned with the mileage obtained by their automobiles. One driver has kept track of several
	tankfuls of gasoline by recording miles driven and gallons used for each tankful. Develop a C++ program that
	uses a while statement to input the miles driven and gallons used for each tankful. The program should calculate
	and display the miles per gallon obtained for each tankful and print the combined miles per gallon obtained
	for all tankfuls up to this point.
	
	Author: Muhammad Humayun Khan
*/

class gasMileage{
	private:
		double miles_driven,tankful,total_miles,total_tankful,miles_per_gallon, total_miles_per_gallon;
	public:
		gasMileage();		// by default constructor
		void setData();		// input and display of data
};

