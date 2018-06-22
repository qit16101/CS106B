#include <iostream>
#include "console.h"
#include "gwindow.h" // for GWindow
#include "simpio.h"  // for getLine
#include "vector.h"  // for Vector
using namespace std;

void song() {                                   // write a function without variable
    cout << "Now this is the story" << endl;    // endl=/n
    cout << "all about how" << endl;
    cout << "My life got flipped" << endl;
    cout << "turned upside down." << endl;
}

int main() {
    song();                                     // call song function
    cout << "Hello, World!" << endl;
    int age = getInteger("How old are you? ");  // call getInteger from simpio.cpp (follow symbol under cursor)
    cout << "Yeah right ! Qianqian wishes she were " << age << "!" << endl;
    song();
    return 0;
}
