#include <stdio.h>

int main() {
    float principal, rate, time, simple_interest;
     principal=rand()%100+1;
    printf("principal:%.2f\n",principal);
    rate=rand()%100+1;
    printf("rate:%.2f\n",rate);
    time=rand()%100+1;
    printf("time:%.2f\n",time);


    simple_interest = (principal * rate * time) / 100;
{
    printf("Simple Interest = %.2f\n", simple_interest);
    return 0;
}
}
