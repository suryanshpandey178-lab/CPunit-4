#include<stdio.h>
#define FILE_PATH
int main(){
  FILE *fp;
fp=fopen("file.txt","a");
fprintf(fp,"using path macro");
fclose(fp);
  return 0;}
