# include <bits/stdc++.h>

using namespace std;

int x,y,c[1009];
string a,b;

int main()
{
	cin>>a>>b;
	
	x=a.length()-1;
	y=b.length()-1;
	
	for(int i=x;i>=0;i--)
	for(int j=y;j>=0;j--)
	c[x-i+y-j]+=(a[i]-48)*(b[j]-48);
	
	for(int i=0;i<=x+y;i++)
	c[i+1]+=c[i]/10,c[i]%=10;
	
	if(c[x+y+1]>0)cout<<c[x+y+1];
	
	for(int i=x+y;i>=0;i--)
	cout<<c[i];
}  
