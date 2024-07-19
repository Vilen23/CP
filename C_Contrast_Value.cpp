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
        vi v;
        for(int i = 0,num;i<n;i++) {
            cin>>num;
            if(i > 0 and v.back() == num) continue;
            v.push_back(num);
        }
        int count = v.size();
        for(int i = 1;i<v.size()-1;i++){
            if((v[i-1] < v[i] and v[i] < v[i+1]) or (v[i-1] > v[i] and v[i] > v[i+1])){
                count--;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
