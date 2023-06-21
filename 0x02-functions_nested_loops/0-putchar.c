#include <unistd.h>

/*
 *
 *main prints _putchar
 *return 0
 */

int _putchar(char c) 
{
	return write(1, &c, 1);
}

int main() 
{
	const char* text = "_putchar\n";
	const int length = 9;

	for (int i = 0; i < length; i++) 
{
	_putchar(text[i]);
}
	return 0;
}
