#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/*
Prompts the user for a program to run via the command line.
Reads in that line (using fgets) and parses it to be used by one of the exec functions.
Runs the command using exec
You do not need to fork off a separate process and wait, the purpose of this assignment is only to parse a single line of input and run a program once.
*/

void execString(char toExec[]) {

    char *arg = toExec;
    char * command[strlen(toExec)];

    int i = 0;
    while (arg) {
        command[i] = strsep(&arg, " ");
        printf("%s\n", command[i]);
        i++;
    }
    command[i] = 0;
    execvp(command[0], command);
}

int main() {
    //max input length for mac terminal.app
    char input[262144];
    
    printf("wyd fam: ");
    fgets(input, 262144, stdin);

    char filteredInput[262144];
    for (int i = 0 ; i < strlen(input) - 1 ; i++) {
        
    }

    
    printf("a%sb", input);
    //execString(input);

    return 0;
}
