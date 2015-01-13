/*
 * SwapNibble.c
 *
 *  Created on: Jan 12, 2015
 *      Author: harsha
 */
#include <stdio.h>
unsigned char swapNibbles(unsigned char n){
	return ((n&0x0F) << 4 | (n&0xF0) >> 4 );
}
int main(){
	unsigned char x;
	printf("Enter the number you want to swap the Nibble:");
	scanf("%hhu",&x);
	printf("The value after swapping the Nibble is %u\n",swapNibbles(x));
	return 0;
}

