#include <stdio.h>
#include <ctype.h>

int main(){
    char unit;
    char convertedunit;
    float temp;
    float convertedtemp;

    printf("What is your unit (F or C)?\n ");
    scanf("%c", &unit);
    unit = toupper(unit);
    printf("What is your temperature?\n");
    scanf("%f", &temp); 

    if(unit == 'C'){
        convertedtemp = (temp * 9/5) + 32;
        convertedunit = 'F';
    }
    else if(unit == 'F'){
        convertedtemp = (temp - 32) * 5/9;
        convertedunit = 'C';
    }
    else{
        printf("Invalid unit or temperature");
    }
    printf("Your converted temperature is %f %c degrees", convertedtemp, convertedunit);
    return 0;
}