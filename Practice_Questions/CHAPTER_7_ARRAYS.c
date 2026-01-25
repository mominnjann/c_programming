//                                  CHAPTER 7 – ARRAYS 
/*
CHAPTER 7 – PRACTICE SET 
1. Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points 
to the third element where ptr is a pointer pointing to the first element of the 
array. 
2. If S[3] is a 1-D array of integers then *(S+3) refers to the third element: 
(i) 
True. 
(ii) 
(iii) 
False. 
Depends. 
3. Write a program to create an array of 10 integers and store multiplication table of 
5 in it. 
4. Repeat problem 3 for a general input provided by the user using scanf. 
5. Write a program containing a function which reverses the array passed to it. 
6. Write a program containing functions which counts the number of positive 
integers in an array. 
7. Create an array of size 3 x 10 containing multiplication tables of the numbers 2,7 
and 9 respectively. 
8. Repeat problem 7 for a custom input given by the user. 
9. Create a three–dimensional array and print the address of its elements in 
increasing order.
*/

//_________________________________________________________________________________________________________________


//1. Answer

// #include<stdio.h>

// int main() {
//     int arrays[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int* ptr = arrays;
//     printf("Ther value at address %u is %d ", ptr+2, *(ptr+2));
//     return 0;
// }

//__________________________________________________________________________________________________________________________

//2. Answer

//False

//___________________________________________________________________________________________________________________________________

//3. Answer

// #include<stdio.h>

// int main() {
//     int arr[10];
//     for (int i = 0; i < 10; i++)       
//     {
//         arr[i] = 5 * (i+1);
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         printf("The value of 5 x %d = %d\n", i+1 , arr[i]);
//     }
    
        
//     return 0;
// }

//___________________________________________________________________________________________________________________________________

//4. Answer

// #include<stdio.h>

// int main() {
//     int arr[10], n;
//     printf("Enter the value of n: ");
//     scanf("%d", &n);
//     for (int i = 0; i < 10; i++)       
//     {
//         arr[i] = n * (i+1);
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         printf("The value of %d x %d = %d\n", n ,  i+1 , arr[i]);
//     }
    
        
//     return 0;
// }

//___________________________________________________________________________________________________________________________________

// 5. Answer

/*
#include<stdio.h>

int printArray(int a[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    
}

void reverse(int array[], int n){
    int temp;
    for (int i = 0; i < n/2; i++)
    {
        temp = array[i];
        array[i] = array[n-i-1];
        array[n-i-1] = temp;

    }
    
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    printArray(arr, 6);
    reverse(arr, 6);
    printArray(arr, 6);
    return 0;
}
*/

//______________________________________________________________________________________________________________________________

//6. Answer

/*

#include<stdio.h>

int count (int a[], int n){
    int no_of_positive = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i]>0)
        {
            no_of_positive++;
        }
        
    }
    return no_of_positive;
}
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, -7, 8, 9, 10};
    printf("The number of positive integers is %d ", count(arr, 10));
    return 0;
}

*/

//________________________________________________________________________________________

