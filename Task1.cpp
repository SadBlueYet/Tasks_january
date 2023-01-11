#include <iostream>
void createArray();
int main(){
    createArray();
}
void createArray() {
    int array[100][100];
    int arrLength;
    int value;
    std::cin >> arrLength;
    for (int i = 0; i < arrLength; i++) {
        for (int j = 0; j < arrLength; j++) {
            if (i == 0 || i == arrLength - 1) array[i][j] = arrLength;
            else if (i < arrLength - 1 - i) {
                array[i][0] = arrLength - i;
                array[i][arrLength - 1] = arrLength - i;
                if (j <= arrLength - j - 1) array[i][j] = arrLength - i - j;
                else if (i == 1) array[i][j] = j;
                else if(i != 1) array[i][j] = array[i-1][j-1];
            }
            else if (i == arrLength - i - 1) {
                for (int l = 0; l < arrLength; l++) {
                    value = array[i-1][l];
                    value -= 1;
                    array[i][l] = value;
                }
            }
            else if (i > arrLength - i - 1) {
                value = arrLength - i - 1;
                for (int l = 0; l < arrLength; l++) {
                    array[i][l] = array[value][l];
                }  
            } 
        }
    }for (int i = 0; i < arrLength; i++) {
        for (int j = 0; j < arrLength; j++) {
            std::cout << array[i][j] << '\t';
        }
        std::cout << '\n';
    }
}

