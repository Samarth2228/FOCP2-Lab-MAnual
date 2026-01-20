#include<iostream>
using namespace std;
int main(){
    int num1=12, num2=13;
    cout<<num1<<"\n"; 
    cout<<num2<<"\n";
    num1=num1^num2;
    num2=num1^num2;
    num1=num1^num2;
    cout<<num1<<"\n"; 
    cout<<num2<<"\n";
    return 0;
}