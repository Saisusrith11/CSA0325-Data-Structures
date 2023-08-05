#include <stdio.h>
// Function to perform binary search
int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
            return mid;

        if (arr[mid] > target)
            right = mid - 1;
        else
            left = mid + 1;
    }
    return -1;
}

int main() {
    int n, target;
    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the sorted array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to be searched: ");
    scanf("%d", &target);
    int index = binarySearch(arr, 0, n - 1, target);
    if (index != -1)
        printf("Number %d found at index %d\n", target, index);
    else
        printf("Number %d not found in the array\n", target);

    return 0;
}
