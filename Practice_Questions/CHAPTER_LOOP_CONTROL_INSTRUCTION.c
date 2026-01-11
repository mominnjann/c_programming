//                          CHAPTER 4: LOOP CONTROL INSTRUCTION 
/*
CHAPTER 4 – PRACTICE SET 
1. Write a program to print multiplication table of a given number n. 
2. Write a program to print multiplication table of 10 in reversed order. 
3. A do while loop is executed: 
a. At least once. 
b. At least twice. 
c. At most once. 
4. What can be done using one type of loop can also be done using the other two 
types of loops – true or false? 
5. Write a program to sum first ten natural numbers using while loop. 
6. Write a program to implement program 5 using ‘for’ and ‘do-while’ loop. 
7. Write a program to calculate the sum of the numbers occurring in the 
multiplication table of 8. (consider 8 x 1 to 8 x 10). 
8. Write a program to calculate the factorial of a given number using a for loop. 
9. Repeat 8 using while loop. 
10. Write a program to check whether a given number is prime or not using loops. 
11. Implement 10 using other types of loops. 
*/

//_________________________________________________________________________________________________________________


//1. Answer

// #include<stdio.h>

// int main() {
//     int num;
//     printf("Enter the number for multiplication : ");
//     scanf("%d", &num);
//     for (int i = 1 ; i<=10 ; i++)
//     {
//         printf("%d x %d = %d\n", num, i, num*i);
//     }
//     return 0;
// }

//________________________________________________________________________________________________________________________

//2. Answer

// #include<stdio.h>

// int main() {
//     int num;
//     printf("Enter the number for multiplication : ");
//     scanf("%d", &num);
//     for (int i = 10 ; i>=1 ; i--)
//     {
//         printf("%d x %d = %d\n", num, i, num*i);
//     }
//     return 0;
// }

//________________________________________________________________________________________________________________________________

//3. Answer

//A do while loop is executed at least one time.

//____________________________________________________________________________________________________________________________________

//4. Answer

//True

//_____________________________________________________________________________________________________________________________________

//5. Answer

// #include<stdio.h>

// int main() {
//     int i = 1;
//     int sum = 0;
//     while (i<=10)
//     {
//         sum = sum + i;
//         i++;
//     }
//     printf("The sum of first ten natural number is %d", sum);
//     return 0;
// }

//_______________________________________________________________________________________________________________________________

//6. Answer

//For loop

// #include<stdio.h>

// int main() {
//     int sum = 0;
//     for (int i = 0; i<= 10;)
//     {
//         sum = sum + i;
//         i++;
//     }
//     printf("The sum of first 10 natural number is %d", sum);
//     return 0;
// }

// DO while loop

// #include<stdio.h>

// int main() {
//     int sum = 0;
//     int i = 0;
//     do{
//         sum = sum + i;
//         i++;
//     }while(i<=10);
//     printf("The sum of first ten natural number is %d", sum);
//     return 0;
// }

//______________________________________________________________________________________________________________________

//7. Answer

// #include<stdio.h>

// int main() {
//     int multiplication;
//     int num = 8;
//     int sum = 0;
//     for(int i = 0; i<=10; i++)
//     {
//         multiplication = num*i;
//         sum = sum + multiplication;
//     }
//     printf("Sum of 8 muliplication table is %d", sum);
//     return 0;
// }

//______________________________________________________________________________________________________________________

//8. Answer

// #include<stdio.h>

// int main() {
//     int n, factorial;
//     factorial = 1;
//     printf("Enter Number: ");
//     scanf("%d", &n);                                                                                                                                                              
//     for (int i = 1; i<=n; i++)
//     {
//         factorial = factorial*i;
//     }
//     printf("factorial of %d is %d", n, factorial);
//     return 0;
// }


//________________________________________________________________________________________________________________________________

//9. Answer

// #include<stdio.h>

// int main() {
//     int n, i, factorial;
//     factorial = 1;
//     i = 1;
//     printf("Enter Number: ");
//     scanf("%d", &n);
//     while (i<=n)
//     {
//         factorial = factorial*i;
//         i++;
//     }
//     printf("The Factorial of given number is %d", factorial);
//     return 0;
// }

//_______________________________________________________________________________________________________________________________________

//10. Answer

// #include<stdio.h>

// int main() {
//     int n, prime;
//     printf("Enter a Number : ");
//     scanf("%d", &n);
//     prime = 1;
//     if (n == 0 || n == 1){
//         prime = 0;
//     }
//     else{
//         for (int i = 2; i < n; i++)
//         {
//             if (n % i == 0 && n != 2)
//             {
//                 prime = 0;
//                 break;
//             }
//             else{
//                 prime = 1;
//             }
            
//         }
        
//     }
//     if(prime){
//         printf("Its Prime");
//     }
//     else{
//         printf("Its not prime");
//     }
//     return 0;
// }