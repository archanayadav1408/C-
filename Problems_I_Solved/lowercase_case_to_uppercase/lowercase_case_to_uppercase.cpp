#include <iostream>
#include <string>

using namespace std;

string lower;
int i;

int main()
{
	cout << "Enter a string : ";
	cin >> lower;
	
	for(i=0; lower[i]!='\0'; i++)
	{
		if(lower[i]>='a' && lower[i]<='z')
		{
			lower[i] = (lower[i]-32);
		}
	} 
	
	cout << lower;
	
 return 0;
}
