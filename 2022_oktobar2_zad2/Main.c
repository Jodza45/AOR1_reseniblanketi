#include <stdio.h>
#include <string.h>


extern int transformisi(char s[]);

int main() {
		
	char s[100];
	scanf("%s", s);
	int x = transformisi(s);
	printf("%s", s);

	return 0;
}
