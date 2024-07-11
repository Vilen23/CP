    #define ll long long int
    #include<bits/stdc++.h>
    using namespace std;
     
    int main(){
        int t;
        cin>>t;
        while(t--){
            ll n;
            cin>>n;
            vector<ll> v(n);
            for(ll i = 0;i<n;i++) cin>>v[i];
            ll ans = 0,mx=INT_MIN,sum=0;
            for(ll i = 0;i<n;i++){
                mx = max(mx,v[i]);
                sum+=v[i];
                if(mx == sum - mx) ans++;
            }
            cout<<ans<<endl;
        }
    }