
#include<stdio.h>
#include<stdlib.h>
int main(){
    int num,*arr,i;
    printf("enter the size of an array");
    scanf("%d",&num);
    arr=(int*)malloc(num*(sizeof(int)));
    printf("enter the number");
    for(i=0;i<num;i++)

    scanf("%d",arr+i);

int temp;
for(i=0;i<num/2;i++){
temp=arr[i];
arr[i]=arr[num-1-i];
arr[num-1-i]=temp;
}

for(i=0;i<num;i++){
    printf("%d",*(arr+i));
}
}
