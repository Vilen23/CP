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
        int n,q;
        cin>>n>>q;
        vi v(n);
        vi pre(n);
        for(int i=0;i<n;i++) {
            cin>>v[i];
            if(i != 0) pre[i] = v[i] + pre[i-1];
            else pre[i] = v[i];
        }
        
        while(q--){
            int l, r, k;
            cin >>l>>r>>k;
            l--; r--; 
            int leftsum = (l > 0) ? pre[l - 1] : 0;
            int rightsum = pre[n - 1] - pre[r];
            int middlesum = (r - l + 1) * k;
            int total = leftsum + rightsum + middlesum;
            if(total % 2 != 0) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        
    }
    return 0;
}
