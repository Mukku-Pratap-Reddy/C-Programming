/*
    Purpose : Write a C Program to print "Hello World"
    Author  : Pratap Reddy
*/


#include <stdio.h>
#include <conio.h>

int main()
{
    printf("Hello World");

    getch();

    return 0;
}

/*
    #include is used to include any files outside of our program
    stdio ==> Standard Input Output
    stdio.h file is included to write input or output functions
    like printf() and scanf()

    conio ==> Console Input Output
    conio.h file is included to write console or terminal related
    input output functions like getch()

    Every C program execution is started from main() function
    So, we must write main() in all C programs
    int is used before main() to specify the return type
    you will understand about it when you learn Functions concept in C

    printf ==> print formatted
    printf() is used to print text/numbers (output) to the screen (Console)
    In this program, we printed "Hello World" to the Output Screen (Console)

    when using printf(), We need to provide Double Quotes ""
    at the beginning and ending of the text we wish to print
    and also we need to provide Semi-colon ( ; ) at the end of printf()

    getch() ==> get character
    In general, we use getch() to hold the output screen without closing
    after displaying the output. Console will be waiting for us to enter
    any character as input. when we press any key, console will be closed

    return 0 is the return value of the main() function
    you will learn and understand about it in function programs

*/
