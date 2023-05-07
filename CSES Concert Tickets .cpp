
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
#define ll long long
int main() 
{
    int n, m, h;
    cin >> n >> m;
    multiset<int>tick;
    for (int i = 1; i <= n; ++i) 
	{
        cin >> h;
        tick.insert(h);
    }
    for (int i = 1; i <= m; ++i) 
	{
        multiset<int>::iterator low1, upp1;
        int k;
        cin >> k;
        if (k < *tick.begin() || tick.size() == 0)
        	cout << -1 << endl;
		else 
		{
			low1 = tick.lower_bound(k);
	        if (*low1 == k) 
			{
				cout << k << endl;
				tick.erase(low1);
			} 
			else 
			{
				low1--;
				cout << *(low1) << endl;
				tick.erase(low1);
			}
		}
    }
}