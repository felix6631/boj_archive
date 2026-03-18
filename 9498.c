#include <stdio.h>

int main(void) {
    int a;
    char b;
    scanf("%d",&a);
    switch(a/10) {
        case 10: case 9:
            b = 'A';
            break;
        case 8:
            b = 'B';
            break;
        case 7:
            b = 'C';
            break;
        case 6:
            b = 'D';
            break;
        default:
            b = 'F';
    }
    printf("%c\n",b);
    return 0;
}