//coded by Justine Agcanas to learn more about c++
#include <iostream>
#ifdef __cplusplus__
  #include <cstdlib>
#else
  #include <stdlib.h>
#endif
using namespace std;


int start(int y, int z, int operation) {
	int result;
	switch(operation) {
		case 1: //addition
			result = y + z;
		break;
		case 2: //substraction
			result = y - z;
		break;
		case 3: //multiplication
			result = y * z;
		break;
		case 4: //division
			result = y / z;
		break;
		default:
			result = 69;
		break;
	}
	
	return result;
}

int main(){
	int y, z;
	int operation;
	int add, subtract, miltiply, divide;
	int result;
	string calcu;
	
	cout << "Enter the first number: ";
	cin >> y;
	
	if (system("CLS")) system("clear");
	
	cout << "[1 - addition] \n[2 - substraction] \n[3 - multiplication] \n[4 - division] \n\nChoose an operation: ";	
	cin >> operation;
	
	if (operation >= 4) {
		cout << "Wrong input [1, 2, 3, 4]: ";
		cin >> operation;
	}
	
	if (system("CLS")) system("clear");
	
	cout << "Enter the second number: ";
	cin >> z;
	
	if (system("CLS")) system("clear");
	
	result = start(y, z, operation);
	cout << "The answer is: " << result;
	
	cout << "\n\n<=================>\n\n";
	
	cout << endl << "Calculate more? [y, n]: ";
	cin >> calcu;
	
	if (calcu == "y" || calcu == "Y") {
		if (system("CLS")) system("clear");
		main();
	} else {
		return 0;
	}
}
