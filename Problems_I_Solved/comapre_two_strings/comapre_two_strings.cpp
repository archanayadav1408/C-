#include<iostream>
#include<bits/stdc++.h>

using namespace std;

string str1;
string str2;

int main()
{
	cout << "Enter string 1 : ";
	cin >> str1;
	cout << "Enter string 2 : ";
	cin >> str2;
	
	if(str1 == str2)
	{
		cout << "They are the same.";
	 } 
	 
	else
	{
		cout << "Thet=y are not the same.";
	}
	
	return 0;
}
