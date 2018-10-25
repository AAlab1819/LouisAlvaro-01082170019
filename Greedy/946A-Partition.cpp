#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int t;
    int ans=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>t;
        ans+=abs(t);
    }
    cout<<ans;

    return 0;
}
