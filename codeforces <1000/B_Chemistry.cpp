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
        int n,k;
        cin>>n>>k;
        unordered_map<char,int> mp;
        for(int i=0;i<n;i++){
            char ch;
            cin>>ch;
            mp[ch]++;
        }
        int maxcount = 0;
        for(auto x:mp){
            if(x.second%2!=0) maxcount++;
        }
        if(maxcount <= k+1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
    return 0;
}

