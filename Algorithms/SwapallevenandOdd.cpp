/*
 * SwapallevenandOdd.cpp
 *
 *  Created on: Jan 15, 2015
 *      Author: harsha
 */
#include <iostream>

using namespace std;

unsigned int swapBits(int Number){
	unsigned int evenBits = Number & 0xAAAAAAAA;
	unsigned int oddBits = Number & 0x55555555;
	evenBits >>= 1;
	oddBits <<= 1;
	return (evenBits | oddBits);
}

int main(){
	int Number;
	cout << "Enter the number for which you want to swap Bits:";
	cin >> Number;
	cout << "After Swapping the even and odd Bits the number becomes :" << swapBits(Number) << endl;
	return 0;
}



