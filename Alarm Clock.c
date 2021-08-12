#include <stdio.h>

int main(){
int h1;
int m1;
int h2;
int m2;
int h3;
int m3;
int h4;
int m4;
int d_horas;
int d_minutos;
int horas_m1;
int horas_m2;
int horas_1;
int horas_2;
int minutos_m2;
int k;
int p;
while (h1!=0 && m1!=0 && h2!=0 && m2!=0){
k = scanf("%d %d %d %d",&h1, &m1, &h2, &m2);
if(h1>=0 && h1<=23 && m1>=0 && m1<=59 && h2>=0 && h2<=23 && m2>=0 && m2<=59){
        if(h1!=0 | h2!=0 | m1!=0 | m2!=0){
        if (h1 == 0){
        h1 = 24;
    }
    if (h2 == 0){
        h2 =24;
    }
    horas_m1 = 60*h1;
    horas_m2 = 60*h2;
    //if (h1 == 0 || h2 ==0){
      //  horas_m1 = 60*24;
        //horas_m2 = 60*24;}
    int d_minutos = horas_m2 - horas_m1 + m2 - m1;
    if (h1==h2 && m1>=m2){
    d_minutos = (24*60) - (m1-m2);
    }
    if (h1>h2){
    d_minutos = (24-h1)*60 + h2*60 - (m1-m2);
    }printf("%d\n",d_minutos);
}
}
}
}

