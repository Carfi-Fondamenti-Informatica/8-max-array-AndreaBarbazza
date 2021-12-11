#include <iostream>
#include "lib.h"
using namespace std;

int main() {

    int dim=0;
    cin >> dim;
    float numeri[dim];
    for (int i=0; i<dim; i++){
        cin >> numeri[i];
    }

    cout << Massimo(numeri, dim ) << endl;

    return 0;
}

