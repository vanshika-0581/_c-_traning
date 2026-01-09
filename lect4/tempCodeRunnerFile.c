#include<stdio.h>
int main(){
    int a=8;
    int b=10;
    scanf("%d %d",&a,b);
    if (a>b)
    {
      printf("%d is larger",a);
    }
    else if (b>a)
    {
        printf("%d is larger" ,b);
    }
    else{
    printf("equal");
    }
}