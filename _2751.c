#include <stdio.h>
#define swap(x,y) {int temp = x; x = y; y = temp;}
int n;
void print(int arr[], int l, int r) {
    for(int i=0;i<n;i++) {
        if(i==l && i==r) printf("L R");
        else if(i==l) printf(" L ");
        else if(i==r) printf(" R ");
        else printf("   ");
    }
    puts("");

    for(int i=0;i<n;i++)
        printf("%3d",arr[i]);
    puts("");
    return;
}

void sort(int arr[],int l, int r) {
    if (l>=r) return;
    printf("l,r : %d %d\n",l,r);
    int pivot = arr[l];
    int i = l+1, j = r;
    
    for(;i<j;) {
        for(;i<=j && arr[j]>pivot;) j--;
        if(i<=j && arr[i]<pivot) {
            printf("swapped %d and %d\n",i,j);
            swap(arr[i],arr[j]);
            i++;
        }
        printf("%d %d\n",i,j);
        print(arr,i,j);
    }
    
    arr[l] = arr[j];
    arr[j] = pivot;

    print(arr,l,r);

    sort(arr,l,j-1);
    sort(arr,j+1,r);
}

int main(void) {
    scanf("%d",&n);
    int arr[50000] = {0,};
    for(int i=0;i<n;i++)
        scanf("%d",arr+i);

    sort(arr,0,n-1);

    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    puts("");
    return 0;
}