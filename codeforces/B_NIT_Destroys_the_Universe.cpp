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
        int count = 0;
        vi v(n);
        for(int i = 0;i<n;i++){
            cin>>v[i];
            if(v[i] == 0) count++;
        }
        if(count == n){
            cout<<"0"<<endl;
            continue;
        }
        int l,r;
        for(int i = 0;i<n;i++){
            if(v[i]!=0){
                l=i;
                break;
            }
        }
        for(int i = n-1;i>=0;i--){
            if(v[i] != 0){
                r=i;
                break;
            }
        }
        bool zero = false;
        for(int i = l;i<=r;i++){
            if(v[i] == 0){
                zero = true;
                break;
            }
        }
        if(!zero) cout<<"1"<<endl;
        else cout<<"2"<<endl;
    }

    return 0;
}
