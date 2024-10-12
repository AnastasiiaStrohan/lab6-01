#include <iostream>
#include <iomanip>

using namespace std;

const int SIZE = 23;


void GenerateArray(int* arr, const int size) {
   
    int fixedArray[SIZE] = { 17, 8, -14, 13, -9, 25, 0, 6, 11, -3, 4, -1, 5, 22, 10, 20, 3, 18, 19, -7, 0, 1, 2 };

   
    for (int i = 0; i < size; i++) {
        arr[i] = fixedArray[i];
    }
}

void PrintArray(int* arr, const int size) {
    for (int i = 0; i < size; i++) {
        cout << setw(4) << arr[i];
    }
    cout << endl;
}


void CountAndSumElements(int* arr, const int size, int& count, int& sum) {
    count = 0;
    sum = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0 && arr[i] % 4 != 0) {  
            count++;
            sum += arr[i];
        }
    }
}


void ReplaceElementsWithZero(int* arr, const int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0 && arr[i] % 4 != 0) { 4;
            arr[i] = 0;
        }
    }
}

int main() {
    int r[SIZE];  
    int count, sum;  

   
    GenerateArray(r, SIZE);

   
    cout << " " << endl;
    PrintArray(r, SIZE);

   
    CountAndSumElements(r, SIZE, count, sum);

    
    ReplaceElementsWithZero(r, SIZE);

    
    cout << "\n n= " << count << endl;
    cout << "sum= " << sum << endl;

    
    cout << "\n " << endl;
    PrintArray(r, SIZE);

    return 0;
}
