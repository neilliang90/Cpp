#include <iostream>
#include "console.h"
#include "vector.h"
#include "grid.h"

using namespace std;

int main() {
    Grid<int> matrix( 3, 4 );
    cout << matrix << endl;
    return 0;
}
