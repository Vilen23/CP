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
        int a,n;
        cin>>a>>n;
        vi v(n);
        int ans = 0;
        for(int i=0;i<n;i++)cin>>v[i];
        sort(v.begin(),v.end());
        for(int i = 0;i<n-1;i++){
            if(v[i] == 1)ans++;
            else ans+=2*v[i]-1;
        }
        cout<<ans<<endl;
    }
    return 0;
}
