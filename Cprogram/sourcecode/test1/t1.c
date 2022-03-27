#include<stdio.h>
#include<string.h>
char a[11]={};
int b;
int main()
{
  gets(a);
  if(strlen(a)==1&&a[0]=='0') printf("0");
    else 
    {
      if(a[0]=='-') {a[0]='\n';printf("-");}
      for(b=strlen(a)-1;b>=0;b--)
        if(a[b]!='0') break;
      for(;b>=0;b--) printf("%c",a[b]);
    }
  return 0;