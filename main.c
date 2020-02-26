#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[]){
    char *input_buff = NULL;
    ssize_t nread = 0;
    size_t input_length = 0;

    while (true)
    {
        printf("sql >");
        ssize_t line_read = getline(&input_buff, &input_length, stdin);
        if (strcmp(input_buff, ".exit\n") == 0) {
            free(input_buff);
            exit(EXIT_SUCCESS);
        } else {
            fprintf(stderr, "==> Failing...command unrecognized..\n");
        }
    }
    free(input_buff);
}