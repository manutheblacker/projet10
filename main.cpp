#include <iostream>
using namespace std;
#include "Compteur.h"

int main() {
    cout << "Hello, World!" << endl;
     Compteur values(50);
     values.incrementCompteur();
     values.decrementCompteur();
    return 0;
}
