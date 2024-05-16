#include "array.h"
#include <iostream>
#include <stdexcept>

Array::Array(int size, int step) {
    if (size <= 0 || step <= 0) {
        throw std::invalid_argument("Rozmir i krok povynen buty bilshe nulya");
    }
    this->initialSize = size;
    this->step = step;
    this->currentIndex = 0;
    this->arraySize = size;
    this->array = new int[size];
}

Array::Array() : initialSize(10), step(5), currentIndex(0), arraySize(10) {
    this->array = new int[initialSize];
}

Array::~Array() {
    delete[] array;
}

void Array::showElements() const {
    for (int i = 0; i < currentIndex; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

void Array::expandArray(int size) {
    if (size <= 0) {
        throw std::invalid_argument("Rozmir povynen buty bilshe nulya");
    }
    int newSize = arraySize + size;
    int* newArray = new int[newSize];
    for (int i = 0; i < currentIndex; ++i) {
        newArray[i] = array[i];
    }
    delete[] array;
    array = newArray;
    arraySize = newSize;
}

int Array::getSize() const {
    return arraySize;
}

int Array::getElemSize() const {
    return currentIndex;
}

void Array::setValue(int val) {
    if (currentIndex >= arraySize) {
        expandArray(step);
    }
    array[currentIndex++] = val;
}

void Array::setArray(int* pArr, int size) {
    if (size <= 0) {
        throw std::invalid_argument("Rozmir povynen buty bilshe nulya");
    }
    while (arraySize < currentIndex + size) {
        expandArray(step);
    }
    for (int i = 0; i < size; ++i) {
        array[currentIndex++] = pArr[i];
    }
}


