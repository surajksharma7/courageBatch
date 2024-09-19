#include<iostream>
using namespace std;

int main() {
    int num1,num2;
    cout<<"Enter num1 ";
    cin>>num1;

    cin>>num2;

    // int temp = num1;
    // num1 = num2;
    // num2 = temp;

    // cout<<num1 <<" "<<num2;

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    cout<<num1<<num2;
    return 0;
}