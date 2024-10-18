#include <stdio.h>

int main(){
    int a;
    int b;
    char operator;
     printf("enter a operator (+,-,/,*):"  );
    scanf("%c",&operator);
    printf("enter the value of a\n");
    scanf("%d", &a);
    printf("enter the value of b\n");
    scanf("%d", &b);
   
     if (operator == '+') {
        printf("%d + %d = %d\n", a, b, a + b);
    } else if (operator == '-') {
        printf("%d - %d = %d\n", a, b, a - b);
    } else if (operator == '*') {
        printf("%d * %d = %d\n", a, b, a * b);
    } else if (operator == '/') {
        if (b = 0) {
            printf("%d / %d = %d\n", a, b, a / b);
        } else {
            printf(" Division by zero.\n");
        }
    } else {
        printf("Invalid operator.\n");
    }
   

    return 0;
}