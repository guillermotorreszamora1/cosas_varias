/*Copyright Guillermo Torres*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
  int len;
  int i;
  char c;
  char buffer[3000];
  while(scanf("%s",buffer)!=EOF){
    len = strlen(buffer);
    i=0;
    while(i<len){
      if(buffer[0]=='1'){/*ASCII > 100*/
        c = (buffer[i]-'0')*100+(buffer[i+1]-'0')*10+(buffer[i+2]-'0');
        i += 3;
      }else{
        c = (buffer[i]-'0')*10+(buffer[i+1]-'0');
        i += 2;
      }
      printf("%c",c);
    }
    printf("\n");
  }
  return 0;
}
