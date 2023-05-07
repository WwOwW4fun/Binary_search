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
const int Max = 1e7 + 7;
ll  a[Max];
ll item(ll  n ,ll m, ll temp){
	ll ans=0;
	for(ll i = 0;i < n; i++)
	{
		ans+=(temp/a[i]);
		if(ans>=m) break;
	}
	return ans;
}
 ll  int bs(ll n,ll m, ll high)
{
	ll l=0;
	while(l<high)
	{
		ll mid=(high+l)/2;
		ll it=item(n,m,mid);
		if(it<m)
		{
			l=mid+1;
		}
		else {
			high=mid;
			
		}
	}
	return high;
 
}
int main(){
	ll  n,x; cin >> n >> x;
	for(ll  i = 0 ; i<n;i++)  cin >> a[i];
	sort(a,a+n);
	cout << bs(n,x,x*a[n-1]);
}