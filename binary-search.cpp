# include <bits/stdc++.h>

using namespace std;

int a,lf,rg,z;
char ans;

int main()
{
	lf=1;
	rg=1000;
	while(1)
	{
		z++;
		cout<<(lf+rg+1)/2<<endl;
		cin>>ans;
		if(ans=='A')
		rg=(lf+rg+1)/2-1;
		else if(ans=='Y')
		lf=(lf+rg)/2+1;
		else
		{cout<<z;return 0;}
	}
}




