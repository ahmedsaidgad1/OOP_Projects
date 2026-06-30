#include <iostream>
#include "Input and Validation Library .h"
using namespace std;

int main()
{
    cout << "Enter a number between 1 and 10: " << endl;
    int x = cls_Input_Validation::Read_Int_Num_Between(1, 10);

    cout << "Success! Your number is: " << x << endl;
    return 0;
}