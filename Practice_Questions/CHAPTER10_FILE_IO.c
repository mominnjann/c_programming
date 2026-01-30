//                                                      Chapter 10 - File I/O

//_______________________________________________________________________________________________________________________________

/*

CHAPTER 10 – PRACTICE SET 
1. Write a program to read three integers from a file. 
2. Write a program to generate multiplication table of a given number in text 
format. Make sure that the file is readable and well formatted. 
3. Write a program to read a text file character by character and write its content 
twice in separate file. 
4. Take name and salary of two employees as input from the user and write them to 
a text file in the following format: 
i. Name1, 3300 
ii. Name2, 7700 
5. Write a program to modify a file containing an integer to double its value.

*/

//_________________________________________________________________________________________________________________________________

//1. Answer

/*

#include<stdio.h>

int main() {
    FILE *fptr;
    int num1, num2, num3;
    fptr = fopen("abc.txt", "r");
    fscanf(fptr, "%d %d %d", &num1, &num2, &num3);
    printf("The values are %d %d %d ", num1, num2, num3);
    fclose(fptr);
    
    return 0;
}

*/

//______________________________________________________________________________________________

//2. Answer

#include <stdio.h>

void multi(int n, FILE *ptr) {
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);              // print to console
        fprintf(ptr, "%d x %d = %d\n", n, i, n * i);         // write to file
    }
}

int main() {
    FILE *ptr;
    ptr = fopen("abc.txt", "w");   // open file in write mode
    if (ptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    int n;
    printf("Enter the Number: ");
    scanf("%d", &n);

    multi(n, ptr);   // pass file pointer to function

    fclose(ptr);     // close the file
    return 0;
}




