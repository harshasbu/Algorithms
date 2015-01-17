/*
 * finduniqueNum_amongDuplicates(3).cpp
 *
 *  Created on: Jan 17, 2015
 *      Author: harsha
 */
#include <iostream>

using namespace std;

int cameOnce(int *list,int size){
	int Number = 0;
	for(int i=0;i<size;i++){
		Number += (*list);
		*list++;
	}

	return Number%3;
}

int main(){
	int list[] = {1,5,5,2,2,2,5};
	cout << "Number the came once is :"<<cameOnce(list,7) << endl;
	return 0;

}



