#include <iostream>
#include <cmath>
#include "console.h"
#include <string>
#include "simpio.h"
#include "strlib.h"

using namespace std;

void song(); //function prototype
void quadratic_formula( double a, double b, double c, double &root1, double &root2);
void namediamond(string name);

int main() {
    /*double root1, root2;
    song();
    cout << "Calculate root of quadratic function" << endl;
    //song();
    quadratic_formula(1, -3, -4, root1, root2 );
    cout << "Root are " << root1 << '  ' << root2 << endl;
   */

    string name =getLine( "Please input your name : ");

    namediamond(name);
    /*string stop = getLine( "Exit ? yes or no :");
    if( stop == "yes"){
        exit;
    }*/
    return 0;
}

void song( ){
    cout << "Now this is the story" << endl;
    cout << "all about how" <<endl;
}

void quadratic_formula( double a, double b, double c, double &root1, double &root2){
// TO DO if else
   root1 = ( -b + sqrt( pow( b, 2) - 4*a*c))/(2*a);
   root2 =  ( -b - sqrt( pow( b, 2) - 4*a*c))/( 2*a );
}

void namediamond( string name){
    int Itr = name.length();
    for ( int i =0; i<Itr; i++){
        cout << name.substr(0, i+1) << endl;

    }

    for ( int j = 0; j< Itr; j++){
        for( int k = 0; k < j+1 ; k++){
            cout<< " " ;
        }
        cout << name.substr(j+1) << endl;

    }
}
