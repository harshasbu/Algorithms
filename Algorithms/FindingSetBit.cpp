/*
 * FindingSetBit.cpp
 *
 *  Created on: Jan 14, 2015
 *      Author: harsha
 */
#include <iostream>

using namespace std;

int Powerof2(int Number){
	return Number & (!(Number & (Number - 1)));
}


int Position(int Number){
	if(!Powerof2(Number))
		return 0;
	int value = 1, position = 1;
		while(!(Number & (value << position -1))){
			position++;

	}
	return position;
}



int main(){
	int Number;
	cout << "Enter the number which is power of 2 :";
	cin >> Number;
	if(int pos = Position(Number))
		cout << "The position of the bit set is :"<< pos <<endl;
	else
		cout << "Number is not power of 2" << endl;
	return 0;
}


