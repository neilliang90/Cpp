#include <fstream>
#include <iostream>
#include "console.h"
#include "vector.h"

using namespace std;

int main() {
    ifstream input;
    input.open("readme.txt");

    int count = 0;

    if( input.fail()){
        cout << "Failed to find the file" << endl;
    }else{
        Vector<string> allwords;
        string line;
        string token;
        /* Read each line
        while( getline(input, line)){
            cout << "This is a line :" << line << endl;
        }*/

        //Read each word -- seperated by white space/s
        while( input >> token ){
            cout << "This is a word : " << token << endl;
            count ++;
            allwords.add(token);
        }

        cout << "Total words : " << count << endl;
        cout << "Here they are : " << allwords << endl;
    }
    return 0;
}
