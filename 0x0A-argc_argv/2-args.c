#include <stdio.h>
/** main - Prints the arguement it recievs
 * @argc: Arguement counter
 * @argv: Arguement vector
 * Return: An integer
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
