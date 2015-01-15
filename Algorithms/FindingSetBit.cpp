/*
 * FindingSetBit.cpp
 *
 *  Created on: Jan 14, 2015
 *      Author: harsha
 */
#include <iostream>

using namespace std;

int Position(int Number){
	int value = 1;
	for(int position = 1; position <=8; position++){
		if(Number & (value << position -1)){
			return position;
		}
	}
	return 0;
}

int main(){
	int Number;
	cout << "Enter the number for which you want to find the position of bit set :";
	cin >> Number;
	if(int pos = Position(Number))
		cout << "The position of the bit set is :"<<pos <<endl;
	else
		cout << "No bit is set" <<endl;
	return 0;
}



