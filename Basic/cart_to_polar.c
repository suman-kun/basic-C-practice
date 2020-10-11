#include<stdio.h>
#include<math.h>
int main(){
    double x,y;
    double r;
    double phi;
    printf("***Cartesian co-ordinate***");
    printf("\nEnter the value of x co-ordiante:\t");
    scanf("%lf",&x);
    printf("\nEnter the value of y co-ordinate:\t");
    scanf("%lf",&y);
        r = sqrt(pow(x,2)+pow(y,2));
        //div = y/x;
        phi = atan(y/x);
    printf("\nPolar co-ordinates of %0.2lf & %0.2lf is (%0.2lf,%0.2lf)",x,y,r,phi);
    return 0;
}