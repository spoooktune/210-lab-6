#include <iostream>
#include <string>

using namespace std;

void enterArrayData(double *inputArr[]){
    int size = sizeof(*inputArr);
    cout << "Data entry for the array: " << endl;
    for (int i = 0; i < size; i++){
        cout << "> Element #" << i << ": " << endl;
        cin >> *inputArr[i];
    }
}

void outputArrayData(double *outputArr[]){
    int size = sizeof(*outputArr);
    cout << "Outputting array elements: ";
    for (int i = 0; i < size; i++){
        cout << *(outputArr + i);
    }
    cout << endl;
}

void sumArray(double *arrayPtr[]){
    double sum = 0;
    for (int i = 0; i < sizeof(*arrayPtr); i++){
        sum += *arrayPtr[i];
    }
    cout << "Sum of elements: " << sum << endl;
}

int main(){

}