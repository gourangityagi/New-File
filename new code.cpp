//Name-Gourangi tyagi //Branch-E&TC A2 //Batch-2022-26
#include<stdio.h>
#include<stdlib.h>

void RightTriangleStar()
{
int n;
printf("Enter the number of rows:-");  
scanf("%d",&n);  
   for(int i=1;i<=n;i++)  
    {  
        for(int j=1;j<=i;j++)  
        {  
            printf("* ");  
        }  
        printf("\n");  
    }  
  }

void MirroredRightTriangleStar()
{
int n,m=1;  
printf("Enter the number of rows:-");  
scanf("%d",&n);  
    for(int i=n;i>=1;i--)  
    {  
        for(int j=1;j<=i-1;j++)  
        {  
          printf(" ");  
        }  
        for(int k=1;k<=m;k++)  
        {  
            printf("*");  
        }  
        printf("\n");  
        m++;  
    }   
  }
  
void HollowRightTriangleStar()
{
int n;  
printf("Enter the number of rows:-");  
scanf("%d",&n);  
    for(int i=1;i<=n;i++)  
    {  
        for(int j=1;j<=i;j++)  
        {  
        if(j==1|| i==j || i==n )  
        {  
            printf("*");  
        }  
        else  
        printf(" ");  
        }  
        printf("\n");  
    }  
  }
  
void PyramidStar()
{
 int n,m;  
    printf("Enter the number of rows:-");  
    scanf("%d",&n);  
    m=n;  
   for(int i=1;i<=n;i++)  
   {  
       for(int j=1;j<=m-1;j++)  
       {  
           printf(" ");  
       }  
       for(int k=1;k<=2*i-1;k++)  
       {  
         printf("*");  
       }  
       m--;  
     
      printf("\n");  
    }  
}
  
void InvertedPyramidStar()
{ 
int n,m=1;
printf("Enter the number of rows:-");  
scanf("%d",&n);
   for(int i=n;i>=1;i--)  
   {  
       for(int j=1;j<m;j++)  
       {  
           printf(" ");  
       }  
       for(int k=1;k<=2*i-1;k++)  
       {  
           printf("*");  
       }  
       m++;  
     
      printf("\n");  
    }  
    }  
    
void HollowPyramidStar()
{ 
 int n,m;  
    printf("Enter the number of rows:-");  
    scanf("%d",&n);  
    m=n;  
   for(int i=1;i<=n;i++)  
   {  
       for(int j=1;j<=m-1;j++)  
       {  
           printf(" ");  
       }  
       for(int k=1;k<=2*i-1;k++)  
       {  
          if(k==1 || k==2*i-1 || i==n)  
         printf("*");  
         else  
         printf(" ");  
       }  
       m--;  
     
      printf("\n"); 
    }   
  }


void SquareStar()
{
int n;
printf("Enter the number of rows:-");  
scanf("%d",&n);
for(int i=0;i<n;i++)  
    {  
        for(int j=0;j<n;j++)  
        {  
            printf("*");  
        }  
        printf("\n");  
    }    
  }
  
 
  
void HollowSquareStar()
{
int n;
printf("Enter the number of rows:-");  
scanf("%d",&n);
for(int i=1;i<=n;i++)  
    {  
        for(int j=1;j<=n;j++)  
        {  
            if(i==1 ||i==n||j==1||j==n)  
            {  
            printf("*");  
            }  
            else  
            printf(" ");  
        }  
        printf("\n");  
    }    
  }
  
  
void DiamondStar()
{  
int n;  
  printf("Enter the number of rows:-");  
  scanf("%d",&n);  
  int spaces=n-1;  
  int stars=1;  
  for(int i=1;i<=n;i++)  
  {  
    for(int j=1;j<=spaces;j++)  
    {  
      printf(" ");  
    }  
    for(int k=1;k<=stars;k++)  
    {  
      printf("*");  
    }  
    if(spaces>i)  
    {  
      spaces=spaces-1;  
      stars=stars+2;  
    }  
    if(spaces<i)  
    {  
      spaces=spaces+1;  
      stars=stars-2;  
    }  
    printf("\n");  
  }  
}
  
void XStar()
{ 
int n,m;  
  printf("Enter the number of rows:-");  
  scanf("%d",&n);  
  m=2*n-1;  
  for(int i=1;i<=m;i++)  
  {  
    for(int j=1;j<=m;j++)  
    {  
       if(i==j || j==(m-i+1))  
       {  
         printf("*");  
       }  
       else  
       {  
         printf(" ");  
       }  
    }  
    printf("\n");  
  }  
}
  
 // main function
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int n;  
    int choice;
    bool Exit = false;

do
{
printf("\nChoose the Pattern\n");
printf("----------------------------\n");
printf("1. Right Triangle Star\n");
printf("2. Mirrored Right Triangle Star\n");
printf("3. Hollow Right Triangle Star\n");
printf("4. Pyramid Star\n");
printf("5. Inverted Pyramid Star\n");
printf("6. Hollow Pyramid Star\n");
printf("7. Square Star\n");
printf("8. Hollow Square Star\n");
printf("9. Diamond Star\n");
printf("10. X Star\n");
printf("11. Exit\n");
printf("----------------------------\n");
printf("Enter your choice: ");
scanf("%d",&choice);
switch (choice) 
{
case 0:
Exit = true;
printf("Thank You for Using the Program \n");
break;
case 1:
RightTriangleStar();
printf("Your chosen pattern \n");
break;
case 2:
MirroredRightTriangleStar();
printf("Your chosen pattern\n");
break;
case 3:
HollowRightTriangleStar();
printf("Your chosen pattern \n");
break;
case 4:
PyramidStar();
printf("Your chosen pattern \n");
break;
case 5:
InvertedPyramidStar();
printf("Your chosen pattern \n");
break;
case 6:
HollowPyramidStar();
printf("Your chosen pattern \n");
break;
case 7:
SquareStar();
printf("Your chosen pattern \n");
break;
case 8:
HollowSquareStar();
printf("Your chosen pattern \n");
break;
case 9:
DiamondStar();
printf("Your chosen pattern \n");
break;
case 10:
XStar();
printf("Your chosen pattern \n");
break;

exit(11);
default:
printf("Invalid input.\n");
printf("Please enter the correct input.\n");
}
}
while(!Exit);
return 0;
}	
	
