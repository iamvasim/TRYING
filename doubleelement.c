/* bubble sorting*/
#include<stdio.h>
int main(){
    int n =5;
    int j;
    int arr[5]={5,4,3,2,1};
    //bubble sort
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<=n-2;j++){
           if(arr[j]>arr[j+1]) {
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;

           }

        }
    }
    printf("\n");
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }


}
