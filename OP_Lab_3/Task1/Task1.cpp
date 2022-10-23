#include <stdio.h>
#include <cstdlib>

int main()
{
	system("color 2F");
	int x = 5, y = 6;
	printf("\n|%6d%d%d%d%d%-6d|\n", x, x, x, y, y, y);
	printf("|%d%d%d%11d%d%d|\n", x, x, x, y, y, y);
	printf("|%6d%d%d%d%d%-6d|\n", x, x, x, y, y, y);
	printf("|%d%d%d%11d%d%d|\n", x, x, x, y, y, y);
	return 0;
}

