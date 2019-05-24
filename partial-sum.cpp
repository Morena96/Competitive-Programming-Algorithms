# include <bits/stdc++.h>

using namespace std;

int a,b,c,x,y;
int d[1009];

int main()
{
	cin>>a>>b;
	
	for(int i=1;i<=a;i++)
	cin>>c,d[i]+=c+d[i-1];
	
	for(int i=0;i<b;i++)
	cin>>x>>y,cout<<d[y]-d[x-1]<<endl;
}

/*
7 3
1 2 3 4 5 6 7
1 7
3 6
4 4
*/
