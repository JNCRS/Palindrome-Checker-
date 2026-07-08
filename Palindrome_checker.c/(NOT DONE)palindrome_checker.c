#include <stdio.h>

int isPalindrome(int *arr, int size);

int main() {
    int n;
    
    printf("Enter array size: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1;
    }

    int a[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    if (isPalindrome(a, n)) {
        printf("PALINDROME\n");
    } else {
        printf("NOT PALINDROME\n");
    }
	
    return 0;
