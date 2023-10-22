#include<iostream>
using namespace std;

int main(){
    int a=10;
    int * aptr=&a;
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<aptr<<endl;
    cout<<*aptr<<endl;
    cout<<&aptr<<endl;

    *aptr=20;
    cout<<*aptr<<endl;

    int arr[]={1,2,3};
    int *ptr=arr;
    






}