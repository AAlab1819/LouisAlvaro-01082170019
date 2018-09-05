#include<iostream>

using namespace std;

int main()
{
    int input;
    int upper=100;
    int lower=100;

    cin>>input;

    if(input%2==0){
        upper=(input/2)-1;
        lower=(input/2)+1;
        if(upper%2==0){
            upper-=1;
        }
        if(lower%2==0){
            lower+=1;
        }
    }
    else{
        upper=(input/2);
        lower=upper+1;
    }
    cout<<endl;
    cout<<upper<<" "<<lower<<endl;

    return 0;
}
