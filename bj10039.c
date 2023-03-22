#include <stdio.h>
int main(void) 
{
	int sc;
	int sum = 0;
	for (int i = 0; i < 5; i++ )
	{
		scanf_s("%d", &sc);
		 if (sc < 40)
			sum += 40;
		 else sum += sc;
	}

	printf("%d", sum / 5);

	return 0;
}