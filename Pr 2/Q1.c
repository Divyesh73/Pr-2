#include<stdio.h>
#include<conio.h>

void main()

{
    int mark;
    int grade;
    
    printf("Enter your mark :");
    scanf("%d",&mark); 
 
    (mark>=80 && mark<=100)?
     grade='A':
    		(mark>=70 && mark<80)?
             grad='B':
    			(mark>=60 && mark<70)?
                 grade='C':
    				(mark>=40 && mark<60)?
                     grade='D':
                        (mark>=0 && mark<40)?
                        grade='F':
                              printf("Enter valid number");

    switch(grade)
    {
     case 'A':printf("your grade is A,Excellent work");
     break;

     case 'B':printf("your grade is B,Well done");
     break;
  
     case 'C':printf("your grade is C,Good job");
     break;

     case 'D':printf("your grade is D You Passed,but you could do better");
     break;

     case 'F':printf("your grade is F,Sorry,You faild");
     break;
    }
  
    if(grade=='A'|| grade=='B' || grade=='C' || grade=='D')
    {
      printf("\nCongratulation ! You are eligible for the next level");

    }
    else
    {
      printf("please try again later")

    }



}