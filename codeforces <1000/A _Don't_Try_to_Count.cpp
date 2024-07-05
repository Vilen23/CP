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
            int n,m;
            cin>>n>>m;
            string s1,s2;
            cin>>s1>>s2;
            int times = 0;
            bool found = false;
            while(times < 6){
                int sz = s1.length();
                for(int i =  0;i<sz;i++){
                    if(s1.substr(i,s2.length()) == s2){
                        found = true;
                        cout<<times<<endl;
                        break;
                    }
                }
                if(found) break;
                s1+=s1;
                times++;
            }
            if(!found) cout<<"-1"<<endl;
        }
        return 0;
    }