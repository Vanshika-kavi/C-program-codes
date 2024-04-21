#include<stdio.h>

int main()
{
int marks[50], i, n, gradeA=0, gradeB=0, gradeC=0, gradeD=0, gradeE=0;
printf("Enter the total number of students: ");
scanf("%d", &n);

printf("Enter the marks of the students: \n");

for(i=0; i<n; i++)
{
    printf("Student %d: ", i+1);
    scanf("%d", &marks[i]);

    if(marks[i] >= 90)
        gradeA++;
    else if(marks[i] >= 80)
        gradeB++;
    else if(marks[i] >= 70)
        gradeC++;
    else if(marks[i] >= 60)
        gradeD++;
    else
        gradeE++;
}

printf("\nGrade A: %d\n", gradeA);
printf("Grade B: %d\n", gradeB);
printf("Grade C: %d\n", gradeC);
printf("Grade D: %d\n", gradeD);
printf("Grade E: %d\n", gradeE);

return 0;
}
