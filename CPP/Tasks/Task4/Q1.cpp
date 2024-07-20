#include <iostream>

template <typename T>
class DynamicArray {
private:
    T* array;
    int capacity;
    int currentSize;

    void resize() {
        capacity *= 2;
        T* newArray = new T[capacity];
        for (int i = 0; i < currentSize; ++i) {
            newArray[i] = array[i];
        }
        delete[] array;
        array = newArray;
    }

public:
    DynamicArray() : capacity(1), currentSize(0) {
        array = new T[capacity];
    }

    DynamicArray(int size) : capacity(size), currentSize(0) {
        array = new T[capacity];
    }

    DynamicArray(int size, T value) : capacity(size), currentSize(size) {
        array = new T[capacity];
        for (int i = 0; i < currentSize; ++i) {
            array[i] = value;
        }
    }

    DynamicArray(int size, T* values) : capacity(size), currentSize(size) {
        array = new T[capacity];
        for (int i = 0; i < currentSize; ++i) {
            array[i] = values[i];
        }
    }

    DynamicArray(const DynamicArray& arr) : capacity(arr.capacity), currentSize(arr.currentSize) {
        array = new T[capacity];
        for (int i = 0; i < currentSize; ++i) {
            array[i] = arr.array[i];
        }
    }

    ~DynamicArray() {
        delete[] array;
    }

    void pushback(T value) {
        if (currentSize == capacity) {
            resize();
        }
        array[currentSize++] = value;
    }

    void popback() {
        if (currentSize > 0) {
            --currentSize;
        }
    }

    void removeAt(int index) {
        if (index < 0 || index >= currentSize) {
            std::cerr << "Index out of bounds" << std::endl;
            return;
        }
        for (int i = index; i < currentSize - 1; ++i) {
            array[i] = array[i + 1];
        }
        --currentSize;
    }

    void insertAt(int index, T value) {
        if (index < 0 || index > currentSize) {
            std::cerr << "Index out of bounds" << std::endl;
            return;
        }
        if (currentSize == capacity) {
            resize();
        }
        for (int i = currentSize; i > index; --i) {
            array[i] = array[i - 1];
        }
        array[index] = value;
        ++currentSize;
    }

    void insertMiddle(T value) {
        int index = currentSize / 2;
        insertAt(index, value);
    }

    void removeMiddle() {
        int index = currentSize / 2;
        removeAt(index);
    }

    int size() const {
        return currentSize;
    }

    void print() const {
        for (int i = 0; i < currentSize; ++i) {
            std::cout << array[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    // Example with int
    DynamicArray<int> arr1;
    arr1.pushback(1);
    arr1.pushback(2);
    arr1.pushback(3);
    arr1.print();

    DynamicArray<int> arr2(5);
    arr2.pushback(4);
    arr2.pushback(5);
    arr2.print();

    DynamicArray<int> arr3(3, 10);
    arr3.print();

    int values[] = {1, 2, 3, 4, 5};
    DynamicArray<int> arr4(5, values);
    arr4.print();

    DynamicArray<int> arr5(arr4);
    arr5.print();

    arr1.insertAt(1, 9);
    arr1.print();

    arr1.removeAt(2);
    arr1.print();

    arr1.insertMiddle(7);
    arr1.print();

    arr1.removeMiddle();
    arr1.print();

    std::cout << "Size of arr1: " << arr1.size() << std::endl;

    arr1.popback();
    arr1.print();

    // Example with double
    DynamicArray<double> arr6(3, 1.5);
    arr6.pushback(2.5);
    arr6.print();

    return 0;
}