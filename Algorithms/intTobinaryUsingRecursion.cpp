/*
 * intTobinaryUsingRecursion.cpp
 *
 *  Created on: Jan 16, 2015
 *      Author: harsha
 */

#include <iostream>

using namespace std;

void binary(int Number){
	if(Number > 1)
		binary(Number/2);
	cout << Number%2;
}

int main(){
	int Number;
	cout <<"Enter the Number that you want in binary form :";
	cin >> Number;
	cout << "The Number in binary format is:" ;
	binary(Number);
	cout << endl;
	return 0;
}


