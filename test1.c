/*
Test ICP (Internet Computer) smart-contract.
REf : https://github.com/dfinity/examples/blob/master/c/reverse/reverse.c
*/


#include "stdio.h"
# include "string.h"

void reverse(char*, int);

/* Reverse a string in place. */
void reverse(char*s,int len) 
{
  char*t = s+len-1,c;
  while(s<t) 
  {
    c = *t;
    *t = *s;
    *s = c;
    s++;
    t--;
  }
}

int main(int argc, char** argv) 
{
    char t[10]; 
    char s[10];
    strcpy(t, "abcdedfg");
    strcpy(s,t);
    reverse(s, strlen(s));
    printf("reverse %s -> %s", t, s);
    return(0);
}