/*
 * Turningoffbit.cpp
 *
 *  Created on: Jan 13, 2015
 *      Author: harsha
 */
#include<iostream>

using namespace std;

int turningOff(int Number, int Position){
	return (Number & ~(1 << (Position - 1)));
}

int main(){
	int Number,Position;
	cout << "Enter the Number:";
	cin >> Number;
	cout << "Enter the Position you want to Nullify:";
	cin >> Position;
	cout << "The Number after Nullify the bit is " <<turningOff(Number, Position) << endl;
	return 0;
}



