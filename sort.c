#include "sort.h"

/* [TODO]
   Implement function compareByName
*/
int compareByName(Student a, Student b){
   return strcmp(a.name, b.name);
   // return 0;
}


/* [TODO]
   Implement function compareById
*/
int compareById(Student a, Student b) {
   if (a.id < b.id){
      return -1;
   }
   if (a.id > b.id){
      return 1;
   }
   return 0;
}


/* [TODO]
   Implement function quickSort
*/
void quickSort(Student *students, int start, int end, int (*compare)(Student, Student)) {
    if (start >= end) return;

    int key = start;
    int i = start + 1, j = end;

    while (i <= j) {
        while (i <= end && compare(students[i], students[key]) <= 0) i++;
        while (j > start && compare(students[j], students[key]) >= 0) j--;

        if (i > j) swap(&students[key], &students[j]); 
        else swap(&students[i], &students[j]);
    }

    quickSort(students, start, j - 1, compare); 
    quickSort(students, j + 1, end, compare);
}