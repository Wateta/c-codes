#include <stdio.h>
int main(){
int n , m,j,i,k;
printf("Enter the first size of matrix:");
scanf("%d",&n);
printf("Enter the second size of matrix:");
scanf("%d",&m);
printf("\n");
int matrixA[n][m];
int matrixB[n][m];
printf("Enter elements in matrix A");
printf("\n");
for(i=0;i<n;i++){
printf("Enter elements for row %d",i+1);
printf("\n");
for(j=0;j<m;j++){
printf("Element %d :",j+1);
scanf("%d",&matrixA[i][j]);
}
}
printf("\n");
printf("Enter elements in matrix B:");
printf("\n");
for(i=0;i<n;i++){
printf("Enter elements for row %d",i+1);
printf("\n");
for(j=0;j<m;j++){
printf("Element %d :",j+1);
scanf("%d",&matrixB[i][j]);
}
}
int sum[n][m];
int diff[n][m];
for(i=0;i<n;i++){
for(j=0;j<m;j++){
sum[i][j]=matrixA[i][j]+matrixB[i][j];
}
}
printf("\n");
printf(" Sum of matrices:\n");
for(i=0;i<n;i++){
for(j=0;j<m;j++){
printf("%d",sum[i][j]);
printf("\n");
}
}
for(i=0;i<n;i++){
for(j=0;j<m;j++){
diff[i][j]=matrixA[i][j]-matrixB[i][j];
}
}
printf(" Difference of matrices:\n");
for(i=0;i<n;i++){
for(j=0;j<m;j++){
printf("%d",diff[i][j]);
printf("\n");
}

}
int product[n][m];
 for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            product[i][j] = 0;
            for(k = 0; k < m; k++) {
                product[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }

    printf("Product of matrices:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++)
            printf("%d ", product[i][j]);
        printf("\n");
    }
return 0;
}

