#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);

    for (int i = a;i <= b;i++) {
        int original = i;
        int reversed = 0;
        int n = i;
        if (i == 1) { continue; }
        if (i >= 1000 && i <= 9999) { continue; }
        if (i >= 100000 && i <= 999999) { continue; }
        while (n) {
            int digit = n % 10;
            reversed = reversed * 10 + digit;
            n = n / 10;
        }
        if (original == reversed) {
            int is_flag = 1;
            for (int j = 2;j * j <= original;j++) {
                if (original % j == 0) {
                    is_flag = 0;
                    break;
                }
            }
            if (is_flag == 1) {
                printf("%d\n", original);
            }
        }
    }
    return 0;
}