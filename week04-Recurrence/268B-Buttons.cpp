#include<iostream>

using namespace std;

int main(){
    int n=0;
    int number_of_try=0;
    int finalResult=0;
    cin>>n;

    for(int x=0;x<=n-1;x++){
        number_of_try=number_of_try+((n-x)*x);
    }
    finalResult=number_of_try+n;
    cout<<finalResult;

    return 0;
}
