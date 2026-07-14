#include <stdio.h>

int isPalindrome(int *arr, int size) {
    int *left = arr;
    int *right = arr + size - 1;

    while (left < right) {
        if (*left != *right) {     
            return 0;
        }
        left++;
        right--;
    }
    return 1;
}

int main() {
    int n;

    printf("Enter array size: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    if (isPalindrome(a, n)) {
        printf("PALINDROME\n");
    } 
    else {
        printf("NOT PALINDROME\n");
    }

    return 0;
}
