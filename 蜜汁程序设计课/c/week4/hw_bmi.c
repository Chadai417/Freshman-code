#include <stdio.h>
int main(){
    float weight,height;
    float bmi=0;
    scanf("%f %f",&weight,&height);
    bmi=weight/(height*height);
    if(weight<=0 || height<=0){
        printf("bmi=%0.1f,Invalid input", bmi);
    }
    else if (bmi<18.5){
        printf("bmi=%0.1f,Underweight", bmi);
    }
    else if (bmi>=18.5 && bmi<24){
        printf("bmi=%0.1f,Normal", bmi);
    }
    else if (bmi>=24 && bmi<28){
        printf("bmi=%0.1f,Overweight", bmi);
    }
    else{
        printf("bmi=%0.1f,Obese", bmi);
    }
    
    return 0;
}