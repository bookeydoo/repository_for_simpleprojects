#include<stdio.h>
#include<math.h>
int main(){
    long x,divisionvalue,binary= 0;
    long count=0;
    long divisionvalues[100];
    long base=1;
    printf("please enter the number you would like to convert from decimal to binary");
    scanf("%ld",&x);
    divisionvalue=x;
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
        printf("the binary number equals %ld\n",binary);
        printf("the values we got during the process are :");
        for(int i=0;i<count;i++){
            printf("\n%ld",divisionvalues[i]);
        }
    }return 0;
}