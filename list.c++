#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> a;
    a.push_back(1);
    a.push_front(2);

    for(int i:a){
        cout<<i<<" ";

    }
    a.erase(a.begin());
    
    for(int i:a){
        cout<<i<<" ";
}
}