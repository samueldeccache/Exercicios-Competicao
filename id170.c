#include <stdio.h>
#include <math.h>
int main(){
	int N;
	int i = 0;
	double A;
	double r;
scanf("%d\n",&N);
if ( N>=1 && N <=10000){
    do{
    scanf("%lf ",&A);
    i+=1;
    if (A>=0 && A<=1000000000){
        r = sqrt(A);
        printf("%.4lf\n",r);
    }
    }
while(i<N);
}
}
