#include <stdio.h>
#include <string.h>

int main()
{
    char s1[30] = "Ritik";
    char s2[30] = "Ritik";
    char s3[30] = "Jain";
    char s4[30] = "Smart";

// if equal then 0;
// if s1 first letter is greater than s2 first letter acc to ASCII then 1 and so on.
// if s1 second letter is greater than s2 second letter acc to ASCII then -1 and so on. 


   int a= strcmp(s1, s2); 
    printf("%d\n", a);

   int b= strcmp(s1, s3); 
    printf("%d\n", b);

   int c= strcmp(s1, s4); 
    printf("%d\n", c);


    return 0;
}