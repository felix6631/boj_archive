#include <stdio.h>
#include <string.h>
#include <ctype.h>
int getValue(const char c) {
	if (isdigit(c)) return c^0x30;
	else if (isupper(c)) return (c^0x40)+9;
	return 0;
}

int main(void) {

	char n[100] = {0};
	int dig = 0, sum = 0;
	scanf("%s %d",n,&dig);
	for(int i=0; i<strlen(n); i++) {
		sum *= dig;
		sum += getValue(n[i]);
	}
	printf("%d",sum);
	puts("");
	return 0;
}
