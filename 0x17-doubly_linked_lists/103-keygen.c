#include <stdio.h>
#include <string.h>
/**
 * keygen5 - generates key
 * @username: name
 */
void keygen5(char *username) 
{
	int i;
	char key[8];
	for (i = 0; i < strlen(username); i++) 
	{
		key[i] = username[i] ^ 0x10;
	}
	printf("%s\n", key);
}
/**
 * main - Entry point
 * @argc: nums
 * @argv: chars
 *
 * Return: 0 success
 */
int main(int argc, char *argv)
{
	if (argc < 0)
		return (0);
	keygen5(argv);
	return (0);
}
	
