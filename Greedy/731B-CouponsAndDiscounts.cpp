#include<iostream>
#include<cstdio>

#define MAX_SIZE 200005

using namespace std;

int main(){
    int Pizza_num[MAX_SIZE];
    int n;
    while(cin>>n){
        int Break_flag=0;
        for(int i=0;i<n;i++){
            cin>>Pizza_num[i];
            Pizza_num[n]=0;
        }
        for(int i=0;i<n;i++){
            if(Pizza_num[i]==0){
                continue;
            }
            else{
                if(Pizza_num[i]%2){
                    if(Pizza_num[i+1]==0){
                        Break_flag=1;
                        break;
                    }
                    Pizza_num[i+1]-=1;
                }
                Pizza_num[i]=0;
            }
        }
        for(int i=0;i<n;i++){
            if(Pizza_num[i]){
                Break_flag=1;
                break;
            }
        }
        if(Break_flag){
            cout<<"NO"<<endl;
            break;
        }
        else{
            cout<<"YES"<<endl;
            break;
        }
    }
    return 0;
}
