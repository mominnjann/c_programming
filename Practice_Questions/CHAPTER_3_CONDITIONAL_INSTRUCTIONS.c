//                            CHAPTER 3: CONDITIONAL INSTRUCTIONS 
/*
CHAPTER 3 – PRACTICE SET 
1. What will be the output of this program 
int a = 10; 
if (a = 11) 
printf("I am 11"); 
else  
printf("I am not 11"); 
2. Write a program to determine whether a student has passed or failed. To pass, a 
student requires a total of 40% and at least 33% in each subject. Assume there 
are three subjects and take the marks as input from the user. 
3. Calculate income tax paid by an employee to the government as per the slabs 
mentioned below: 
Income Slab                       
2.5 – 5.0L                               
5.0L - 10.0L                          
Above 10.0L                         
Tax  
5% 
20% 
30% 
Note that there is no tax below 2.5L. Take income amount as an input from the user. 
4. Write a program to find whether a year entered by the user is a leap year or not. 
Take year as an input from the user. 
5. Write a program to determine whether a character entered by the user is 
lowercase or not. 
6. Write a program to find greatest of four numbers entered by the user.
*/

//_____________________________________________________________________________________________________

//1. Answer
// I am not 11

//_____________________________________________________________________________________________________

//2. Answer

// #include<stdio.h>

// int main() {
//     float s1, s2 ,s3;
//     printf("Enter subject 1 maarks: ");
//     scanf("%f", &s1);
//     printf("Enter subject 2 maarks: ");
//     scanf("%f", &s2);
//     printf("Enter subject 3 maarks: ");
//     scanf("%f", &s3);
//     int total = (s1 + s2 + s3);
//     float percentage = total / 3.0;
//     if ( s1 > 33 && s2 > 33 && s3 > 33 && percentage > 40){
//         printf("Result : Passed\n");
//     }
//     else{
//         printf("Result : Failed\n");
//     }
//     return 0;
// }

//___________________________________________________________________________________________________________________

//3. Answer

// #include <stdio.h>

// int main() {
//     float income;
//     float tax1 = 0, tax2 = 0, tax3 = 0;

//     printf("Enter Your Income: ");
//     scanf("%f", &income);

//     if (income > 250000) {
//         if (income <= 500000) {
//             tax1 = (income - 250000) * 0.05;
//         } else {
//             tax1 = 250000 * 0.05;
//         }
//     }
//     if (income > 500000) {
//         if (income <= 1000000) {
//             tax2 = (income - 500000) * 0.20;
//         } else {
//             tax2 = 500000 * 0.20;
//         }
//     }
//     if (income > 1000000) {
//         tax3 = (income - 1000000) * 0.30;
//     }

//     float totalTax = tax1 + tax2 + tax3;

//     printf("Tax from slab1: %.2f\n", tax1);
//     printf("Tax from slab2: %.2f\n", tax2);
//     printf("Tax from slab3: %.2f\n", tax3);
//     printf("Total Tax: %.2f\n", totalTax);

//     return 0;
// }

//_____________________________________________________________________________________________________________________

//4. Answer

// #include<stdio.h>

// int main() {
//     int year;
//     printf("Enter Current Year : ");
//     scanf("%d", &year);
//     if ((year % 400 == 0) || year % 4 == 0 && year % 100 != 0){
//         printf("It's a leap year\n");
//     }
//     else{
//         printf("Not a leap year");
//     }
//     return 0;
// }

//______________________________________________________________________________________________________________________________

//5. Answer

// #include<stdio.h>

// int main() {
//     char ch;
//     printf("Enter your character : ");
//     scanf("%c", &ch);
//     if (ch >= 'a' && ch <= 'z'){
//         printf("Its a lowercase character\n");
//     }
//     else{
//         printf("It's not a lowcase character\n");
//     }
//     return 0;
// }

//______________________________________________________________________________________________________________________________

//6. Answer

// #include<stdio.h>

// int main() {
//     int a, b, c, d;
//     printf("Enter your four numbers number: ");
//     scanf("%d %d %d %d", &a, &b, &c, &d);
//     int greatest = a;
//     if (b > greatest){
//         greatest = b ;
//     }
//     if (c > greatest){
//         greatest = c;
//     }
//     if (d > greatest){
//         greatest = d;
//     }
//     printf("The greatest of all numbers is %d ", greatest);
//     return 0;
// }

//_______________________________________________________________________________________________________________________