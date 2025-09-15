#include <iostream>
#include <string>

using namespace std;

void enterArrayData(double *inputArr, const int SIZE){
    cout << "Data entry for the array: " << endl;
    for (int i = 0; i < SIZE; i++){
        cout << "> Element #" << i << ": ";
        cin >> *(inputArr + i);
    }
}

void outputArrayData(double *outputArr, const int SIZE){
    cout << "Outputting array elements: ";
    for (int i = 0; i < SIZE; i++){
        cout << *(outputArr + i) << " ";
    }
    cout << endl;
}

void sumArray(double *arrayPtr, const int SIZE){
    double sum = 0;
    for (int i = 0; i < SIZE; i++){
        sum += *(arrayPtr + i);
    }
    cout << "Sum of elements: " << sum << endl;
}

int main(){
    const int SIZE = 5;
    double array[SIZE];
    double *arrPtr = nullptr;
    arrPtr = array;
    enterArrayData(arrPtr, SIZE);
    outputArrayData(arrPtr, SIZE);
    sumArray(arrPtr, SIZE);
}