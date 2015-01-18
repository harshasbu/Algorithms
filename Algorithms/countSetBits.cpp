/*
 * countSetBits.cpp
 *
 *  Created on: Jan 17, 2015
 *      Author: harsha
 */
#include <iostream>

using namespace std;
//Brian Kernighan’s Algorithm
int numberOfBits(int Number){
	int count=0;
	while(Number != 0){
		Number &= (Number - 1);
		count++;
	}
	return count;
}

int main(){
	int Number;
	cout << "Enter the number :" ;
	cin >> Number;
	cout << "Number of bits set in " << Number << " is " << numberOfBits(Number) << endl;
	return 0;
}



