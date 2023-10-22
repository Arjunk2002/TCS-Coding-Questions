#include<iostream>
using namespace std;

int main(){
    int a=3;
    int b=5;
    int c=1;
    if(a>b&&a>c){
        cout<<"a is greater";
    }else{
        if(b>c){
            cout<<"b is greater";
        }else{
            cout<<"c is greater";
        }
    }
    return 0;
}