# include <bits/stdc++.h>

using namespace std;

int a,c;
int b[1000009];

int main()
{
	cin>>a;
	
	for(int i=0;i<a;i++)
	cin>>c,b[c]++;
	
	for(int i=0;i<1000000;i++)
	for(int j=0;j<b[i];j++)
	cout<<i<<" ";
}

/*
5
3 2 1 1 4
*/
