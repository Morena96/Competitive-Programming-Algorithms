# include <bits/stdc++.h>
# define pb push_back
# define mk make_pair
# define INF 1000000007
# define MAXN 500007
# define fr first
# define sc second
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
void solve();
int main(){int t=1;/*cin>>t;*/while(t--)solve();}
/*				BEGIN				*/

int n,y,z,q;
char x;
int a[100009];
int h[100009];

void build(int in, int lf, int rg){
    if(lf==rg)h[in]=a[lf];
    else{
        int md=(lf+rg)/2;
        build(in*2,lf,md);
        build(in*2+1,md+1,rg);
        h[in]=min(h[in*2],h[in*2+1]);
    }
}

void upd(int in, int lf, int rg, int vl){
    if(lf==rg)h[in]=a[vl];
    else{
        int md=(lf+rg)/2;
        if(md<=lf)upd(in*2,lf,md,vl);
        else upd(in*2+1,md+1,rg,vl);
        h[in]=min(h[in*2],h[in*2+1]);
    }
}

int get(int in, int lf, int rg, int st, int en){
    if(lf>en || rg<st)return 999999;
    if(lf>=st && rg<=en)return h[in];
    int md=(lf+rg)/2;
    int p1=get(in*2,lf,md,st,en);
    int p2=get(in*2+1,md+1,rg,st,en);
    return min(p1,p2);
}

void solve(){
    cin>>n>>q;

    for(int i=1;i<=n;i++)
        cin>>a[i];
    build(1,1,n);
//    cout<<h[1]<<" "<<h[2]<<endl;
    for(int i=0;i<q;i++){
        cin>>x>>y>>z;

        if(x=='u')
            a[y]=z,upd(1,1,n,y);
        else
            cout<<get(1,1,n,y,z)<<endl;
    }
}
/*
8
1 2 3 4 5 6 7 8
 */
