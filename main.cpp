#include <iostream>
#include <string>

using namespace std;

void enterArrayData(double *inputArr[]){
    int size = sizeof(*inputArr);
    for (int i = 0; i < size; i++){
        cout << "Enter value for element " << i + 1 << ": " << endl;
        cin >> *inputArr[i];
    }
}



int main(){

}