#include <stdio.h>
int main(){
    int a[100], n, i, j, pos, swap, min,temp;
    printf("Enter Number of Elements :");
    scanf("%d",&n);

    printf("Enter %d Numbers n: \n",n);

    for (i=0;i<n;i++){
        scanf("%d", &a[i]);
    }

    for (i=0;i<n-1;i++){
        min = i;
        for (j=i+1;j<n;j++){
            if (a[j]<a[min]){
                min=j;
            }
        }
            temp = a[min];
            a[min] = a[i];
            a[i] = temp;
    }

    printf("\nSorted Array:\n");
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }


    return 0;
    }
