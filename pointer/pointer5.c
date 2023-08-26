#include<stdio.h>
void sumandavg(int a,int b,int *sum,float *avg){
    *sum = a+b;
    *avg = (float)*sum/2; // type casting
}
int main(){
    int i=4,j=3,sum;
    float avg;
    sumandavg(i,j,&sum,&avg);
    printf(" sum is %d\n",sum);
    printf(" avg is %f\n",avg);

return 0;
}