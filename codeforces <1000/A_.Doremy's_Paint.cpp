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
            umap<int,int> mp;
            for(int i = 0;i<n;i++){
                int m;
                cin>>m;
                mp[m]++;
            }
            if(mp.size() > 2) cout<<"No"<<endl;
            else if(mp.size() == 2){
                int freqdiff = 0;
                for(auto x:mp){
                    if(freqdiff!=0){
                        freqdiff = abs(x.second - freqdiff);
                    }else freqdiff = x.second;
                }
                if(freqdiff <= 1) cout<<"Yes"<<endl;
                else cout<<"No"<<endl;
            }else cout<<"Yes"<<endl;
        }
        return 0;
    }