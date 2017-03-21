
main()
{
	int x = 5;
	int *p = &x;
	int **q = &p;

	printf("*p = %d, **q = %d\n", *p, **q); // pointer value swap
}