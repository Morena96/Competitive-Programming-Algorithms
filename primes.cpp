# include <bits/stdc++.h>
# define MX 1000000

using namespace std;

bool vs[1000009];

int main()
{
	for(int i=2;i<MX;i++)
	for(int j=i*2;j<MX;j+=i)
	vs[j]=1;
	
	for(int i=2;i<MX;i++)
	if(!vs[i])
	cout<<i,getchar();
}
