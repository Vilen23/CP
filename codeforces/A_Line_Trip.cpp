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
            int n,l;
            cin>>n>>l;
            vector<int> v(n+2);
            v[0] = 0;
            for(int i = 1;i <= n;i++) cin>>v[i];
            v[n+1] = l;
            int diff =  imin;
            for(int i=1;i<v.size();i++){
                int df = v[i] - v[i-1];
                diff = max(diff,df);
            }
            diff = max(diff,2*(v[n+1] - v[n]));
            cout<<diff<<endl;
        }
        return 0;
    }