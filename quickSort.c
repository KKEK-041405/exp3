#include<stdio.h>
void quicksort(int a[],int,int);
void main() {
int list[20],size,i;
printf("Enter the no of elements: ");
scanf("%d",&size);
printf("Enter numbers to be sorted: ");
for(i=0;i<size;i++) {
scanf("%d",&list[i]);
}
quicksort(list,0,size-1);
printf("Sorted array is: ");
for(i=0;i<size;i++) {
if(i<size-1)
printf("%d ",list[i]);
else
printf("%d \n",list[i]);
}
}
void quicksort(int list[],int first,int last) {
int pivot,i,j,temp;
if(first<last) {
pivot=first;
i=first;
j=last;
while(i<j) {
while(list[i]<=list[pivot] && i<last) {
i++;
}
while(list[j]>list[pivot]) {
j--;
}
if(i<j) {
temp=list[i];
list[i]=list[j];
list[j]=temp;
}
}
temp=list[pivot];
list[pivot]=list[j];
list[j]=temp;
quicksort(list,first,j-1);
quicksort(list,j+1,last);
}
}