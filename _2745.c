#include <stdio.h>
#include <string.h>
#include <math.h>
int main(void) {
	char n[100] = {0};
	int dig = 0,dec = 0;
	scanf("%s %d",n,&dig);
	for(int i=strlen(n)-1;i>=0;i--) {
		dec *= dig;
		if('0'<=n[i] && n[i]<='9')
			dec += n[i]-'0';
		else
			dec += n[i]-'A'+10;
	}
	printf("%d",dec);
	return 0;
}
