#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>
extern "C"
{
    #include "src/cvect.h"
}

using namespace std;

void tester(int a1[],int a2[], int a3[], int a4[])
{
    // DOT TESTER
    printf("Dot Product : %d\n",dot(a4,a3));

    // CROSS TESTER
    int *c = cross(a1,a2);
    printf("Cross Product : ");
    for(int i=0;i<3;i++) printf("%d ",c[i]);
    printf("\n");

    // MODVECTOR TESTER
    printf("Modulus of vector : %f\n",modVector(a3));

    // ANGLE TESTER
    printf("Angle : %f\n",angle(a1,a2));

    // PRPJECTION TESTER
    printf("Projection : %f\n",projection(a2,a3));

     //ISPERPENDICULAR TESTER
    printf("IsPerpendicular : %d\n",isPerpendicular(a2,a4));

    // ISCOLLINEAR TESTER
    printf("IsCollinear : %d\n",isCollinear(a2,a3));

    // UNIT VECTOR TESTER
    float *res = unitVector(a3);
    printf("Unit Vector : ");
    for(int i=0;i<3;i++) printf("%f ",res[i]);
    printf("\n");

    //UNITNORMAL TESTER
    float **arr;
    arr = unitNormal(a2,a3);
    printf("Unit Normal : \n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%f ",arr[i][j]);
        }
        printf("\n");
    }

    //BISECTOR TESTER
    float *bs;
    bs = bisector(a1,a2);
    printf("Bisector: ");
    for (int i=0;i<3;i++)
    {
        printf("%f ",bs[i]);
    }
    printf("\n");

    //POSITION TESTER
    int *pv;
    pv = positionVector(a1,a2);
    printf("Position Vector: ");
    for (int i=0;i<3;i++)
    {
        printf("%d ",pv[i]);
    }
    printf("\n");

    // ISCOPLANAR TESTER
    printf("IsCoplanar : %d\n",isCoplanar(a1,a2,a3));

    //RECIPROCAL TESTER
    float **rec;
    rec = reciprocal(a1,a2,a3);
    printf("Reciprocal : \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%f ",rec[i][j]);
        }
        printf("\n");
    }

     // MINVALUE TESTER
    printf("minValue : %f\n",minValue(a1,a2));
}

int main()
{
    int a1[] = {10,2,4};
    int a2[] = {4,2,6};
    int a3[] = {-7,-6,-9};
    int a4[] = {4,20,12};
    int a5[] = {1,0,0};
    int b1[] = {1,2,-2,9};
    int b2[] = {2,4,-4,-6};
    int u = 15;
    int v = 11;
    
    tester(a1,a2,a3,a4);
    return 0;
}