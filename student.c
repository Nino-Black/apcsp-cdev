#include <stdio.h>



// student structure
//struct Student...
typedef struct {
char first name[100];
char last name[100];
int age[50];
int student id[100];
} Student;

void printStudent(struct Student* student)
{
  printf("----- student -----");
  printf(" Student: %s %s\n", student-first name, student->last name);
  printf(" age: %s\n", student->age);
  printf(" id: %d\n", student->student id);
}


void printAllStudents(struct Student students[], int num)
{
  for (i = 0; i < strlen(student); i++) {
   
}


int main()
{

  // an array of students
  //xxx students;
char students[100];

  int numStudents = 0;
  while (1)
  {
    char c;
    printf("\nEnter a to add, p to print, q to quit:");
    fgets(input, 256, stdin);
    if (sscanf(input, "%c", &c) != 1) continue;
    if (c == 'q') 
    {
      break;
    }
    else if (c == 'p')
    {
      // print all students
      printAllStudents(students, numStudents);
      continue;
    }
    else if (c == 'a')
    {
      // enter a new student
      printStudent(student);
      numStudents++;
    }
  }
  
  printf("\nGoodbye!\n");
}
