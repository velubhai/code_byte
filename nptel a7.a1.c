#include<stdio.h>

#include<stdlib.h>

struct course{
    int code;
    int credits;
};

typedef struct course course;

course science = {1001, 10};
course maths = {1002, 5};
course literature = {1003, 5};
course philosophy = {1004, 1};
  
struct student{
  char name[20];
  course courses[3];
  int grades[3];
};

typedef struct student student;

float calculate_gpa(student s){
    
    int i;
    float cg = 0, c = 0;
    for(i = 0; i < 3; i++){
    	cg += (s.courses[i].credits) * (s.grades[i]);
    	c += (s.courses[i].credits);
	}
	return cg/c;
}

void print(student * s, int n) {
  int i;
  for (i = 0; i < n; i++) {
    printf("%s %.1f\n", s[i].name, calculate_gpa(s[i]));
  }
}


int main() {
  int i,j, n;
  scanf("%d", & n);
  student *student_info = (student * ) malloc(sizeof(student) * n);
  for (i = 0; i < n; i++) {
    scanf("%s", student_info[i].name);
    for(j = 0 ; j < 3; j ++){
        int coursecode;
        scanf("%d", &coursecode);
        switch(coursecode){
            case 1001:
            student_info[i].courses[j] = science;
            break;
            case 1002:
            student_info[i].courses[j] = maths;
            break;
            case 1003:
            student_info[i].courses[j] = literature;
            break;
            case 1004:
            student_info[i].courses[j] = philosophy;
            break;
        }
        scanf("%d", &student_info[i].grades[j]);
    }
  }
  print(student_info, n);
  return 0;
}
/*
CGPA calculation

You are the new tech administrator of a college. The college offers four courses listed below.

Course name       Course code          Credits
Science                1001                       10
Maths                   1002                       5
Literature              1003                       5
Philosophy            1004                      1
 
Each student has to take exactly three courses and she gets a grade from (0 - 10)
on the course, depending on her performance.

The CGPA of a student is calculated as  cgpa=?3i=1creditsi*gradei?3i=1creditsi
.
That is for each course the student took, you multiply the grade obtained with the credits of the course.
Sum this value over each course, and divide it by the total credits of all courses the student took.

The previous administrator wrote an incomplete C program for a CGPA calculator, using structures.

Complete the C code for the program, by writing the code for the function 
float calculate_gpa(student s);

This function takes as an input the struct student variable of a student s, which contains all the information
about the courses the student s took and her grades in the courses.
You have to return the total cgpa of the student as the output.

Input
The first line contains the number of students n.
The next n lines contains the information on the students in the following order:
Name  CourseCode1 Marks1 CourseCode2 Marks2 CourseCode3 Marks3

Output
The names and CGPAs (to a single decimal point) of students, line by line in the following format:
Name CGPA

Note: Ignore the Passed after ignoring Presentation Error comment.

Example 

Input1

1
Akhil 1001 9 1002 10 1003 8


Output1
Akhil 9.0


Explanation

Akhil has scored
9/10 in 1001 (10 Credits)
10/10 in 1002 (5 Credits)
8/10 in 1003 (5 Credits)

So his total cgpa is  9*10+10*5+8*510+5+5=18020=9.0
.

Input2

4
Akash  1001 10 1002 5 1003 8
Akshat 1004 5 1001 10 1002 10
Amey   1002 0 1004 5 1001 10
Anuj     1002 5 1004 10 1003 0

Output2

Akash 8.2
Akshat 9.7
Amey 6.6
Anuj 3.2

Explanation

Akash has total cgpa 10*10+5*5+8*510+5+5=16520=8.25
, which is 8.2 after rounding off to one decimal place.
Similarly, the rest follows.
*\
