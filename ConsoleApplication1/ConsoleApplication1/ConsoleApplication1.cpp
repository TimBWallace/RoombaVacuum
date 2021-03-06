// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

char plainText[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
char caeserCiph[26];
string input;
void Cipher() {
	for (int i = 0; i < 25; i++) {
		caeserCiph[i] = plainText[i + 3];
		if (i > 25) {
			break;
		}
	}
	caeserCiph[23] = plainText[0];
	caeserCiph[24] = plainText[1];
	caeserCiph[25] = plainText[2];
	cout << plainText << endl << caeserCiph << endl;
}

int main()
{
	Cipher();
	
	cout << "--Caesar Cipher Cryptographer--" << endl;
	cout << "Please input the phrase you would like encrypted : ";
	cin >> input;
	for (int i = 0; i < input.length(); i++) {
		for (int j = 0; j < sizeof(plainText); j++) {
			if (input[i] == plainText[j]) {
				input[i] = caeserCiph[j];
				break;
			}
			else if (input[i] == ' ') {
				input.erase(i,1);
			}
		}
	}
	cout << "The Encrypted Message Is Below : " << endl;
	cout << input;
}

