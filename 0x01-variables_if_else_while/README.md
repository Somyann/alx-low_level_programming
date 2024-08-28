Relational operators in C are defined to perform comparison of two values. The familiar angular brackets < and > are the relational operators in addition to a few more as listed in the table below.

These relational operators are used in Boolean expressions. All the relational operators evaluate to either True or False.

C doesn’t have a Boolean data type. Instead, "0" is interpreted as False and any non-zero value is treated as True.

Example 1
Here is a simple example of relational operator in C −

Open Compiler
#include <stdio.h>

int main(){

   int op1 = 5;
   int op2 = 3;

   printf("op1: %d op2: %d op1 < op2: %d\n", op1, op2, op1 < op2);

   return 0;
}
Output
Run the code and check its output −

op1: 5 op2: 3 op1 < op2: 0
Relational operators have an important role to play in decision-control and looping statements in C.

The following table lists all the relational operators in C −

Operator	Description	Example
==	Checks if the values of two operands are equal or not. If yes, then the condition becomes true.	(A == B)
!=	Checks if the values of two operands are equal or not. If the values are not equal, then the condition becomes true.	(A != B)
>	Checks if the value of left operand is greater than the value of right operand. If yes, then the condition becomes true.	(A > B)
<	Checks if the value of left operand is less than the value of right operand. If yes, then the condition becomes true.	(A < B)
>=	Checks if the value of left operand is greater than or equal to the value of right operand. If yes, then the condition becomes true.	(A >= B)
<=	Checks if the value of left operand is less than or equal to the value of right operand. If yes, then the condition becomes true.	(A <= B)
All the relational operators are binary operators. Since they perform comparison, they need two operands on either side.

We use the = symbol in C as the assignment operator. So, C uses the "==" (double equal) as the equality operator.

The angular brackets > and < are used as the "greater than" and "less than" operators. When combined with the "=" symbol, they form the ">=" operator for "greater than or equal" and "<=" operator for "less than or equal" comparison.

Finally, the "=" symbol prefixed with "!" (!=) is used as the inequality operator.


Example 2
The following example shows all the relational operators in use.

Open Compiler
#include <stdio.h>

int main(){

   int a = 21;
   int b = 10;
   int c ;
   
   printf("a: %d b: %d\n", a,b);
    
   if(a == b){
      printf("Line 1 - a is equal to b\n" );
   } else {
      printf("Line 1 - a is not equal to b\n" );
   }
	
   if (a < b){
      printf("Line 2 - a is less than b\n" );
   } else {
      printf("Line 2 - a is not less than b\n" );
   }
	
   if (a > b){
      printf("Line 3 - a is greater than b\n" );
   } else {
      printf("Line 3 - a is not greater than b \n\n" );
   }
   
   /* Lets change value of a and b */
   a = 5;
   b = 20;
   
   printf("a: %d b: %d\n", a,b);
	
   if (a <= b){
      printf("Line 4 - a is either less than or equal to  b\n" );
   }
	
   if (b >= a){
      printf("Line 5 - b is either greater than  or equal to b\n" );
   }
   
   if(a != b){
      printf("Line 6 - a is not equal to b\n" );
   } else {
      printf("Line 6 - a is equal to b\n" );
   }
   
   return 0;
}
Output
When you run this code, it will produce the following output −

a: 21 b: 10
Line 1 - a is not equal to b
Line 2 - a is not less than b
Line 3 - a is greater than b

a: 5 b: 20
Line 4 - a is either less than or equal to  b
Line 5 - b is either greater than  or equal to b
Line 6 - a is not equal to b
Explore our latest online courses and learn new skills at your own pace. Enroll and become a certified expert to boost your career.