#include <stdio.h>
#include <math.h>
int main(){
	int N;
	int i = 0;
	int A;
	int r =0;
scanf("%d\n",&N);
if ( N>=1 && N <=100){
    do{
    scanf("%d ",&A);
    i+=1;
    r+=A;
    }
while(i<N);
}
printf("%d",r);
}
