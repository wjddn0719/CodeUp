#include <stdio.h>

int main(void){
    int a, b;
    scanf("%d %d", &a,&b);
    if(a%2==0)printf("짝수+");
    else printf("홀수+");
    if(b%2==0)printf("짝수=");
    else printf("홀수=");
    if((a+b)%2==0)printf("짝수");
    else printf("홀수");
    return 0;
    
}
