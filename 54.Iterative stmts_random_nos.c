#include<stdio.h>

int main()
{
int marks[50], i,Marks, gradeA=0, gradeB=0, gradeC=0, gradeD=0, gradeE=0;
for(i=0; i<Marks; i++)
{
  Marks=rand()%100+1;
    printf("Random numbers:%d\n",Marks);

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
