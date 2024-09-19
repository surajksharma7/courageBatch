#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

int main() {
    int n = 1;
    int binaryno = 0;
    int i = 0;
    while(n>0){
        int bit = (n&1);
        binaryno = bit*pow(10,i++) + binaryno;
        n = n>>1;
    }
    cout<<binaryno;


    // int num;
    // cin>>num;
    // int arr[32];
    // int i = 0;
    // while(num>0){
    //     arr[i++] = num%2;
    //     num = num/2;
    // }
    // for(int val = i-1;val>=0;val--){
    //     cout<<arr[val];
    // }
    return 0;
}