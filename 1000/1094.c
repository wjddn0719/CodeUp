#include <stdio.h>

int main(){
    int n, i, arr[10001]={0,};
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        scanf("%d", &arr[i]);
    }
    for(i=n; i>=1; i--){
        printf("%d ", arr[i]);
    }
    return 0;
}
