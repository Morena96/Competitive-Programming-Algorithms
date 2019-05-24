# include <bits/stdc++.h>

using namespace std;

int x,y,z,t,yatda;
int c[1009];
string a,b;

int main()
{
	cin>>a>>b;
	
	x=a.length();
	y=b.length();
	z=max(x,y);
	t=z;
	
	while(x>0 || y>0)
	{
		z--;
		if(x>0)
		c[z]+=a[x-1]-48,x--;
		
		if(y>0)
		c[z]+=b[y-1]-48,y--;
		
		c[z]+=yatda;
		yatda=c[z]/10;
		c[z]%=10;
	}
	
	if(yatda>0)cout<<yatda;
	for(int i=0;i<t;i++)
	cout<<c[i];
}
