#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int i;
string text;
string ctext;

int main()
{
	cout << "Enter a string here : ";
	cin >> text;
	
	for(i=0; text[i]!='\0'; i++)
	{
		ctext = ctext + text[i];
	}
	
	cout << ctext;
	
	return 0;
}
