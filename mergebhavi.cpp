#include<iostream>

using namespace std;

int main(){

int n1, n2, n3;

int a1[] = {3,5,6};

int a2[] = {20,60,57,4,32};

int a3[8];

int k;

int merge(int a1[], int a2[], int a3[], int nl,int n2);

merge(a1,a2,a3,3,5);

cout<<"Resulatant array is:\n";

for(k=0; k<8; k++) {

cout<<a3 [k]<<endl;

}

}

int merge(int a1[], int a2[], int a3[], int n1, int n2){

int i=0,j=0, k=0;

while((i <= n1-1) && (j <= n2-1)){

if(a1[i] < a2[j]) a3 [k++] = a1[i++];

else a3 [k++] = a2[j++];

}

while(i < 3)

a3 [k++] = a1[i++];

while(j < 5)

a3[k++] = a2[j++];

return 0;

}
/*
/*svkm@svkm-HP-200-Pro-G4-22-All-in-One-PC:~$ cd bhavika62.cpp
svkm@svkm-HP-200-Pro-G4-22-All-in-One-PC:~/bhavika62.cpp$ g++ quick.cpp
svkm@svkm-HP-200-Pro-G4-22-All-in-One-PC:~/bhavika62.cpp$ ./a.out
Resulatant array is:
1
2
3
4
5
6
7
9
svkm@svkm-HP-200-Pro-G4-22-All-in-One-PC:~/bhavika62.cpp$ 

*/
