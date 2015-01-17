/*
 * DiffSign.cpp
 *
 *  Created on: Jan 17, 2015
 *      Author: harsha
 */
#include <iostream>

using namespace std;

int opposign(int *first,int second){

	return (((*first) ^ second )< 0);
}

int main(){
	int first,second;
	cout << "Enter the two numbers :";
	cin >> first >> second;
	if(opposign(&first,second))
		cout << "Both are of different sign" << endl;
	else
		cout << "Both numbers are of same sign"<<endl;

	return 0;
}



