#include <stdio.h>
#define swap(x,y) {int temp = x; x = y; y = temp;}

void sort(int arr[],int l, int r) {
    if (l>=r) return;
    int pivot = arr[l];
    int i = l+1, j = r;
    for(;i<pivot;) {
        for(;j>pivot;) {
            if(i<=j) swap(arr[i],arr[j]);
        }
    }
    arr[l] = arr[i];
    arr[i] = pivot;

    sort()
}