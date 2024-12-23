#include <stdio.h>
#define MAX_SIZE 100

int main() {
    int array[MAX_SIZE], size, target, positions[MAX_SIZE], count = 0;

    printf("Nhap kich thuoc cua mang: ");
    scanf("%d", &size);
    printf("Nhap cac gia tri cua mang:\n");
    for (int i = 0; i < size; i++) scanf("%d", &array[i]);
    printf("Nhap so can tim: ");
    scanf("%d", &target);

    for (int i = 0; i < size; i++) {
        if (array[i] == target) positions[count++] = i;
    }
    if (count > 0) {
        printf("Vi tri cua phan tu %d: ", target);
        for (int i = 0; i < count; i++) printf("%d ", positions[i]);
        printf("\n");
    } else {
        printf("Khong tim thay phan tu %d.\n", target);
    }
    return 0;
}

