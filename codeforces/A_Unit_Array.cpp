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
        int neg = 0;
        int pos = 0;
        int ans = 0;
        for(int i = 0;i<n;i++){
            int num;
            cin>>num;
            if(num == 1) pos++;
            else neg++;
        }
        if(neg > pos){
            int diff = neg - pos;
            if(diff%2 == 0){
                neg-=diff/2;
                pos+=diff/2;
                ans+=diff/2;
            }else{
                neg-=diff/2+1;
                pos+=diff/2+1;
                ans+=diff/2+1;
            }
        }
        if(neg%2!=0) ans++;
        cout<<ans<<endl;
    }
    return 0;
}
