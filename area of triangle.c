
#include<stdio.h>
#include<math.h>
int main()
{
int choice;
printf("Enter\n1 for Triangle\n2 for Square\n3 for Circle\n4 for Rectangle\n5 for Parallelogram\n");
scanf("%d",&choice);
switch(choice)
{
 case 1:
 {
  int a,b,c;
        float s,area;
        printf("Enter sides of triangle\n");
        scanf("%d %d %d",&a,&b,&c);

        s=(float)(a+b+c)/2;
        area=(float)(sqrt(s*(s-a)*(s-b)*(s-c)));

        printf("Area of Triangle with sides %d,%d,%d is %f\n",a,b,c,area);
  break;
 }
 case 2:
 {
  float side,area;
  printf("Enter Sides of Square\n");
  scanf("%f",&side);
  area=(float)side*side;
  printf("Area of Square is %f\n",area);
  break;
 }
 case 3:
 {
  float radius,area;
  printf("Enter Radius of Circle\n");
  scanf("%f",&radius);
  area=(float)3.14159*radius*radius;
  printf("Area of Circle with radius %f is %f\n",radius,area);
  break;
 }
 case 4:
 {
  float len,breadth,area;
  printf("Enter Length and Breadth of Rectangle\n");
  scanf("%f %f",&len,&breadth);
  area=(float)len*breadth;
  printf("Area of Rectangle is %f\n",area);
  break;
 }
 case 5:
 {
  float base,height,area;
  printf("Enter base and height of Parallelogram\n");
  scanf("%f %f",&base,&height);
  area=(float)base*height;
  printf("Enter area of Parallelogram is %f\n",area);
  break;
 }
 default:
 {
  printf("Invalid Choice\n");
  break;
 }
}
}

/*Enter
1 for Triangle
2 for Square
3 for Circle
4 for Rectangle
5 for Parallelogram
1
Enter sides of triangle
1
1
1
Area of Triangle with sides 1,1,1 is 0.433013

The Program starts with initializing:
choice → To store users choice
a,b,c → used for triangle sides which are taken from user(local variables which work only inside that particular case i.e. "case 1")
side,area→ used for calculations of Square(local variables which work only inside that particular case i.e. "case 2")
radius,area→ used for calculations of Circle(local variables which work only inside that particular case i.e. "case 3")
length,breadth,area→ used for calculations of Rectangle(local variables which work only inside that particular case i.e. "case 4")
base,height,area→ used for calculations of Parallelogram(local variables which work only inside that particular case i.e. "case 5").
printf("Enter\n1 for Triangle\n2 for Square\n3 for Circle\n4 for Rectangle\n5 for Parallelogram\n");
scanf("%d",&choice);
Taking users' choice.Lets say 1.So choice=1
switch(choice)
{
Which means the choice taken from user is passed to switch which then compares with all the case numbers and if it finds a match then that particular case is executed.
Learn Switch case in detail https://beginnerslanguage.wordpress.com/software-used-to-implement-programs-in-c/if-else/switch-case-statement/
After execution of that case it wont check with remaining case which are under that case.
For Example:Here we have 5 cases and if the users' input is 3 then the compiler checks with


case 1: as it doesnot match


 Then it will check case 2:,which is also not a match.


Then it will go and check case 3:. Now it finds a match,so the case 3: statements are executed.


After execution we have a break; statement at last which causes the termination of switch case and comes out of switch case. So it doesnot check with case 4: and case 5:


If the choice doesnot match with anyone of the cases then it executes default statement.


As from our we took choice as 1 and case 1: is executed
case 1:
 {
  int a,b,c;
        float s,area;
        printf("Enter sides of triangle\n");
        scanf("%d %d %d",&a,&b,&c);

        s=(float)(a+b+c)/2;
        area=(float)(sqrt(s*(s-a)*(s-b)*(s-c)));

        printf("Area of Triangle with sides %d,%d,%d is %f\n",a,b,c,area);
  break;
 }
The case has a few variable which are local variables.Compiler takes a,b,c values from user to calculate area with formula as you are seeing in the code.Final output is stored in area variable.
Area is printed and switch case is terminated.
In this way it happens to every run as given below.*/








