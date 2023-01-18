#include <iostream>
#define S1 10
#define S2 20

void fill(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100;
    }
}

void plot(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%4i", arr[i]);
    }
    printf("\n");
}

int main() {
    srand(time(NULL));
    int a1[S1];
    int a2[S2];
    fill(a1, S1);
    fill(a2, S2);
    plot(a1, S1);
    plot(a2, S2);

    return 0;
}
