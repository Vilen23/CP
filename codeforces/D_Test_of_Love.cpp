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
        int n,m,k;
        cin>>n>>m>>k;
        string river;
        cin>>river;
        river = 'L' + river + 'L';
        int curr = 0,swim = 0;
        //L W W C L
        while(curr <= n){
            if(river[curr] == 'C'){
                break;
            }

            if(river[curr] == 'W'){
                curr++;swim++;
                continue;
            }

            if(river[curr] == 'L'){
            bool jumped = false;
                for(int i = min(curr+m,n+1);i>curr;i--){
                    if(river[i] == 'L'){
                        curr = i;
                        jumped = true;
                        break;
                    }
                }

                if(jumped) continue;

                for(int i = min(curr+m,n+1);i>curr;i--){
                    if(river[i] == 'W'){
                        curr = i;
                        jumped = true;
                        break;
                    }
                }
                if(!jumped) break;

            }
        }

        cout<<(curr>n and swim<=k ?"YES":"NO")<<endl;
    }
    return 0;
}
