#include<stdio.h>
#include<stdlib.h>
#include <math.h>

float downscalingfunc(float x,float y){
for(int z=0;z<y;z++){
    x/=10.0;

} return x;
}
int counterfunc(int x){
    int funcx=x; //this is to not change the value of x while counting down
    int count=0;
    while(funcx !=0){
        funcx=funcx%10;
     count++;   
    }
    return count;
}

int binarytodecimal_func(int binaryinput ){
 int x= binaryinput;
 int finaldecimalvalue=0;
 int lastdigit=1;
 int powerofthebase=0;

 while (x !=0 & powerofthebase  <=(counterfunc(binaryinput))-1){  /*so this part is a lil confusing but 
    what i am doing is checking how many digits are in the binaryinput var then subtracting the 0 part to get the count to check 
    that the power dont exceed the actual count */           
  lastdigit= x %10;
x/=10;
 finaldecimalvalue+=(lastdigit*pow(2,powerofthebase));

finaldecimalvalue+=finaldecimalvalue;


 }
 //i might not add floating points in here after all 


return finaldecimalvalue;

 


}

int main(){
    int binary_input=0;
    long divisionvalue;
    float floating_point=0.0,x;
    long count=0;
    long divisionvalues[100];
    long base=1;
    float k;
    float floating_value=0.1;
    float binary= 0.0;
    char Case;


   printf("do u want to convert binary to decimal or vice versa?\n input b for binary to decimal or input d for decimal to b");
    scanf("%c",&Case);
    switch (Case)
    {
    case 'b':
    printf("\nplease enter the number you would like to convert from decimal to binary");
    scanf("%f",&x);
    printf("please enter the accuracy of the floating point");
    scanf("%f",&k);
    divisionvalue=x;
    floating_point=x-(int)x; //used in the second loop to get the floating point value

    if(divisionvalue<0){printf("invalid number pls input a positive number\n ");}
    else {
        while(divisionvalue>0){
            int remainder=divisionvalue%2;
            divisionvalues[count]=divisionvalue;
            divisionvalue/=2;
            binary+=remainder*base;
            count++;
        base*=10;
        
        }
       for (float i = 0.0; i < k; i++)
       {
        floating_point*=2;
        floating_value=(float)(int)(floating_point) ;
        floating_value+=downscalingfunc(floating_value,i);
        floating_point=floating_point-(int)floating_point;

       }
       
        binary+=floating_value;

        printf("the binary number equals %f\n",binary);
        printf("the values we got during the process are :");
        for(int i=0;i<count;i++){
            printf("\n%ld",divisionvalues[i]);
        }
        break;

        
    //second case starts here
    case 'd':
    
    printf("type the binary number pls");
    scanf("%d",&binary_input);
   printf("%d", binarytodecimal_func(binary_input));
    break;
    
   
    }return 0;

}}


