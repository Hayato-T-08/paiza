#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> a(n,vector<int>(m));
    rep(i,n)rep(j,m) cin>>a[i][j];
    int x;
    cin>>x;
    vector<int> r(x),s(x);
    rep(i,x) {
        cin>>r[i]>>s[i];
        r[i]--;
        s[i]--;
        }
int cur_idx=0;
int cur_col=0;
int sum=0;
    rep(i,x){
        cur_col=r[i];
        sum+=abs(a[cur_col][s[i]]-a[cur_col][cur_idx]);
        cur_idx=s[i];
    }

    cout<<sum<<endl;
    
}