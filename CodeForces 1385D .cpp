/* 
Author : Nguyen Xuan An 
Gmail : xuanan437@gmail.com
*/   
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define for0(i ,l ,r) for(int i = (l); i < (r); ++i)
#define for1(i, l, r) for(int i = (l); i >= (r); --i)
#define for2(v) for(auto it : v)
#define reset(a) memset(a,0,sizeof(a))
#define mem(a) memset(a,-1,sizeof(a))

#define vi vector<int>
#define vpi vector<pair<int, int>>
#define pii pair<int,int>
#define fi first
#define se second
#define prq priority_queue

#define output ios::sync_with_stdio(0);cin.tie(0);
#define fastio 	ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define PI 3.1415926535897932385
#define INF 10000000

#define BIT(n) (1<<(n))
#define AND(a,b) ((a) & (b))
#define OR(a,b) ((a) | (b))
#define XOR(a,b) ((a) ^ (b))

string a;
int n;
int solve(int l,int r,char c){
	if(r-l==1)
		return a[l]!=c;
	int mid=(l+r)/2;
	int la=0,lb=0;
	for(int i=l;i<r;i++){
		if(i<mid) la+=(a[i]!=c);
		else lb+=(a[i]!=c);
	}
	return min(la+solve(mid,r,c+1),lb+solve(l,mid,c+1));
}
int main()
{
    int tc; cin >> tc;
    while(tc --)
    {
        cin >> n >> a;
        cout << solve(0,n,'a') << endl;
    }
}