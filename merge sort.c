#include <stdio.h>

int a[100];

void combine(int low, int mid, int high) {
    int i = low, j = mid + 1, temp[100], k = low;

    while (i <= mid && j <= high) {
        if (a[i] <= a[j])
            temp[k++] = a[i++];
        else
            temp[k++] = a[j++];
    }

    while (i <= mid)
        temp[k++] = a[i++];

    while (j <= high)
        temp[k++] = a[j++];

    for (i = low; i <= high; i++)
        a[i] = temp[i];
}

void mergesort(int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;
        mergesort(low, mid);
        mergesort(mid + 1, high);
        combine(low, mid, high);
    }
}

int main() {
    int n, i;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    mergesort(0, n - 1);

    printf("After sorting: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
