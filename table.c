#include <stdio.h>

int main() {
    int num; //variable declaration 
    int i;
    printf("give a number ");
    scanf("%d", &num); // taking input from user 
    for(i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
