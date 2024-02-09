#include <stdio.h>

int i = 0, j = 1, k = 2;

void func(int* p, int* q) {
    p = q;

    *p = k;
}


int main() {
    func(&i, &j);

    printf("i = %d, j = %d, \n", i, j);

    return 0;
}
