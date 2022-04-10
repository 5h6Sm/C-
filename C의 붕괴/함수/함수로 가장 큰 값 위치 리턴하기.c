#include <stdio.h>

int n, d[110];

int f() {
    int i, max = 0;

    for (i = 0; i < n; i++) {
        if (d[i] > d[max])
        {
            max = i;
        }
    }

    return max + 1;

}
int main()
{
    scanf_s("%d", &n);

    for (int i = 0; i < n; i++)
        scanf_s("%d", &d[i]);

    printf("%d", f());
    return 0;
}