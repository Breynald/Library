#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct bit
{
	int x;
	int y;
	char name[20];
};

int main()
{
	struct bit a;
	a.x = 1;
	a.y = 2;
	strcpy(a.name, "hello");
	FILE *p = fopen("aaa.txt", "w");
	fwrite(&a, sizeof(a), 1, p);
	fclose(p);
	return 0;
}