#include <iostream>
using namespace std;


int main()
{
    return 0;
}

// Function definition for enterArrayData
void enterArrayData(double* arr, int size)
{
    cout << "Data entry for array:\n";
    for(int i = 0; i < size; i++)
    {
        cout << " > Element #" << i << ": ";
        cin >> *(arr + i);
    }
    cout << "Data entry complete.\n";
}