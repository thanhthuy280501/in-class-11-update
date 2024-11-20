#include "triple.h"

template <typename T>
Triple<T>::Triple() {
    array = new T[3];
    array[0] = T(); // Default value
    array[1] = T();
    array[2] = T();
}

template <typename T>
Triple<T>::Triple(T first, T second, T third) {
    array = new T[3];
    array[0] = first;
    array[1] = second;
    array[2] = third;
}

template <typename T>
void Triple<T>::setFirst(T newValue) {
    array[0] = newValue;
}

template <typename T>
void Triple<T>::setSecond(T newValue) {
    array[1] = newValue;
}

template <typename T>
void Triple<T>::setThird(T newValue) {
    array[2] = newValue;
}

template <typename T>
T Triple<T>::getFirst() const {
    return array[0];
}

template <typename T>
T Triple<T>::getSecond() const {
    return array[1];
}

template <typename T>
T Triple<T>::getThird() const {
    return array[2];
}
