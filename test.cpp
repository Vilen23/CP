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
        vector<pair<int,int>> maxdiff(k+1,{0,0});
        int j = 1,m=k;
        while(m>0){
            int pos = 0;
            int diff1=0,diff2=0;
            for(int i = 0;i<n;i++){
                if(v[i] == j){
                    int gap = i - pos;
                    if(gap > maxdiff[j].first){
                        maxdiff[j].second = maxdiff[j].first;
                        maxdiff[j].first = gap;
                    }else if ( gap > maxdiff[j].second){
                        maxdiff[j].second = gap;
                    }
                    pos = i+1;
                }
            }
            int gap = n - pos;
            if(gap > maxdiff[j].first){
                maxdiff[j].second = maxdiff[j].first;
                maxdiff[j].first = gap;
            }else if(gap > maxdiff[j].second){
                maxdiff[j].second = gap;
            }
            m--;
            j++;
        }
        for(int i =1;i<maxdiff.size();i++){
            court<<maxdiff[i].first<<" "<<maxdiff[i].second<<endl;
        }
        int ans = INT_MAX;
        for(int i = 1;i<maxdiff.size();i++){
            pair<int,int> b = maxdiff[i];
            ans = min(ans,max({(b.first-1)/2,b.second,((b.first-1)-((b.first-1)/2))}));
        }
        cout<<ans<<endl;
    }
    return 0;
}
