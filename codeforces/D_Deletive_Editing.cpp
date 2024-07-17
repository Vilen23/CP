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
      string s,t;
      cin>>s>>t;
      umap<char,int> mps,mpt;
      for(char c:s) mps[c]++;
      for(char c:t) mpt[c]++;
      bool isPossible = true;
      for(auto& [ch,freq]:mpt){
        if(mps[ch] < freq){
          isPossible = false;
          break;
        }
      }
      if(!isPossible){
        cout<<"NO"<<endl;
        continue;
      }
      for(auto& [ch,freq]:mps){
        int diff = mps[ch]-mpt[ch];
        for(int i=0;i<s.length();i++){
          if(diff == 0) break;
          if(s[i] == ch){
            s.erase(i,1);
            i--;
            diff--;
          }
        }
      }
      if(s==t) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
    }
    return 0;
}
