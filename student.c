#include "student.h"

/* [TODO]
   Implement function createStudents
*/
Student *createStudents(int n) {
   Student *students = (Student *)malloc(sizeof(Student)*n);

   return students
}

/* [TODO]
   Implement function newStudent
*/
Student newStudent(char *name, int id);

/* [TODO]
   Implement function appendStudent
*/
void appendStudent(Student *students, int index, Student student){
   
}

void printStudents(FILE *output, Student *students, int length) {
  for (int i = 0; i < length; i++) {
    fprintf(output, "name: %s id: %d\n", students[i].name, students[i].id);
  }
}

/* [TODO]
   Implement function freeStudents
*/
void freeStudents(Student *students, int length);