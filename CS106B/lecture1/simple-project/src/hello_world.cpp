#include <iostream>
#include "console.h"
#include "gwindow.h" // for GWindow
#include "simpio.h"  // for getLine
#include "vector.h"  // for Vector
using namespace std;

void song( ){
    cout << "Good" << endl;
    cout << "Great" << endl;
}

int main() {
    song();
    cout << "Hello, World!"<< endl;
    int age = getInteger( "How old are you ?" );
    song();
    cout << "I wish I were " << age << "!" << endl;
    return 0;
}

