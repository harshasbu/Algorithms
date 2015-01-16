/*
 * AddingBitStrings.cpp
 *
 *  Created on: Jan 16, 2015
 *      Author: harsha
 */

#include<iostream>


using namespace std;

string makeStringEqualLength(string Number, int length){

	//cout << "length is :" << length << endl;
	for(int i=0;i<length;i++)
		Number = '0' + Number;
	//cout << Number << endl;
	return Number;
}

string add(string Num1, string Num2){
		int len1 = Num1.size();
		int len2 = Num2.size();
		//cout << "length of string1 :" << len1 <<endl << "length of string2 :" << len2 << endl;
		if(len1 != len2)
			if(len1 < len2)
				Num1 = makeStringEqualLength(Num1, len2-len1);
			else
				Num2 = makeStringEqualLength(Num2, len1-len2);
		//cout << Num1.length() << " "<<Num2.length() <<endl;
		int sum = 0, carry = 0,i;
		string result ;
		for(i=(Num1.length()-1);i>=0; i--){
			int firstBit = Num1.at(i) - '0';
			int secondBit = Num2.at(i) - '0';

			sum = (firstBit ^ secondBit ^ carry) +'0';

			result = (char)sum + result;

			carry = (firstBit & secondBit) | (secondBit & carry) | (carry & firstBit);
		}

		if(carry)
			result = '1' + result;;
		return result;
}

int main(){
	string Num1, Num2;
	cout << "Enter the two Bit Strings :";
	cin >> Num1 >> Num2;
	cout << "The sum in Bits is :" << add(Num1, Num2) << endl;
	return 0;
}
