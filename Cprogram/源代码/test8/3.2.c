#include<stdio.h>
int main()
{
    FILE *fp;
    float a[10], b[10];
    unsigned char c[4];
    fp=fopen("d:\\float.dat","wb+");
    for (int i = 0; i < 10;i++)
        scanf("%f", &a[i]);
    for (int i = 0; i < 10;i++)
        fwrite(&a[i],sizeof(float),1,fp);
    rewind(fp);
    for (int i = 0; i < 10;i++)
        fread(&b[i], sizeof(float), 1, fp);
    for (int i = 0; i < 10;i++)
        printf("%f ", b[i]);
    printf("\n");
    rewind(fp);
    for (int i = 0; i < 4;i++)
        fread(&c[i], sizeof(char), 1, fp);
    for (int i = 0; i < 4;i++)
        printf("%x ", c[i]);
    printf("\n");
    fclose(fp);
    unsigned char *p;
    p = (unsigned char *)&a[0];
    for (int i = 0; i < 4;i++,p++)
        printf("%x ", *p);
}