#include <stdio.h>

void f() {
	static int i;
	++i;
	printf("%d\n", i);
}


int main()
{
	char *a[2] = { "hello", "hi" };
	char b[2][6] = { "hello", "hi" };
	printf("%d\n", sizeof(a));    //8
	printf("%d\n", sizeof(b));    //12
	printf("%s\n", *(a + 1));		  //hi

	f();
	f();
	f();
	return 0;
}