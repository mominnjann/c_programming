// CHAPTER 1: VARIABLES, CONSTANTS & KEYWORDS 
//                                  Practice Set
/*
1. Write a C program to calculate area of a rectangle: 
a. Using hard coded inputs. 
b. Using inputs supplied by the user.

2. Calculate the area of a circle and modify the same program to calculate the 
volume of a cylinder given its radius and height.

3. Write a program to convert Celsius (Centigrade degrees temperature to 
Fahrenheit). 

4. Write a program to calculate simple interest for a set of values representing      
principal, number of years and rate of interest.
*/

//_______________________________________________________________________________________________________________

// 1. Answer

// #include<stdio.h>

// int main() {
//     int length, breadth;
//     int a = 10; //  Hardcoded Length
//     int b = 20; // Hardcoded Breadth
//     printf("Enter Length of the Rectangle: \n");
//     scanf("%d", &length);
//     printf("Enter Breadth of the Rectangle: \n");
//     scanf("%d", &breadth);
//     printf("Area of Rectangle with hardcoded values is %d \n", a*b );
//     printf("Area of Rectange with User Input is %d \n", length*breadth);
//     return 0;
// }

//2. Answer

// Area of Circle = pi*r*r
// Volume of Cylinder = pi*r*r*h

#include<stdio.h>

int main() {
    float pi = 3.14;
    int r_circle;
    int r_cylinder;
    int h;
    printf("Enter radius of Circle: ");
    scanf("%d", &r_circle);
    printf("Enter radius of Cylinder: ");
    scanf("%d", &r_cylinder);
    printf("Enter height of Cylinder: ");
    scanf("%d", &h);
    printf("Area of Circle is %.2f \n", pi*r_circle*r_circle);
    printf("Area of Cylinder is %.2f \n", pi*r_cylinder*r_cylinder*h);
    return 0;
}