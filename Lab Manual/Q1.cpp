#include<iostream>
using namespace std;
int main(){
    
    float sum=0;
    float n;
    for(int i=0;i<3;i++){
        cout<<"Enter marks:";
        cin>>n;
        sum=sum+n;
    }

    cout<<"Average:"<<sum/3.0;

    return 0;
}