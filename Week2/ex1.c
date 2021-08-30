#include <limits.h>
#include <stdio.h>
#include <float.h>

int main(void){
    int int_var = INT_MAX;
    float float_var = FLT_MAX;
    double double_var = DBL_MAX;

    printf("%d %f %f", int_var, float_var, double_var);
    return 0;
}
