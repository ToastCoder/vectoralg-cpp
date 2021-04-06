#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>

#include "cvect.h"
void tester(int a1[],int a2[], int a3[], int a4[])
{
    // DOT TESTER
    printf("Dot Product : %d\n",dot(a1,a2));

    // CROSS TESTER
    int *c = cross(a2,a1);
    printf("Cross Product : ");
    for(int i=0;i<3;i++){printf("%d ",c[i]);}
    printf("\n");

    // MODVECTOR TESTER
    printf("Modulus of vector : %f\n",modVector(a1));

    // ANGLE TESTER
    printf("Angle : %f\n",angle(a1,a2));

    // PRPJECTION TESTER
    printf("Projection : %f\n",projection(a2,a3));

    //ISPERPENDICULAR TESTER
    printf("IsPerpendicular : %s\n",isPerpendicular(a2,a4));

}

void area_tester(int a1[],int a2[],int a3[],int a4[])
{


}
int main()
{
    int a1[] = {1,2,3};
    int a2[] = {4,5,6};
    int a3[] = {7,8,9};
    int a4[] = {0,0,0};
    
    //printf("%d\n",cross(a2,a4)[2]);

    tester(a1,a2,a3,a4);
    area_tester(a1,a2,a3,a4);
    return 0;
}