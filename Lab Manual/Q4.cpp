#include<iostream>
using namespace std;
int main(){
    float cost;
    cout<<"Enter the cost of purchase:";
    cin>>cost;
    cout<<"Cost after discount:"<<cost-cost*20/100;
    return 0;
}