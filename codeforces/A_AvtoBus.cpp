#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nL "\n"
#define pb push_back
#define mk make_pair
#define pii pair<int, int>
#define a first
#define b second
#define vi vector<int>
#define all(x) (x).begin(), (x).end()
#define umap unordered_map
#define uset unordered_set
#define MOD 1000000007
#define imax INT_MAX
#define imin INT_MIN
#define exp 1e9
#define sz(x) (int((x).size()))
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ttt; cin >> ttt;
    while(ttt--) {
        ll n;
        cin>>n;
        if(n%2 != 0 or n == 2){
            cout<<"-1"<<nL;
            continue;
        }
        ll mx,mn;
        if(n%6 == 0){
            mn = n/6;
        }else mn = n/6+1;
        mx = n/4;
        cout<<mn<<" "<<mx<<nL;
    }
    return 0;
}
