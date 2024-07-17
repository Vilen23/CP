#include <bits/stdc++.h>
using namespace std;

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

vector<int> s, m, b;
int len;
vector<vector<vector<vector<int>>>> dp;

int f(int i, int j, int k, int l) {
    if (i == len) return 0;
    if (j && k && l) return 0;
    if (dp[i][j][k][l] != -1) return dp[i][j][k][l];

    int res = f(i+1,j,k,l);
    if (!j) {
        res = max(res, s[i] + f(i + 1, 1, k, l));
    }
    if (!k) {
        res = max(res, m[i] + f(i + 1, j, 1, l));
    }
    if (!l) {
        res = max(res, b[i] + f(i + 1, j, k, 1));
    }

    return dp[i][j][k][l] = res;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int ttt; 
    cin >> ttt;
    while (ttt--) {
        int n;
        cin >> n;
        len = n;
        s.resize(n);
        m.resize(n);
        b.resize(n);
        for (int i = 0; i < n; i++) cin >> s[i];
        for (int i = 0; i < n; i++) cin >> m[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        dp = vector<vector<vector<vector<int>>>>(n, vector<vector<vector<int>>>(2, vector<vector<int>>(2, vector<int>(2, -1))));
        cout << f(0, 0, 0, 0) << nL;
    }

    return 0;
}
