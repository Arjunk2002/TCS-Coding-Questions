
#include<iostream>
#include<string>
using namespace std;

string MoveHyphen(string s,int n){
    int i=0;
    int cnt=0;
    while(i<n){
        if(s[i]=='-'){
            cnt++;
            s.erase('-',1);
        }
        i++;

    }
    while (cnt--)
    {
      s = '-' + s;
    }
    return s;
}

int  main ()
{
  string s;
  cin >> s;
  int n = s.size ();
  cout<<MoveHyphen(s, n);
  return 0;
}