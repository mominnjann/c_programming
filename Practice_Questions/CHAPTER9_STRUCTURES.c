//                  Chapter 9 - STRUCTURES

/*

CHAPTER 9 – PRACTICE SET 
1. Create a two-dimensional vector using structures in C. 
2. Write a function ‘sumVector’ which returns the sum of two vectors passed to it. 
The vectors must be two–dimensional. 
3. Twenty integers are to be stored in memory. What will you prefer- Array or 
structure? 
4. Write a program to illustrate the use of arrow operator → in C. 
5. Write a program with a structure representing a complex number. 
6. Create an array of 5 complex numbers created in Problem 5 and display them 
with the help of a display function. The values must be taken as an input from 
the user. 
7. Write problem 5’s structure using ‘typedef’ keywords. 
8. Create a structure representing a bank account of a customer. What fields did 
you use and why? 
9. Write a structure capable of storing date. Write a function to compare those 
dates. 
10. Solve problem 9 for time using ‘typedef’ keyword.

*/

//________________________________________________________________________________________________________________

//1. Answer


/*

struct vector{
    int i;
    int j;
    
};

#include<stdio.h>

int main() {
    struct vector v = {1,2};
    printf("The vector of two dimensions are %di + %dj", v.i, v.j);
    return 0;
}

*/

//_________________________________________________________________________________________________

//2. Answer

/*
#include<stdio.h>

struct vector{
    int i;
    int j;
    
};

struct vector sumVector(struct vector v1, struct vector v2){
    struct vector v3 = {v1.i + v2.i, v1.j + v2.j};
    return v3;
};


int main() {
    struct vector v1 = {1, 2};
    struct vector v2 = {3, 5};
    struct vector v3 = sumVector(v1,v2);
    printf("The sum of the two dimension vector is %di + %dj", v3.i, v3.j);
    return 0;
}

*/

//____________________________________________________________________________________________________

//3. Answer

//Array

//_____________________________________________________________________________________________________

//4. Answer

/*

#include<stdio.h>

typedef struct employee{
    int salary;
    float score;
}Employee;
int main() {
    Employee e1;
    Employee* ptr1 = &e1;
    ptr1->salary = 56;
    printf("The value of the salary is %d", ptr1->salary);
    return 0;
}

*/

//________________________________________________________________________________________________________

//5. Answer

/*

#include<stdio.h>

typedef struct c{
    int real;
    int imaginary;
}Complex;
int main() {
    Complex c = {2, 4};
    printf("The value of complex number is %d + i%d", c.real, c.imaginary);
    
    return 0;
}

*/

//__________________________________________________________________________________________________________

//6.Answer

/*

#include<stdio.h>

typedef struct c{
    int real;
    int imaginary;
}Complex;

void display(Complex c){
    printf("The value of complex number is %d + i%d\n", c.real, c.imaginary);
}
int main() {
    Complex c[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter real part\n");
        scanf("%d", &c[i].real);
        printf("Enter imagianry part\n");
        scanf("%d", &c[i].imaginary);
        display(c[i]);
    }
    return 0;
}

*/

//_____________________________________________________________________________________________________________________

//8. Answer

/*
#include<stdio.h>
struct bankacc{
    int accNo;
    char name[20];
    char ifsc[12];
};
int main() {
    
return 0;
}
*/

//_____________________________________________________________________________________________________________________________