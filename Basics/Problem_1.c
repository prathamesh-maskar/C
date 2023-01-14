#include <stdio.h>

void average(int a,int b,int c);

int main(){
    int a,b,c;
    printf("Enter Three Numbers = ");
    scanf("%d%d%d",&a,&b,&c);
    average(a,b,c);

}
void average(int a,int b,int c){
    int avg;
    avg = (a+b+c)/3;
    printf("Average of given numbers = %d",avg);
}
