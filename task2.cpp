#include <iostream>
void maxMin();
int main(){
    maxMin();
}
void maxMin() {
    int max, min, value, num;
    int i = 10;
    std::cin >> value;
    num = value % 10;
    max = num;
    min = num;
    for (; i <= value; i *= 10) {
        if (max < value % i / (i / 10)) max = value % i / (i / 10);
        if (min > value % i / (i / 10)) min = value % i / (i / 10);
    }
    if (max < value / (i / 10)) max = value / (i / 10);
    if (min > value / (i / 10)) min = value / (i / 10);
    std::cout << "Max: " << max << '\n' << "Min: " << min;
}

