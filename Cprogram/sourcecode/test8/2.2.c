#include<stdio.h>
#include<stdlib.h>
int main(int argc, char* argv[])
{
	char ch;
	if(argc!=2){
		printf("Arguments error!\n");
		exit(-1);
	}
	if((freopen(argv[1],"r",stdin))==NULL){        /* fp 指向 filename */
		printf("Can't open %s file!\n",argv[1]);
		exit(-1);
	}
	while((ch=fgetc(stdin))!=EOF)//有误          /* 从filename中读字符 */
	   putchar(ch);
    fclose(stdin); /* 向显示器中写字符 */ /* 关闭filename */
    return 0;	
}
