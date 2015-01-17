/*
 * swapBits.cpp
 *
 *  Created on: Jan 17, 2015
 *      Author: harsha
 */
#include <iostream>

using namespace std;

int swapBits(unsigned int Number,unsigned int startPos, unsigned int endPos, unsigned int noofBits){

	unsigned int xr = (((Number>>startPos) ^ (Number >> endPos)) &  ((1U<<noofBits)-1));
	return (Number ^ ((xr << startPos) | (xr << endPos)));
}

int main(){
	int Number, startPos, endPos, noofBits;
	cout << "Enter Number you want to manipulate :";
	cin >> Number;
	cout << "Enter starting Position, EndingPosition, Num of Bits: ";
	cin >> startPos >> endPos >> noofBits;
	cout << "The number after manipulating is : " << swapBits(Number, startPos, endPos, noofBits) << endl;
	return 0;
}



