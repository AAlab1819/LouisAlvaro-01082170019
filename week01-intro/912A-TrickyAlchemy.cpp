#include<iostream>

using namespace std;

int main(){
    long long ye_cry=0;
    long long bl_cry=0;
    long long ye_bll=0;
    long long gr_bll=0;
    long long bl_bll=0;
    long long ballcount1=0;
    long long ballcount2=0;
    long long rest=0;

    cin>>ye_cry>>bl_cry;
    cin>>ye_bll>>gr_bll>>bl_bll;

    if(ye_cry<(2*ye_bll+gr_bll)){
        ballcount1+=(2*ye_bll+gr_bll)-ye_cry;
    }
    if(bl_cry<(3*bl_bll+gr_bll)){
        ballcount2=(3*bl_bll+gr_bll)-bl_cry;
    }
    rest=ballcount1+ballcount2;

    cout<<endl;
    cout<<rest;

    return 0;
}
