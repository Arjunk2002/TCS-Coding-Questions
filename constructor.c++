#include<iostream>
using namespace std;

class cons{
    int a,b;
    public:
    cons (void);


    void print(){
        cout<<"hello"<<endl;
        cout<<a<<" "<<b<<endl;
    }

};

cons::cons(void){
    int a=10;
    int b=28;
}


int main(){
    cons c;
    c.print();

}