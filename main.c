#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
int echange(char *num);
char *somme (char *num1, char *num2);
int main()
{
    int i=0,j=0,a=0;
    char *num1,*num2;
    num1=(char*)malloc(sizeof(char));
    num2=(char*)malloc(sizeof(char));
    printf("tapez le premier nombres:");
    while ((*(num1+i)=getchar())!='\n')
    {
        num1=(char*)realloc(num1,strlen(num1)+sizeof(char));
        i++;
    }
    printf("tapez le deuxiem nombres:");
    while ((*(num2+j)=getchar())!='\n')
    {
        num2=(char*)realloc(num2,strlen(num2)+sizeof(char));
        j++;
    }
    num1[i]='\0';num2[j]='\0';strrev(num1);strrev(num2);
        printf("%s",strrev(somme(num1,num2)));
}
int echange(char *num)
{
    char *tmp1=(char*)calloc(2,sizeof(char));
    int t;
    strncpy(tmp1,num,1);
    t=atoi(tmp1);
    return t;
}
char *somme(char  *num1,char *num2)
{
    int a,b,c=0,g,i=0,d,j;
    if (strlen(num1)<=strlen(num2))
        g=strlen(num2);
    else g=strlen(num1);
    int *sum=(int*)malloc((g+1)*sizeof(int));
      char *sumc=(int*)malloc((g+1)*sizeof(char));
    while (i<=g)
    {
        j=i;a=0;b=0;
        if ((i+1)<=strlen(num1))
            a=echange(num1+i);
        if ((j+1)<=strlen(num2))
            b=echange(num2+j);
        if ((a+b+c)>10)
        {
            d=((a+b+c)%10);
            sum[i]=d;c=1;
        }
        else if ((a+b+c)<10)
        {
            sum[i]=(a+b+c);c=0;
        }
        if ((a+b+c)==10)
        {
            sum[i]=0;c=1;
        }
        itoa(*(sum+i),sumc+i,10);
        i++;

    }
    return sumc;
}
