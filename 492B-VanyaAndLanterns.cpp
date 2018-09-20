#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int a=0;
    int b=0;
    int c=0;
    cin>>a>>b;
    int x[a];

    for(int i=0;i<a;i++){
        cin>>x[i];
    }
    sort(x,x+a);
    c=max(x[0],b-x[a-1])*2;
    for(int i=0;i<a-1;i++)
        c=max(c,x[i+1]-x[i]);

    cout.precision(20);
    cout<<fixed<<c/2.0<<endl;

    return 0;
}
