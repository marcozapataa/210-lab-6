#include <iostream>
using namespace std;

// function prototypes
void enterArrayData(double* arr, int size);
void outputArrayData(double* arr, int size);
double sumArray(double* arr, int size);

int main()
{
    // create array size of 5, using a constant
    const int SIZE = 5;

    // create dynamic double array
    double *dynamicArray = nullptr;
    dynamicArray = new double[SIZE];

    // call function to populate array
    enterArrayData(dynamicArray, SIZE);
    // call function to output array data
    outputArrayData(dynamicArray, SIZE);
    // calculate and display the sum
    double sum = 0.0;
    sum = sumArray(dynamicArray, SIZE);
    cout << "Sum of values: " << sum << endl;

    // free dynamically allocated memory
    delete[] dynamicArray;


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

//Function definition for outputArrayData
void outputArrayData(double* arr, int size)
{
    cout << "Outputting array elements: ";
    for (int i = 0; i < size; i++)
    {
        cout << *(arr + i) << " ";
    }
    cout << "\n";
}

//Function definition for sumArray
double sumArray(double* arr, int size)
{
    double total = 0.0;
    for (int i = 0; i < size; i++)
    {
        total += *(arr + i);
    }
    return total;
}