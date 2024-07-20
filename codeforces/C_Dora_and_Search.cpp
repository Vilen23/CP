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
        cin >> n;
        vi v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        int i = 0, j = n-1;
        int gmax = n, gmin = 1;
        int l = -1, r = -1;
        while(i <= j) {
            if(v[i] == gmin) {
                i++;
                gmin++;
            } else if(v[i] == gmax) {
                i++;
                gmax--;
            } else if(v[j] == gmax) {
                j--;
                gmax--;
            } else if(v[j] == gmin) {
                j--;
                gmin++;
            } else {
                l = i + 1;
                r = j + 1;
                break;
            }
        }
        if(l == -1 || r == -1 || l >= r) cout << "-1" << endl;
        else cout << l << " " << r << endl;
    }
    return 0;
}