#include<iostream>
#include<bits/stdc++.h>

using namespace std;

string str1;
string str2;
string str3;

int main()
{
	cout << "Enter a string 1 : ";
	cin >> str1;
	cout << "Enter a string 2 : ";
	cin >> str2;
	
	str3 = (str1 + str2);
	
	cout << str3;
	
	return 0;
}
