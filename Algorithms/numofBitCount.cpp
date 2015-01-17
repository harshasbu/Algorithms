/*
 * numofBitCount.cpp
 *
 *  Created on: Jan 17, 2015
 *      Author: harsha
 */
#include <iostream>

using namespace std;

int countSetBits(int Number){
	if(Number <= 0)
		return 0;

	return ((Number%2)?1:0) + countSetBits(Number/2);
}


int count(int UptoNumber){
	int Count=0;
	for(int i=1;i<=UptoNumber;i++)
		Count += countSetBits(i);
	return Count;
}



int main(){
	int Number;
	cout << "Enter the number upto which you want set Bits count :";
	cin >> Number;
	cout << "Number of set bits upto Number " << Number << " is " << count(Number) << endl;
	return 0;
}



