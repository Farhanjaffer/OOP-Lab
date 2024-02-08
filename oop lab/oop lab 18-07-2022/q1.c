//Q1. WAP to input name , roll number and marks in 5 subjects for a student , and display it.

#include <stdio.h>

int main()
{
  
    struct subjects{
        int maths;
        int eng;
        int sst;
        int com;
        int hin;
    };
    struct students{
        char name[100];
        int roll;
        struct subjects sub;
    };

    struct students student;
    
    printf("\nEnter name: ");
    scanf("%s",student.name);
    
    printf("\nEnter Roll: ");
    scanf("%d",&student.roll);
    
    printf("\nMarks in the Subjects(maths english social computer hindi) respectively:");
    scanf("%d %d %d %d %d",&student.sub.maths,&student.sub.eng,&student.sub.sst,&student.sub.com,&student.sub.hin);
    
    printf("\nYour Name %s",student.name);
    printf("\nYour Roll %d",student.roll);
    printf("\nYour Marks = Maths %d Eng %d SST %d Computer %d Hindi %d",student.sub.maths,student.sub.eng,student.sub.sst,student.sub.com,student.sub.hin);

    return 0;
}