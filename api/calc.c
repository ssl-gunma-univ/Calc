#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (int argc, char* argv[]){
    double dnum1 = atof(argv[1]);
    double dnum2 = atof(argv[2]);
    int inum1 = atoi(argv[1]);
    int inum2 = atoi(argv[2]);
    double dresult = 0;
    int iresult = 0;

    char operator = argv[3][0];


    switch(operator){
    case '+':
        dresult = dnum1 + dnum2;
        break;
    case '-':
        dresult = dnum1 - dnum2;
        break;
    case '*':
        dresult = dnum1 * dnum2;
        break;
    case '/':
        dresult = dnum1 / dnum2;
        break;
    case '%':
        iresult = inum1 % inum2;
        break;
    case '^':
        dresult = pow(dnum1, dnum2);
        break;
    }

    if(operator == '%') printf("%d %c %d = %d\n", inum1, operator, inum2, iresult);
    else printf("%.3f %c %.3f = %.3f\n", dnum1, operator, dnum2, dresult);
    
    return 0;
}