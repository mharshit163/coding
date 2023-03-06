#include<stdio.h>
#include<conio.h>

void main() {
     int n, i;
     int a[10];
     printf("Enter a size of array:");
     scanf("%d", &n);
     printf("Enter %d values of array", n);
     for(i=0; i<n; i=i+1) {
        scanf("%d", &a[i]);
     }

     printf("printing array values");
     for(i=0;i<n;i=i+1){
        printf("%d", a[i]);
     }
}
