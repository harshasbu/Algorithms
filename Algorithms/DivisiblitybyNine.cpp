/*
 * DivisiblitybyNine.cpp
 *
 *  Created on: Jan 13, 2015
 *      Author: harsha
 */
//Finding Number Divisible by 9 using Logical operations
#include <iostream>
using namespace std;

bool divisibleByNine(int Number){
	if(Number == 0 or Number == 9){
		return true;
	}
	if(Number < 9)
		return false;
	return divisibleByNine((int)(Number>>3) - (int)(Number&7));
}

int main(){
	int Number;
	cout << "Enter the number you want to find the divisible By Nine:";
	cin >> Number;
	if(divisibleByNine(Number))
		cout << "The number is divisible by Nine" << endl;
	else
		cout << "The number is not divisible by Nine" << endl;
	return 0;
}



