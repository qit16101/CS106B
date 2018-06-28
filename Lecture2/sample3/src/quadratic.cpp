#include <iostream>
#include <cmath>
#include <string>
#include "console.h"
#include "strlib.h"
#include "gmath.h"
using namespace std;
/*
M
MA
MAR
MART
MARTY
ARTY
RTY
TY
Y

M
MA
MAR
MART
MARTY
 ARTY
  RTY
   TY
    Y
*/
void diamond(string s){
    for(int i=0; i<s.size(); i++){
        cout<<s.substr(0,i+1)<<endl;
    }
    for(int i=0; i<s.size(); i++){
//        cout<<s.substr(i+1,s.size()-i)<<endl;
        for (int j=0; j<i+1; j++){
            cout<<" ";                  //  how to print white spaces?
        }
        cout<<s.substr(i+1)<<endl;
    }
}

int main() {
//    string name = "Marty stepp";
//    name = toUpperCase(name);
//    cout<<name<<endl;

//    cout<<"Type your name: ";
//    string name;                    //Qianqian Tong
//    cin>>name;                      //Hello,Qianqian
//    cout<<"Hello,"<<name<<endl;

//    cout<<"Type your name: ";
//    string name;
//    getline(cin,name);                  ////Hello,Qianqian Tong
//    cout<<"Hello,"<<name<<endl;

    diamond("MARTY");
    return 0;
}
