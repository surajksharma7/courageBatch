#include<iostream>
#include<vector>
using namespace std;

int main() {
    int number  = 12354;
    int digit = 0;
    int reverse = 0;
    while(number >0){
        digit = number %10;
        reverse = reverse * 10 + digit ;
        number = number / 10;
    }
    cout<<reverse;
    return 0;
}