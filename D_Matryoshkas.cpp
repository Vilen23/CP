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
        int n;
        cin>>n;
        vi v(n);
        map<int,int> mp;
        set<int> st;
        for(int i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]]++;
            st.insert(v[i]);
            st.insert(v[i]+1);
        }
        int ans = 0,count=0;
        for(auto x:st){
            int l = mp[x];
            ans+=max(0,l-count);
            count = l;
        }
        cout<<ans<<endl;
    }
    return 0;
}
