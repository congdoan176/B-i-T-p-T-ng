#include <stdio.h>
int main(){
    int a, b, c;
    scanf("%d%d", &a, &b, c);
    printf("%d\n",plus(a, b));
    printf("%d\n",minus(a, b));
    printf("%d\n",multiply(a, b));
    printf("%d",divi(a, b));
    return 0;
}
// phép tính cộng
int plus(int a, int b){
    int c = a + b;
    return a + b;
}
// Phép tính Trừ
int minus(int a, int b){
    int c = a- b;
    return a - b;
}
// phép tính nhân
int multiply(int a, int b){
    int c = a *b;
    return a * b;
}
// Phép chia
int divi(int a, int b){
    int c = a / b;
    return a / b;
}