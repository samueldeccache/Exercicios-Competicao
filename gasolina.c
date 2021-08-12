#include <stdio.h>

int main(){
int n;
int k;
int gasto;
scanf("%d", &n);
scanf("%d", &k);
if (n>=0 && n<=200 && k>=0 && k<=360){
if (n<=60 && k<=60){ //ok
	gasto = n*1500 + k*1500;}
if (n<=60 && k>60){
	if (n+k<=120){
        gasto = (n+k)*1500;
	}
	else{
        gasto = 60*1500 + (n+k-60)*3000 + 60*1500;
	}}
if (k<=60 && n>60){ //ok
	gasto = 1500*k + 60*1500 + (n-k-60)*3000;}
if (k>60 && n>60){
	if (n-k<=60 && n-k>=0){
        gasto = 60*1500 + (n-k)*1500;
    if (k-n<=60 && k-n>=0){
        gasto = 60*1500 + (k-n)*1500;
    }
    if (n-k>=60)
        gasto = 60*1500 + 60*1500 + (n-k-60)*3000;
    }
    if (k-n>=60)
        gasto = 60*1500 + 60*1500 + (k-n-60)*3000;
	}
}
	printf("%d", gasto);
}


