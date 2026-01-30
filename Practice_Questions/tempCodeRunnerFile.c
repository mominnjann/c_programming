#include<stdio.h>

int multi(int n){
    int multiplication;
    for (int i = 0; i < 10; i++)
    {
        multiplication = printf("%d x %d = %d", n, i, n*i);
    }
    return multiplication;
}

int main() {
    FILE *ptr;
    ptr = fopen("abc.txt", "w");
    int n;
    printf("Enter the Number: ");
    scanf("%d", &n);
    multi(n);
    return 0;
}