#include<iostream>
#include<string>
using namespace std;

int main(){
   std::string a[2]={"arjun","karyappa"};

   for(int i=0;i<2;i++){
    cout<<a[i]<<endl;
   }
   sort(a->begin(),a->end());


   for(int i=0;i<2;i++){
    cout<<a[i]<<endl;
   }


   return 0;
}
