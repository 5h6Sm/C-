#include <stdio.h>

int n;

long long int f(int n){
	long long int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += i;
	}
	return sum;
}

int main()
{
	scanf_s("%d", &n);
	printf("%lld\n", f(n));
}