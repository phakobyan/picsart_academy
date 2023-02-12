#include <stdio.h>
int main()
{
	char letter;
	scanf("%c", &letter);
	switch(letter)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'y':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
		case 'Y':
			printf("vowel letter \n ");
			break;
		default:
			printf("consonant letter \n");
			break;

	}
	return 0;
}
