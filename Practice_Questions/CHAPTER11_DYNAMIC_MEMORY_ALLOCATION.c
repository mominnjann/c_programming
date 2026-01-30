//                      CHAPTER 11 – DYNAMIC MEMORY ALLOCATION
/*

CHAPTER 11 – PRACTICE SET 
1. Write a program to dynamically create an array of size 6 capable of storing 6 
integers. 
2. Use the array in problem 1 to store 6 integers entered by the user. 
3. Solve problem 1 using calloc(). 
4. Create an array dynamically capable of storing 5 integers. Now use realloc so 
that it can now store 10 integers. 
5. Create an array of multiplication table of 7 upto 10 (7 x 10 = 70). Use realloc to 
make it store 15 number (from 7 x 1 to 7 x 15). 
6. Attempt problem 4 using calloc().

*/ 

//___________________________________________________________________________________________________________

//1. Answer

/*

#include<stdio.h>
#include<stdlib.h>

int main() {
    int n = 6;
    int* ptr;
    ptr = (int*) malloc(n * sizeof(int));
    ptr[0] = 45;
    printf("%d", ptr[0]);

    return 0;
}

*/

//__________________________________________________________________________________________________________________

//2. Answer

/*

#include<stdio.h>
#include<stdlib.h>

int main() {
    int n = 6;
    int* ptr;
    ptr = (int*) malloc(n * sizeof(int));
    for (int i = 0; i < 6; i++)
    {
        printf("Enter Values\n ");
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        printf("%d", ptr[i]);
    }
    
    
    return 0;
}

*/

//_______________________________________________________________________________________________

//3. Answer

/*

#include<stdio.h>
#include<stdlib.h>

int main() {
    int* ptr;
    ptr = (int*) calloc(6, sizeof(int));
    ptr[0] = 45;
    printf("%d", ptr[0]);
    
    return 0;
}

*/

//_______________________________________________________________________________________________________

//4. Answer



