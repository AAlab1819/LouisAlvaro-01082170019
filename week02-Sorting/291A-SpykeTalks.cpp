#include<iostream>

using namespace std;

int main(){
    int secretary;
    int current=0;
    int valid=0;
    int temp=0;
    int num=0;
    int minvalue;
    int z;

    cin>>secretary;

    int call[secretary];

    for(int x=0;x<secretary;x++){
        cin>>call[x];
    }
    for(int y=0;y<secretary-1;y++){
        minvalue=call[y];
        num=y;

        for(int q=y+1;q<secretary;q++){
            if(minvalue>call[q]){
                minvalue=call[q];
                num=q;
            }
        }
        temp=call[y];
        call[y]=call[num];
        call[num]=temp;
    }
    for(int i=0;i<secretary-1;i++){
        current=0;
        for(int j=i+1;j<secretary;j++){
            if(call[i]==call[j]){
                if(call[i]>0){
                    valid++;
                    current++;
                }
            }
        }
        if(current>1){
            valid=-1;
            break;
        }
    }
    cout<<valid;

    return 0;
}
