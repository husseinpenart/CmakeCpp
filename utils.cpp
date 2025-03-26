#include <iostream>
// Define a macro to calculate the square of a number
#define SQUARE(x) (x * x)
using namespace std;

void printUtilsMessage() {  
    int n = 7;
    int result = SQUARE(n); // Expands to: (n * n)
    cout << "Square of " << n << " is " << result;
    return 0;
}
