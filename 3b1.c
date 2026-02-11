//Program 3b: Program to Demonstrate Conditional Compilation
#include<stdio.h>
#define DEBUG   
int main(){
    #ifdef DEBUG
    printf("debug mode is on");
    #else
    printf("debug mode off");
    #endif
return 0;}
