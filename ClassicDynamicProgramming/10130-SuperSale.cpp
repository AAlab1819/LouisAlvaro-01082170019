#include<bits/stdc++.h>

using namespace std;

const int MAX_WEIGHT=31;
int x_weight[MAX_WEIGHT];

int main(){
    int T;
    cin>>T;
    while(T--){
        for(int i=0;i<MAX_WEIGHT;i++){
            x_weight[i]=0;
        }
        int x_items;
        cin>>x_items;
        for(int item=0;item<x_items;++item){
            int itemWeight,itemValue;
            cin>>itemValue;
            cin>>itemWeight;
            for(int weight=MAX_WEIGHT-1;weight>=itemWeight;--weight){
                x_weight[weight]=max(x_weight[weight],x_weight[weight-itemWeight]+itemValue);
            }
        }
        int total=0;
        int people;
        int weight;
        cin>>people;
        for(int i=0;i<people;i++){
            cin>>weight;
            total+=x_weight[weight];
        }
        cout<<total<<endl;
    }
    return 0;
}
