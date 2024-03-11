#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3];
    for(int i=0;i<2;i++){
        for (int j = 0;  j< 2; j++)
        {
            c[3][3]=0;
            for (int k = 0; k < 2; k++)
            {
                c[i][j]+=a[i][j] *b[k][j];
            }
            
        }
        
    }
    printf("matrix mul is: \n");
    for(int i=0;i<2;i++){
        for (int j = 0;  j< 2; j++)
        {
            printf("%d",c[i][j]);
        }
    }
}