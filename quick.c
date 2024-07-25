#include <stdio.h>

int partition(int array[], int l, int r, int pivot) {
    while (l <= r) {
        while (array[l] < pivot) {
            l++;
        }
        while (array[r] > pivot) {
            r--;
        }
        if (l <= r) {
            int temp = array[l];
            array[l] = array[r];
            array[r] = temp;
            l++;
            r--;
        }
    }
    return l;
}

void quickSort(int array[], int s, int e) {
    if (s < e) {
        int mid = (s + e) / 2;
        int pivot = array[mid];
        int index = partition(array, s, e, pivot);
        quickSort(array, s, index - 1);
        quickSort(array, index, e);
    }
}

void quickSortAlgorithm(int array[], int size) {
    quickSort(array, 0, size - 1);
}

int main() {
    int numbers[] = {2, 5, 3, 1, 4};
    int size = sizeof(numbers) / sizeof(numbers[0]);
	int i=0;

    printf("before sort: ");
    while(numbers[i]) {
        printf("%d ", numbers[i]);
        i++;
    }
    printf("\n");

    quickSortAlgorithm(numbers, size);

    printf("after sort: ");
    i = 0;
    while(numbers[i]) {
        printf("%d ", numbers[i]);
        i++;
    }
    printf("\n");

    return 0;
}

