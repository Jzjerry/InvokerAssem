#include <stdio.h>
#include <stdlib.h>
#include <io.h>
#include <string.h>

int main(int argc, char* argv[])
{
	if (argc > 2)
	{
		printf("Too many files to compile.\n");
	}
	else if (argc < 2)
	{
		printf("Too few files to compile.\n");
	}
	else
	{
		if (_access(argv[1], 4) == -1)
		{
			printf("Can't open file %s\n", argv[1]);
		}
		else
		{
			int len = strlen(argv[1]);
			if (len < 7 || (argv[1][len - 1] != 'l' || argv[1][len - 2] != 'l'
				|| argv[1][len - 3] != 'o' || argv[1][len - 4] != 'r' ||
				argv[1][len - 5] != 'c' || argv[1][len - 6] != 's' || argv[1][len - 7] != '.'))
			{
				printf("Can't open file %s\n", argv[1]);
			}
			else
			{
				printf("TODO\n");
			}
		}
	}

	system("pause");
	return 0;
}