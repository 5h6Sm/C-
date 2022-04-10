#include <stdio.h>

int n, d[100010], k;

int f(int k) {
    for (int i = 0; i < n; i++) {
        if (k == d[i]) {
            return i;
        }
    }
    return -1;
}
int main()
{
    scanf_s("%d", &n);

    for (int i = 1; i <= n; i++)
        scanf_s("%d", &d[i]);

    scanf_s("%d", &k);
    printf("%d\n", f(k));
}