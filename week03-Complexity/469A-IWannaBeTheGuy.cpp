#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int m=0;
    int i=0;
    int j=0;
    int n=0;
    int p=0;
    int q=0;
    int flag=0;

    cin>>n;
    cin>>p;
    int x[p], merge[n];

    for(i=0;i<p;i++){
        cin>>x[i];
        m=x[i];
        merge[m]=1;
    }
    cin>>q;
    int y[q];
    for(i=0;i<q;i++){
        cin>>y[i];
        m=y[i];
        merge[m]=1;
    }
    for(i=1;i<=n;i++){
        if(merge[i]==1){
            flag=1;
        }
        else{
            flag=0;
            break;
        }
    }
    if(flag==1){
        cout<<"I become the guy.";
    }
    else{
        cout<<"Oh, my keyboard!";
    }

    return 0;
}
