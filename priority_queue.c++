#include<iostream>
#include<queue>

using namespace std;

int main(){
    /*
    priority_queue<int> maxi;
    maxi.push(1);
     maxi.push(4); 
     maxi.push(2);
     maxi.push(7); 

     int n=maxi.size(); 

     for(int i=0;i<n;i++){
        cout<<maxi.top()<<endl;
        maxi.pop(); 



     }
     */


     priority_queue<int,vector<int>, greater<int> > mini;

    mini.push(7);
    mini.push(5);
    mini.push(2);
    mini.push(0);
    int m=mini.size();
    for(int j;j<m;j++){
       cout<<mini.top()<<endl;
        mini.pop(); 

    }





}