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

ll sum(ll n1){
    return (n1*(n1+1))/2;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ttt; cin >> ttt;
    while(ttt--) {
        ll n,x,y,gcd;
        cin>>n>>x>>y;
        ll y1 = n/y,x1 = n/x,lcm = (x*y)/__gcd(x,y);
        ll sumx = x1 - n/lcm;
        ll sumy = y1 - n/lcm;
        cout<<(sum(n) - sum(n-sumx)) - sum(sumy)<<endl;
    }
    return 0;
}
