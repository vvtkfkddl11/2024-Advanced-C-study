#pragma once

#include <string.h>
#include "student.h"
#include "utils.h"

int compareByName(Student a, Student b);

int compareById(Student a, Student b);

void quickSort(Student *students, int low, int high, int (*compare)(Student, Student));