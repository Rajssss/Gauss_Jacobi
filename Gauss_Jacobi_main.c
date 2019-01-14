//Copyright Reserved...Raj.S
//Distribution of this code is strictly prohabited without my direct permission.
//A programme for Gauss-Jacobi method.

#include<stdio.h>

main()
{
    float A[3][4],C[3];
    int acr;
    char dis;
    float x,y,z,x0,y0,z0;

    printf("\n\n\t");
    printf("Gauss-Jacobi Method By Raj.S Copirights Reserved.");
    printf("\n\tMake sure your input is a Diagonal Dominant matrix!\n\n");
    beg:
    printf("\tEnter elements =>>");

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("\n\t\ta%d%d=>",i+1,j+1);
            scanf("%f",&A[i][j]);
        }
    }

    printf("\n\tOK! now enter constants for each eqn one by one resp.=>>");

    for(int c=0;c<3;c++)
    {
        printf("\n\t\tFor b%d=",c+1);
        scanf("%f",&A[c][3]);
    }

    {
        printf("\n\tAccuracy=>");
        scanf("%d",&acr);
        printf("\n\tEnter values for x0, y0, z0 resp.=>");
        scanf("%d %d %d",&x0,&y0,&z0);

        printf("\n\tLet it begn!!!\n\n");
    }
//copyright reserved..!
    printf("\n\tValues are=>>");

    for(int i=1;i<=acr;i++)
    {

        x=(A[0][3]-A[0][1]*y0-A[0][2]*z0)/A[0][0];
        y=(A[1][3]-A[1][0]*x0-A[1][2]*z0)/A[1][1];
        z=(A[2][3]-A[2][0]*x0-A[2][1]*y0)/A[2][2];

        printf("\n\n\tx%d=%.5f\n",i,x);
        printf("\ty%d=%.5f\n",i,y);
        printf("\tz%d=%.5f\n",i,z);

        x0=x;   y0=y;   z0=z;
    }
    printf("\n\n\tNext Question? for yes type y then enter or back to exit. =>");
    scanf(" %c",&dis);
    if(dis=='y')
    {
    	goto beg;
    }
}
