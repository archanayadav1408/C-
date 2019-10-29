#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a[5];
	for(int i=0; i<=4; i++)
	{
		cin >> a[i];
		cout << a[i];
	}
	
	vector<int> b;
	for(int i=0; i<=4; i++)
	{
		int x;
		cin >> x;
		b.push_back(x);
		cout << b[i];		
	}
}
