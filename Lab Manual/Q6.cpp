#include<iostream>
using namespace std;
int main(){
    float salary;
    cout<<"Enter the salary:";
    cin>>salary;
    cout<<"Salary after bonus:"<<salary+salary*12/100;
    return 0;
}