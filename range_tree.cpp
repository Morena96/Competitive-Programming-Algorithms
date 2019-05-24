# include <bits/stdc++.h>

using namespace std;

int a,b,x,y;
int c[1009];
int d[2009];

void add(int lf, int rg, int sw, int vs)
{
	d[sw]=max(d[sw],c[vs-1]);
	
	if(lf==rg)
	return;
	
	if((lf+rg)/2<vs)
	add((lf+rg)/2+1,rg,sw*2+1,vs);
	
	else
	add(lf,(lf+rg)/2,sw*2,vs);
}

int tap(int lf, int rg, int lff, int rgg, int sw)
{
	if(lf==lff && rg==rgg)
	return d[sw];
	
	if((lf+rg)/2>=rgg)
	return tap(lf,(lf+rg)/2,lff,rgg,sw*2);
	
	else if((lf+rg)/2<lff)
	return tap((lf+rg)/2+1,rg,lff,rgg,sw*2+1);
	
	else
	return max(tap(lf,(lf+rg)/2,lff,(lf+rg)/2,sw*2),tap((lf+rg)/2+1,rg,(lf+rg)/2+1,rgg,sw*2+1));
}

int main()
{
	cin>>a;
	for(int i=0;i<a;i++)
	{
		cin>>c[i];
		add(1,a,1,i+1);
	}
	
	while(1)
	{
		cin>>x>>y;
		cout<<tap(1,a,x,y,1)<<endl;
	}
}


/*
8
1 2 3 4 5 6 7 8
1 3
4 7
1 8
2 6
*/
