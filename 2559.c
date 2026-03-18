#include <stdio.h>
int main(void) {
	int n,k,sum=0,max = 0;
	int deg[100000] = {0};
	scanf("%d %d",&n,&k);
	max = -100 * n;
	for(int i=0;i<n;i++) {
		scanf("%d",&deg[i]);
		sum += deg[i];
		
		if(i>=k)
			sum -= deg[i-k];
		if(sum>max && i>=k-1)
			max = sum;
	}
	printf("%d\n",max);
	return 0;
}