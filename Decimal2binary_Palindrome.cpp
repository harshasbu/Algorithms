/*
 * Decimal2binary_Palindrome.cpp
 *
 *  Created on: Jan 12, 2015
 *      Author: harsha
 */
#include<iostream>
#include<string>
using namespace std;

string decimaltobinary(int n){
	string binaryNumber;
	while(n!=0){
		binaryNumber += ((n%2 == 0)?0 :1);
		n = n/2;
	}
	return binaryNumber;
}

bool isPalindrome(string BinaryNumber){
	int i,j;
	for(i=0,j=BinaryNumber.size()-1;i <= j;i++,j--){
		if(BinaryNumber.at(i)!=BinaryNumber.at(j))
			return false;
	}
	return true;
}

int main(){
	int Number;
	string binaryNumber;
	cout << "Enter the number :" ;
	cin >> Number;
	binaryNumber = decimaltobinary(Number);
	if(isPalindrome(binaryNumber))
		cout<<"Given Number is Palindrome" << endl;
	else
		cout << "Given Number is Not Palindrome" << endl;
	return 0;
}

