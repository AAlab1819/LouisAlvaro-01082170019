#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    priority_queue<pair<1,int> >x;
    map<int,11>m;

    for(int i=0;i<t;i++){
        11 id,oldz,p,s,l,c;
        cin>>id>>old>>p>>l>>c>>s;
        11 newA=(p*50)+(1*5)+(c*10)+(s*20);
        11 change=newA-old;
        m[id]=newA;
        x.push(make_pair(change,id));
    }
    for(int i=0;i<5;i++){
        if(x.empty()){
            break;
        }
        pair<11,int>val=x.top();
        cout<<val.second<<" " <<m[val.second]<<endl;
        x.pop();
    }
    return 0;
}
