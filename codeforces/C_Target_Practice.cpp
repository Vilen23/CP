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
            vector<vector<int>> v;
            int sum = 0;
            for(int i = 0;i<10;i++){
                for(int j = 0;j<10;j++){
                    char ch;
                    cin>>ch;
                    if(ch == 'X'){
                        if(i == 0 or i == 9 or j == 0 or j == 9){
                            sum+=1;
                            continue;
                        }else if(i == 1 or j==1 or i == 8 or j==8){
                            sum+=2;
                            continue;
                        }else if(i==2 or j ==2 or i == 7 or j == 7){
                            sum+=3;
                            continue;
                        }else if(i == 3 or j == 3 or i == 6 or j==6){
                            sum+=4;
                            continue;
                        }else {
                            sum+=5;
                            continue;
                        }
                    }
                }
            }
            cout<<sum<<endl;
        }
        return 0;
    }