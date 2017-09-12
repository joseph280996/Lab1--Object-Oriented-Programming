//Description: This program takes in the number of gallon of paint and calculate the cost and display it
//Programmer: Tung Pham
//Date: 09/11/17
//Lab: Lab 1
#include <iostream>
#include <iomanip>
using namespace std;
int main() {

	//Initializing the Variable
	double paintGallon;
	double cost;

	//Ask for user input
	cout << "Please enter the number of gallon of paint: ";
	cin >> paintGallon;
	
	//Calculate the cost 
	cost = paintGallon * 5 * 106.5 / 100;
	cout << fixed << setprecision(2) << "Total: $" << cost;
	cin.ignore();
	cin.get();
	return 0;
}