#include<stdio.h>
#include<stdlib.h>
int main(){
    int a=0;
    printf("输入你想查看的年份\n");
    scanf("%d",&a);
    if(a%4==0&&a%100!=0||a%400==0){
        printf("%d是闰年\n",a);
    }
    else{
        printf("%d不是闰年\n",a);
    }
    system("pause");
    return 0;
}