#include <iostream>
#include <cmath>
#include <string>
#include "console.h"
#include "strlib.h"
#include "gmath.h"
using namespace std;

void quadratic(int a, int b, int c, double& root1, double& root2){
    double d = sqrt(b*b-4*a*c);
    if(d>=0){
        root1 = (-b+d)/(2*a);
        root2 = (-b-d)/(2*a);
    }
}

int main() {
    string name = "Marty stepp";
    name = toUpperCase(name);
    cout<<name<<endl;

//    double root1,root2;
//   quadratic(1,-3,-4,root1,root2);
//    cout << "root1:"<< root1<<" root2:" << root2 << endl;
    return 0;
}
