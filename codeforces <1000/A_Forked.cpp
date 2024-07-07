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

bool checkQueen(int px,int py,int xq,int yq,int a,int b){
    if(abs(px-xq) == abs(a)){
        if(abs(py-yq) == abs(b)) return true;
    }else if(abs(px - xq) == abs(b)){
        if(abs(py-yq) == abs(a)) return true;
    }
    return false;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ttt; cin >> ttt;
    while(ttt--) {
        int a,b;
        cin>>a>>b;
        int xk,yk;
        cin>>xk>>yk;
        int xq,yq;
        cin>>xq>>yq;
        int count = 0;
        int px,py;
        int times = 2;
        // a on x axis
        while(times>0){
            if(times == 2){
                px = xk+a;
            }else px = xk-a;
            py = yk + b;
            if(checkQueen(px,py,xq,yq,a,b)) count++;
            py = yk-b;
            if(checkQueen(px,py,xq,yq,a,b)) count++;
            times--;
        }
        // b on x axis
        times = 2;
        while(times > 0){
            if(times == 2) px = xk + b;
            else px = xk - b;
            py=yk+a;
            if(checkQueen(px,py,xq,yq,a,b)) count++;
            py=yk-a;
            if(checkQueen(px,py,xq,yq,a,b)) count++;
            times--;
        }
        if(a==b) cout<<count/2<<endl;
        else cout<<count<<endl;
    }
    return 0;
}
