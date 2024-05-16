#include "array.h"
#include <iostream>

int main() {
    try {
        Array arr(2, 2);

        arr.setValue(6);
        arr.setValue(60);
        arr.setValue(40);

        arr.showElements();

        Array defaultArr;
        defaultArr.setValue(10);
        defaultArr.setValue(20);
        defaultArr.showElements();

        int testArr[] = {12, 20, 2, 0, 1, 44, 44, 44, 1, 0, 2, 20, 12, 1};
        arr.setArray(testArr, 14);
        arr.showElements();

        return 0;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }
}
