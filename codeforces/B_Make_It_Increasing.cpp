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
        for(int i =0;i<n;i++) cin>>v[i];
        int count = 0;
        for(int i = n-2;i>=0;i--){
            while(v[i] >= v[i+1] and v[i]>0){
                v[i] /=2;
                count++;
            }
            if(v[i] == v[i+1]){
                count=-1;
                break;
            }
        }
        cout<<count<<endl;    
    }
    return 0;
}
