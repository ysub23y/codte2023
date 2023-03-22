#include <stdio.h>
int main() {
	int b, d;
	int L = 0, I = 0;
	for (int i = 0; i < 3; i++) {
		scanf("%d", &b);
		if (L == 0) L = b;
		if (L > b) L = b;

	}
	for (int i = 0; i < 2; i++) {
		scanf("%d", &d);
		if (I == 0) I = d;
		if (I > d) I = d;
	}
	printf("%d", L + I - 50);
	return 0;
}
