#include <stdio.h> 
#include<math.h>


int main(){
int x,count,divisionvalue,binary;
printf("please input the number you would like to convert to binary");
scanf("%d",&x);
divisionvalue=x;

for (int  count = 0; count<10000000; count++)
{
   if(divisionvalue%2==0){
 binary=(divisionvalue%2)*pow(10,count);
 divisionvalue/=2;
 printf("%d",binary);

 if (divisionvalue==0 || divisionvalue< 0)
 {
   break;
 }
 
   }
   else if (divisionvalue%2 != 0)
   {
    
    
    binary+=(1)*pow(10,count);
     printf("%d",binary);
     divisionvalue=(divisionvalue-1)/2;

     if (divisionvalue<=0 || divisionvalue==1)
 {
    binary+= (1)*pow(10,count);
   break;
 }
   }
  
   

} return 0;}