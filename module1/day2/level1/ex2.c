/*Write a program to swap any type of data passed to an function.*/
#include <stdio.h>

void swap(void* a, void* b, size_t size) {
    char* ptr_a = (char*)a;
    char* ptr_b = (char*)b;
    char temp;

    for (size_t i = 0; i < size; i++) {
        temp = *(ptr_a + i);
        *(ptr_a + i) = *(ptr_b + i);
        *(ptr_b + i) = temp;
    }
}

int main() {
    int a = 5, b = 10;
    printf("Before swap: a = %d, b = %d\n", a, b);

    swap(&a, &b, sizeof(int));

    printf("After swap: a = %d, b = %d\n", a, b);

    double x = 3.14, y = 2.71828;
    printf("Before swap: x = %lf, y = %lf\n", x, y);

    swap(&x, &y, sizeof(double));

    printf("After swap: x = %lf, y = %lf\n", x, y);

    return 0;
}
