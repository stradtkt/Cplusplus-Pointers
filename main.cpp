#include <iostream>
#include <string>
using namespace std;

void manip(double value) {
    value = 10.0;
    cout << "Value of int in manipulate: " << value << endl;
}

int main() {
    int nValue = 8;
    int *pnValue = &nValue;


    cout << "nValue: " << nValue << endl;
    cout << "Pointer nValue: " << pnValue << endl;
    cout << "De-referenced pointer value: " << *pnValue << endl;

    double dValue = 123.4;
    cout << "1. dValue: " << dValue << endl;
    manip(dValue);
    cout << "4. dValue: " << dValue << endl;


    return 0;
}