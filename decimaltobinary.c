#include <stdio.h>



int main(){
long x,count,divisionvalue,binary;
printf("please input the number you would like to convert to binary");
scanf("%ld",&x);
divisionvalue=x;
count=1;
binary=0;

while (divisionvalue !=0)

{
   if(divisionvalue%2==0 || divisionvalue<=0 ){
    count*=10;
 binary+=(divisionvalue%2)*count;
 divisionvalue/=2;
 printf("%ld",binary);


 if (divisionvalue<=0 || divisionvalue== 1)
 {
   break;
 }
 
   }
   else if (divisionvalue%2 != 0)
   {
   count*=10; 
    binary+=(divisionvalue%2)*count;
     printf("%ld",binary);
     divisionvalue=(divisionvalue)/2;
   
  
    if (divisionvalue<=0 || divisionvalue==1)
 {
    
   break;}
 }
  
   

} return 0;}
  
   

