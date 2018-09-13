#include<iostream>

using namespace std;

void mergeSort(long long *arr,long long low,long long mid,long long high){
    int x,y,z,d[high-low+1];
    x=low;
    z=0;
    y=mid+1;

    while(x<=mid&&y<=high){
        if (arr[x]<arr[y]){
            d[z]=arr[x];
            z++;
            x++;
        }
        else{
            d[z]=arr[y];
            z++;
            y++;
        }
    }
    while(x<=mid){
        d[z]=arr[x];
        z++;
        x++;
    }
    while(y<=high){
        d[z]=arr[y];
        z++;
        y++;
    }
    for(x=low;x<=high;x++){
        arr[x]=d[x-low];
    }
}
void split(long long *arr,long long low,long long high){
    int mid;
    if(low<high){
        mid=(low+high)/2;
        split(arr,low,mid);
        split(arr,mid+1,high);
        mergeSort(arr,low,mid,high);
    }
}
int main(){
    int a;
    long long stewards;
    long long minvalue=0;
    long long maxvalue=0;
    int valuecount=0;
    bool b=false;
    long count=0;


    cin>>a;
    long long Array[a];
    for(int f=0;f<a;f++){
        cin>>Array[f];
        if(Array[f]>maxvalue){
            maxvalue=Array[f];
        }
        if(b==false){
            minvalue=Array[f];
            b=true;
        }
        if(b==true&&minvalue>Array[f]){
            minvalue=Array[f];
        }
    }
    split(Array,0,a-1);

    for(int i=0;i<a;i++){
        if(Array[i]<maxvalue&&Array[i]>minvalue){
            count++;
        }
    }
    cout<<count;
    return 0;
}
