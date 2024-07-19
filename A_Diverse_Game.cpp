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
        vector<vector<int>> v(n,vector<int> (m));
        queue<int> q;
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                int num;
                cin>>num;
                v[i][j] = num;
                q.push(num);
            }
        }
        vector<vector<int>> ans(n,vector<int> (m));
        bool isPossible = true;
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                int count = 0;
                while(v[i][j] == q.front() && count < n*m){
                    int temp = q.front();
                    q.pop();
                    q.push(temp);
                    count++;
                }
                if(count == n*m){
                    cout<<"-1"<<endl;
                    isPossible = false;
                    break;
                }
                ans[i][j] = q.front();
                q.pop();
            }
            if(!isPossible){
                break;
            }
        }
        if(isPossible){
            for(int i = 0;i<n;i++){
                for(int j = 0;j<m;j++) cout<<ans[i][j]<<" ";
                cout<<nL;
            }
        }
    }
    return 0;
}