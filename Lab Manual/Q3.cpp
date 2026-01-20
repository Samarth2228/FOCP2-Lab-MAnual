#include<iostream>
using namespace std;
int main(){
    float F, C, a;
    cout<<"Enter 1 for farenheit temp and 2 for celsius temp";
    cin>>a;
    if(a==1){
        cout<<"Enter the temp";
        cin>>F;

        C=(F-32)*(5.0/9);
        cout<<C;
    }
    else if(a==2){
        cout<<"Enter the temp";
        cin>>C;

        F=(C*(9.0/5.0))+32;
        cout<<F;
    }
    return 0;
}