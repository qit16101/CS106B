#include <iostream>
#include "console.h"
#include "gwindow.h" // for GWindow
#include "simpio.h"  // for getLine
#include "vector.h"  // for Vector
using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    int age = getInteger("How old are you? ");
    cout << "Yeah right ! Qianqian wishes she were " << age << "!";

    return 0;
}
