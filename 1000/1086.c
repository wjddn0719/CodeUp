#include <stdio.h>

int main(){
    float w, h, b, sum=0;
    scanf("%f %f %f", &w, &h, &b);
    printf("%.2f MB", (w*h*b)/8/1024/1024);
}
