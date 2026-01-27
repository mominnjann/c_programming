//                                  CHAPTER 8 – STRINGS
/*
CHAPTER 8 – PRACTICE SET 
1. Which of the following is used to appropriately read a multi-word string. 
1. gets() 
2. puts() 
3. printf() 
4. scanf() 
2. Write a program to take string as an input from the user using %c and %s confirm 
that the strings are equal. 
3. Write your own version of strlen function from <string.h> 
4. Write a function slice() to slice a string. It should change the original string such 
that it is now the sliced string. Take ‘m’ and ‘n’ as the start and ending position 
for slice. 
5. Write your own version of strcpy function from <string.h> 
6. Write a program to encrypt a string by adding 1 to the ascii value of its 
characters. 
7. Write a program to decrypt the string encrypted using encrypt function in 
problem 6. 
8. Write a program to count the occurrence of a given character in a string. 
9. Write a program to check whether a given character is present in a string or not. 
*/

//____________________________________________________________________________________________________________________

//1. Answer

//gets()

//______________________________________________________________________________________________________________________

//2. Answer

/*

With Array

#include<stdio.h>

int main() {
    char str[6];
    scanf("%s", str);
    printf("%s", str);
    return 0;
}


With Char

#include<stdio.h>

int main() {
    char str[6];
    for (int i = 0; i < 5; i++)
    {
        scanf("%c", &str[i]);
        fflush(stdin);
    }
    str[5] = '\0';
    printf("%s", str);
    
    return 0;
}

*/

// ___________________________________________________________________________________________________________________________

//3. Answer

/*

#include<stdio.h>

int strlen(char str[]){
    int i=0 , count;
    int c = str[i]; 
    while (c!= '\0')
    {
        c = str[i];
        i++;
    }
    count = i - 1 ;
    return count;
}
int main() {
    char name[] = "Momin Jan";
    printf("%d", strlen(name));
    
    return 0;
}

*/

//_____________________________________________________________________________________________________

//4. Answer

/*

#include<stdio.h>

char* slice( char str[],int m ,int  n){
    int i = 0, count;
    char *ptr1 = &str[m];
    char *ptr2 = &str[n];
    str = ptr1;
    str[n] = '\0';
    return str;
}
int main() {
    char name[] = "Momin jan";
    printf("%s", slice(name, 0, 6));
    return 0;
}

*/

//__________________________________________________________________________________________________

//6.    Answer

/*

#include<stdio.h>
#include<string.h>

int main() {
    char str[] = "Momin";
    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = str[i] + 1;
    }
    
    printf("%s", str);
    
    return 0;
}

*/

//____________________________________________________________________________________________

