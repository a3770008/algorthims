#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main( )//123456
{
	int a[5],count = 5; //123
	int i = 0, j = 0;

	while (1)
	{
		if (i == 5)
			break;
		printf("input num : ");
		scanf("%d", &a[i]);
		i++;
	}

	for (i = 0; i < 5; i++)
		printf("%d\n", a[i]);

	printf("take numbr : ");
	scanf("%d", &j);


	for (i = 0; i < count; i++)
	{ 
		if(i >= count-j)
			printf("%d\n", a[i]);
	}

	system("pause");
	return 0;
}