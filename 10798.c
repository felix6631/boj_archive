#include <stdio.h>
#include <string.h>
int main(void) {
  char board[5][22] = {0,};
  memset(board,0,sizeof(char)*5*22);
  for(int i=0;i<5;i++)
    scanf("%s",board[i]);
  for(int i=0;i<20;i++) {
    for(int j=0;j<5;j++) {
      if(board[j][i] != 0)
        printf("%c",board[j][i]);
    }
  }
}
