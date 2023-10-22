#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    vector<int> a(5,1);
    

    for(int j:a){
        cout<<j;
    }    
    cout<<endl;
    cout<<v.capacity()<<endl;

    v.push_back(1);
    cout<<v.capacity()<<endl;


    cout<<"size>" << v.size()<<endl;
    v.push_back(2);
    v.push_back(3);
    cout<<"size>" << v.size()<<endl;
    cout<<"size>" << v.capacity()<<endl;
    cout<<v.at(2)<<endl;

    for(int i:v){
        cout<<i<<endl;
    }
}
