swap(int *p1, int *p2)
{
	int *p;
	p = p1;
	p1 = p2;
	p2 = p;
}


main()
{
	int a, b;

	int *pointer_1, *pointer_2;

	scanf("%d,%d", &a, &b);

	pointer_1 = &a;

	pointer_2 = &b;

	if (a < b)
	{
		swap(pointer_1, pointer_2);
	}

	printf("\na = %d, b = %d\n",a,b);
	printf("\npointer_1 = %d, pointer_2 = %d\n", *pointer_1, *pointer_2);
}