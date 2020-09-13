#include<stdio.h>
void rectangle(int w, int l)
{
	int x, y;
	if (w > 0 && l > 0)
	{
		int rtgarea = w * l;
		printf("Rectangle area is %d\n", rtgarea);
		for (x = 1; x <= l; x++)
		{
			for (y = 1; y <= w; y++)
			{
				if (x == 1 || x == l)
				{
					printf("* ");
				}
				else if (y == 1 || y == w)
				{
					printf("* ");
				}
				else
				{
					printf("  ");
				}
			}
			printf("\n");
		}
	}
	else 
	{
		printf("error");
	}
}
int main()
{
	int a[2];
	int *width, *longs, w, l;
	width = &w;
	longs = &l;
	char rtg[2][10] = { "Width","Height" };
	int b;
	for (b = 0; b < 2; b++)
	{
		printf("%s is ", rtg[b]);
		scanf_s("%d", &a[b]);
	}
	rectangle(a[0], a[1]);
}