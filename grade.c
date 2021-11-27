#include <stdio.h>
main()
{
	printf("enter your marks: ");
	int marks =0;
	scanf("%d" ,&marks);
	if (marks >= 85 && marks <= 100)
	{
	printf( "Grade A , Excellent" );
    }
    else if ( marks >= 70 && marks <=84)
	{
	printf("Grade B, Keep it up");
	}
	else if (marks >= 55 && marks <= 69)
	{
	printf("Grade C , Average can do better");
	}
	else if( marks >= 40 && marks <= 54)
	{
    printf("Grade D , Need to improve");
	}
	else 
	{
		printf ("Grade E ,  Work Hard");
	}
	}
