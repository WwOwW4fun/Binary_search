
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

int main(){
    int n, k;
    cin >> n >> k;
    int a[n];
    int cl[n];
    int ans[3];
    for (int i = 0; i < n; i++){
        cin >> a[i];
        cl[i] = a[i];
    }
    sort(a, a+n);
    for (int i = 0; i < n - 1; i++){
        for (int j = i + 1; j < n; j++){
            int target = k - a[i] - a[j];
            int l = 0, r = n - 1;
            while (l <= r){
                int mid = (l + r)/2;
                if (a[mid] > target){
                    r = mid-1;
                } else if (a[mid] < target){
                    l = mid+1;
                } else if (a[mid] == target && mid != i && mid != j){
                    for (int h = 0; h < n; h++){
                        if (cl[h] == a[mid]){
                            ans[0] = h+1;
                                break;
                        }
                    }
                    for (int h = 0; h < n; h++){
                        if (cl[h] == a[i] && h != ans[0] - 1){
                            ans[1] = h+1;
                            break;
                        }
                    }
                    for (int h = 0; h < n; h++){
                        if (cl[h] == a[j] && h != ans[0] - 1 && h != ans[1] - 1){
                            ans[2] = h+1;
                            break;
                        }
                    }
                    sort(ans, ans+3);
                    cout << ans[0] << ' ' << ans[1] << ' ' << ans[2];
                    return 0;
                } else {
                    r--;
                }
            }
        }
    }
    cout << "IMPOSSIBLE";
}