# include <stdio.h>

main(){
    int i, j, a, k, n, number[30];

    // Put Numbers from User input in an array
    printf("How many numbers u are going to enter?: ");
    scanf("%d",&n);

    printf("Enter %d elements: ", n);

    for(i=0;i<n;i++){
        scanf("%d",&number[i]);
    }

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(number[i]>number[j]){
                a=number[i];
                number[i]=number[j];
                number[j]=a;
            }
       
        }

    }
   
    printf("Order of Sorted elements: ");
    for(i=0;i<n;i++)
        printf(" %d",number[i]);
}