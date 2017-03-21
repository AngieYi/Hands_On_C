/*
"Count and Say problem" Write a code to do following:
n String to print
0 1
1 1 1
2 2 1
3 1 2 1 1
...
Base case: n = 0 print "1"
for n = 1, look at previous string and write number of times a digit is seen and the digit itself.
In this case, digit 1 is seen 1 time in a row... so print "1 1"
for n = 2, digit 1 is seen two times in a row, so print "2 1"
for n = 3, digit 2 is seen 1 time and then digit 1 is seen 1 so print "1 2 1 1"
for n = 4 you will print "1 1 1 2 2 1"

Consider the numbers as integers for simplicity. e.g.
if previous string is "10 1" then the next will be "1 10 1 1" and the next one will be "1 1 1 10 2 1"
*/

char* countAndSay(int n)
{
	int i, j;
	int count;
	char *cur = (char *)malloc(1024 * 20 * sizeof(char));
	char *next = (char *)malloc(1024 * 20 * sizeof(char));
	cur[0] = '1';
	cur[1] = '\0';

	while (--n)
	{
		i = 0; 
		j = 0;
		while (cur[i] != '\0')
		{
			count = 1;
			while (cur[i] == cur[i + 1])
			{
				i++;
				count++;
			}
			next[j++] = count + '0';
			next[j++] = cur[i];
			i++;
		}
		next[j] = '\0';
		strcpy(cur, next);
	}

	return cur;
}

void main()
{
	//char *x = countAndSay(3);
	printf("x= %s", countAndSay(3));
}
