#include <stdio.h>
int main() {
	int N, sum = 0;
	scanf("%d", &N);
	char getinput[N];
	scanf("%s", getinput);
	for (int i = 0; i < N; i++)
	{
		sum += getinput[i] - 48;
	}
	printf("%d", sum);
	return 0;
}
