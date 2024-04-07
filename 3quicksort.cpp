#include<iostream>
using namespace std;
void quick(int arr[] , int low , int up);
int partition(int arr[],int low,int up);
int main(){
int arr[] = {2,6,3,8,1,9,32,10,2};
int i;
int n=9;
int low=0;
int up=n-1;
cout<<"The unsorted array is :";
for(i=0;i<n;i++){
cout<<arr[i];
}
quick(arr,0,n-1);
cout<<"\nThe sorted array is \n:";
for(i=0;i<n;i++){
cout<<arr[i] <<"\n";
}
}
void quick(int arr[],int low,int up) {
int pvtloc;
if(low>=up)
return;
pvtloc=partition(arr,low,up);
quick(arr,low,pvtloc-1);
quick(arr,pvtloc+1,up);
}
int partition(int arr[],int low,int up){
int temp,i,j,pivot;
i = low+1;
j = up;
pivot = arr[low];
while(i<=j){
while((arr[i]<pivot)&&(i<up))
i++;
while(arr[j]>pivot)
j--;
if(i<j){
temp = arr[i];
arr[i] = arr[j];
arr[j] = temp;
i++;
j--;
}
else{
i++;
}
}
arr[low] = arr[j];
arr[j] = pivot;
return j;
}
 /*svkm@svkm-HP-200-Pro-G4-22-All-in-One-PC:~$ cd bhavika62.cpp
svkm@svkm-HP-200-Pro-G4-22-All-in-One-PC:~/bhavika62.cpp$ g++ quick.cpp
svkm@svkm-HP-200-Pro-G4-22-All-in-One-PC:~/bhavika62.cpp$ ./a.out
The unsorted array is :26381932102
The sorted array is
:1
2
2
3
6
8
9
10
32
svkm@svkm-HP-200-Pro-G4-22-All-in-One-PC:~/bhavika62.cpp$ 

*/




