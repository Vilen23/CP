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
        int n,k,x;
        cin>>n>>k>>x;
        if(x!=1){
            cout<<"YES"<<endl;
            cout<<n<<endl;
            for(int i = 0;i<n;i++) cout<<"1"<<" ";
            cout<<endl;
            continue;
        }
        if(x==1 and k==1){
            cout<<"NO"<<endl;
            continue;
        }
        if(k>=2 and n%2 == 0){
            cout<<"YES"<<endl;
            cout<<n/2<<endl;
            for(int i=0;i<n/2;i++) cout<<"2"<<" ";
            cout<<endl;
            continue;
        }else if (k>=3 and (x!=2 or x!=3)){
            cout<<"YES"<<endl;
            int m = n-3;
            cout<<m/2+1<<endl;
            cout<<"3 ";
            for(int i = 0;i<m/2;i++) cout<<"2 ";
            cout<<endl;
            continue;
        }
        cout<<"NO"<<endl;
    }
    return 0;
}
