//#include<stdio.h>

main()
{
	int *p, *p1, *p2, a, b;
	scanf("%d,%d", &a, &b);

	p1 = &a; p2 = &b;

	if (a < b)
	{
		p = p1;
		p1 = p2;
		p2 = p;
	}

	printf("\na = %d, b = %d\n", a, b);       // a, b not swap	
	printf("*p1 = %d, *p2 = %d\n", *p1, *p2); // pointer value swap
}
