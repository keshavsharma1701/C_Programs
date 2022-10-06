// There is all the syntax of C language basic

//Header files
#include<stdio.h>
/* # is preprocessor directives
include is a keyword
stdio is name of header file
.h is header file extension */

int main()
{
    //main function is used for start execution 
    //Builtin/Basic datatypes
    //char, int ,float, double
    // c89 allow bool datatype
    int a1;
    char a2;
    float a3;
    double a4;
    bool a5;
    //ENUMERATED TYPE- data are internally of int type and operates on a select subset
    //void has no type
    //Derived datatype
    // array, structure(struct & union), pointer, function, string
    //Type modifers - short, long, signed, unsigned

    //variable is a name given to a storage area 
    //initialising- given value at the time of declaration
    //assigning- putting value after declaration

    //literals 
    int b1=212;         //decimal
    int b2=0123;        //binary
    int b3=0b1011;      //octal
    int b4=0xF2;        //hexadecimal
    float b5= 3.14;     //floating point
    char b6='x';        //character literals
    char* b7="keshav";  //string literals

    //operators
    //arthematic, relational, logical, bitwise, assignment, miscellaneous
    //arity of operator - unirary, binary, ternary

    //Expression has a value .....literals, variables, function call(return) is an expression
    //statement is a command for a specific action ....it has no value
    // ; is a null statement
    // expression terminated by a ; is a statement ....group of statement in a {} or block is a compound statement

    //CONTROL CONSTRUCT
    //selection - if,if-else, switch
    //labeled - case, default
    //iteration - for, while, do-while
    //jump - goto, continue, break, return

    //Two types of addressing
    // indexed and referential(pointers)

    //Containers
    //Arrays- same type, indexed
    int a[10];
    
    return 0;
}