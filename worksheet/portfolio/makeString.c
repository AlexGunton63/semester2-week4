
/*
Name: Alex Gunton
Student ID: kbzz0907
*/

#include <stdio.h>
#include <string.h>

int main( int argc, char **argv ) {

    // define appropriate data to hold your answer
    char outputStr[200] = "";
    // process the command-line data using appropriate string functions
    for(int i = 1; i < argc; i++)
    {
        strcat(outputStr,argv[i]);
        strcat(outputStr, "-");
    }
    printf("%s\n",outputStr); // use only this single print statement in your submitted code

    return 0;
}