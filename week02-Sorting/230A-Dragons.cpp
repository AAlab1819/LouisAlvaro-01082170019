#include<iostream>

using namespace std;

void insertionSort(int arr1[],int arr2[],int amount){
    int a,b,c,d;
    for(int a=1;a<amount;a++){
        b=arr1[a];
        d=arr2[a];
        c=a-1;
        while(c>=0&&arr1[c]>b){
            arr1[c+1]=arr1[c];
            arr2[c+1]=arr2[c];
            c=c-1;
        }
        arr1[c+1]=b;
        arr2[c+1]=d;
    }
}
int main(){
    int power;
    int naga;
    int win=0;
    cin>>power>>naga;
    int nagaArray[naga];
    int bonus[naga];

    for(int i=0;i<naga;i++){
        cin>>nagaArray[i]>>bonus[i];
    }

    insertionSort(nagaArray,bonus,naga);

    for(int j=0;j<naga;j++){
        if(power>nagaArray[j]){
            power=power+bonus[j];
            win++;
        }
        else{
            break;
        }
    }
    if(win==naga){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
