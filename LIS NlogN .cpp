
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

const int Max = 2e5 + 7;
ll a[Max],d[Max];
ll n;
void input()
{
	cin >> n;
	for0(i,1,n + 1) cin >> a[i];
}
void LIS()
{
	d[1] = a[1];
	ll size = 1;
	for0(i,2 , n + 1)
	{
		ll temp = lower_bound(d + 1,d + size + 1,a[i]) - d;
		if(size < temp)
		{
			d[temp] = a[i];
			size = temp;
		}
	}
	cout << size << endl;
}
int main()
{
	input();
	LIS();
}
