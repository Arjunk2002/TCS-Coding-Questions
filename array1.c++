#include<iostream>
#include<array>
using namespace std;


int main(){
    int a[3]={1,2,3};
    int arr[6];

    array<int,4> b;
    for(int i;i<3;i++)
    cout<<b[i]<<endl;
    cout<<"first element" << b.front()<<endl;
}