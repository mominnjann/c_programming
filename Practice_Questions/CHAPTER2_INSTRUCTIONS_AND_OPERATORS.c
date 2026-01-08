// CHAPTER 2: INSTRUCTIONS AND OPERATORS 

// CHAPTER 2 – PRACTICE SET 
// 1. Which of the following is invalid in C? 
// a. int a=1; int b = a; 
// b. int v = 3*3; 
// c. char dt = ‘21 dec 2020’; 
// 2. What data type will 3.0/8 – 2 return? 
// 3. Write a program to check whether a number is divisible by 97 or not. 
// 4. Explain step by step evaluation of 3*x/y – z+k, where x=2, y=3, z=3, k=1 
// 5. 3.0 + 1 will be: 
// a. Integer. 
// b. Floating point number. 
// c. Character.

//__________________________________________________________________________________________________________

// 1. Answer

// c part is wrong a char contains only one value.

//2. Answer

// It will return float value cause float & int gives float.

//_____________________________________________________________________________________________________________

//3. Answer

// #include<stdio.h>

// int main() {
//     int num;
//     printf("Enter the Given Number : ");
//     scanf("%d", &num);
//     if (num % 97 == 0){
//         printf("Number is divisible");
//     }
//     else{
//         printf("Not Divsible");
//     }
//     return 0;
// }

//_________________________________________________________________________________________________________________

//4. Answer
/*
3 * x / y - z + k
3x / y - z + k
3*2 / 3 - 3 + 1
6 / 3 - 3 + 1
2 - 3 + 1
-1 + 1
0 --answer
*/

//___________________________________________________________________________________________________________________

//5. Answer

// It will be floating point number causefloat & int give float as output.

//___________________________________________________________________________________________________________________