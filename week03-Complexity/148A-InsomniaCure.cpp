#include<iostream>
#include<set>

using namespace std;

int main(){
    int punchedDragon=0;
    int shuttedDragon=0;
    int trampledDragon=0;
    int threatenedDragon=0;
    int damagedDragon=0;
    cin>>punchedDragon;
    cin>>shuttedDragon;
    cin>>trampledDragon;
    cin>>threatenedDragon;
    cin>>damagedDragon;

    set<int> result;

    for(int x=punchedDragon;punchedDragon<=damagedDragon;punchedDragon+=x)
        result.insert(punchedDragon);
    for(int x=shuttedDragon;shuttedDragon<=damagedDragon;shuttedDragon+=x)
        result.insert(shuttedDragon);
    for(int x=trampledDragon;trampledDragon<=damagedDragon;trampledDragon+=x)
        result.insert(trampledDragon);
    for(int x=threatenedDragon;threatenedDragon<=damagedDragon;threatenedDragon+=x)
        result.insert(threatenedDragon);

    cout<<result.size();

    return 0;
}
