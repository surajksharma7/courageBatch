#include<iostream>
#include<vector>
using namespace std;

int main() {
    char c;
    cout<<"Enter character";
    cin>>c;

    if(c>='A'  && c <='Z' || c>= 'a' && c<='z'){
        cout<<"alphabet";
    }
    else if (c>= '0' && c<='9'){
        cout<<"number";
    }
    
    else{
    cout<<"ye special character hai ";
    }
    return 0;
}