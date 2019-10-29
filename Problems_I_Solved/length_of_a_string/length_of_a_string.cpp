#include<iostream>
#include<string>

using namespace std;

int i;
string text;

int string_length = 0;

int main()
{
	cout << "Enter a string here : ";
	cin >> text;
		
	for(i=0; text[i]!='\0'; i++)
	{
		string_length = string_length + 1;
	}
	
	cout << "You entered : " << text << "whos length is " << string_length;
	
	return 0;
}
