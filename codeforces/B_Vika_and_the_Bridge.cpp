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
        vi v(n);
        for(int i = 0;i<n;i++) cin>>v[i];

        vector<pii> maxdiff(k,{0,0});
        vector<int> last(k,-1);

        for(int i = 0;i<n;++i){
            int val = v[i]-1;
            int gap = i - last[val];
            if(gap > maxdiff[val].first){
                maxdiff[val].second = maxdiff[val].first;
                maxdiff[val].first = gap-1;
            }else if(gap > maxdiff[val].second){
                maxdiff[val].second = gap-1;
            }
            last[val] = i;
        }

        for(int val = 0;val<k;val++){
            int gap = n - last[val];
            if(gap > maxdiff[val].first){
                maxdiff[val].second = maxdiff[val].first;
                maxdiff[val].first = gap-1;
            }else if(gap > maxdiff[val].second){
                maxdiff[val].second = gap-1;
            }
        }
        int ans = INT_MAX;
        for(int i = 0;i<k;i++){
            pair<int,int> b = maxdiff[i];
            ans = min(ans,max({(b.first-1)/2,b.second,((b.first-1)-((b.first-1)/2))}));
        }
        cout<<ans<<nL;
    }
    return 0;
}
