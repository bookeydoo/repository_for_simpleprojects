#include <stdio.h>
#include<math.h>


int main(){
long x,count,divisionvalue,binary;
printf("please input the number you would like to convert to binary");
scanf("%ld",&x);
divisionvalue=x;
count=0;
binary=0;

while (divisionvalue !=0)

{
   if(divisionvalue%2==0 || divisionvalue<=0 ){
 binary+=(divisionvalue%2)*pow(10,count);
 divisionvalue/=2;
 printf("%ld",binary);
count++;

 if (divisionvalue<=0 || divisionvalue== 1)
 {
   break;
 }
 
   }
   else if (divisionvalue%2 != 0)
   {
    
    binary+=(divisionvalue%2)*pow(10,count);
     printf("%ld",binary);
     divisionvalue=(divisionvalue)/2;
   count++;
  
    if (divisionvalue<=0 || divisionvalue==1)
 {
    
   break;}
 }
  
   

} return 0;}
  
   

