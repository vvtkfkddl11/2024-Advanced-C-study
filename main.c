#include "student.h"
#include "sort.h"
#include "utils.h"

int main(int argc, char* argv[]) { // [TODO] Fill in the parameters
    FILE *input, *output;
    char *filename;

    if (argc!=2) { // [TODO] Fill in the condition
        fprintf(stderr, "Command should be format like below\n");
        fprintf(stderr, "%s try/*_sort.in\n", argv[1]); // [TODO] Fill in the arguments
        exit(EXIT_FAILURE);
    }

    filename = strdup(argv[1]); // [TODO] Fill in the arguments
    input = fopen(filename, "r");
    if (input == NULL) {
        fprintf(stderr, "Input file error\n");
        exit(EXIT_FAILURE);
    }

    strcpy(strstr(filename, "in"), "out");
    output = fopen(filename, "w");
    if (output == NULL) {
        fprintf(stderr, "Output file error\n");
        exit(EXIT_FAILURE);
    }

    char line[MAX_BUFFER_SIZE];
    int length = countLines(input);
    int index = 0;
    Student *students = createStudents(length); // [TODO] Fill in the arguments

    while (fgets(line, MAX_BUFFER_SIZE, input) != NULL) {
        char name[MAX_BUFFER_SIZE];
        int id;

        sscanf(line, "%*s %s %*s %*s %*s %d", name, &id); // [TODO] Fill in the arguments
        appendStudent(); // [TODO] Fill in the arguments
    }

    SortBy sortBy = setSortBy(); // [TODO] Fill in the arguments
    switch (sortBy) {
    case NAME:
        quickSort(); // [TODO] Fill in the arguments
        printStudents(); // [TODO] Fill in the arguments
        break;
    
    case ID:
        quickSort(); // [TODO] Fill in the arguments
        printStudents(); // [TODO] Fill in the arguments
        break;

    default:
        exit(EXIT_FAILURE);
    }
    
    freeStudents(); // [TODO] Fill in the arguments
    free(filename);
    fclose(input);
    fclose(output);

    return 0;
}
