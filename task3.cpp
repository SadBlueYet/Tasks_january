#include <iostream>
void inputArray();

int main(){
    inputArray();
}
void inputArray() {
    const int length = 5;
    int array[length];
    bool sub;
    int value;
    for (int i = 0; i < length; i++) {
        std::cin >> array[i];
    }
    do {
        sub = false;
        for (int i = 0; i < length; i++) {
            if (array[i] > array[i + 1]) {
                if (i == length - 1) break;
                value = array[i];
                array[i] = array[i + 1];
                array[i + 1] = value;
                sub = true;   
            }
            else continue;
        }
    } while (sub == true);
    for (int i = 0; i < 5; i++) {
        std::cout << array[i] << '\t';
    }
}

