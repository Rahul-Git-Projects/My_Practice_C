#include <stdio.h>
#include <stdbool.h>

int main(){

    float working_hours,gross_pay,taxes,net_pay;
    printf("How many hours did you work last week?: ");
    scanf("%f",&working_hours);

    if (working_hours <= 40){
        gross_pay = working_hours*12;
    }
    else {
        gross_pay = 40*12 + (working_hours - 40)*18;
    }

    if (gross_pay <=300){
        taxes = (15.0/100)*gross_pay;
    }
    else if (gross_pay <=450){
        taxes = (15.0/100)*300 + (gross_pay - 300)*(20.0/100);
    }
    else{
        taxes = (300*15/100) + (150*20/100) + ((gross_pay - 450)*25/100);
    }
    net_pay = gross_pay - taxes;

    printf("\ngross_pay: %f\ntaxes: %f\nnet_pay: %f",gross_pay,taxes,net_pay);
    
    return 0;
}