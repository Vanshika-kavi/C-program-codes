#include<stdio.h>
float total_amount();
main()
{
    float principal,time,simple_interest;
    printf("Enter principal and time:");
    scanf("%f %f",&principal,&time);
    total_amount(principal,time);

}
     float total_amount(principal,time)
    {
        float rate;
        float simple_interest;
        if (principal<5000)
        {
            if(time=6)
        {
            rate=6.5;
            simple_interest=(principal*time*rate)/100;
            total_amount=principal+simple_interest;
            printf("Simple Interest = %.2f\n", simple_interest);
            printf("total amount=%.2f\n",total_amount);
        }
        else if(time=1)
            {
                rate=7;
                simple_interest=(principal*time*rate)/100;
                total_amount=principal+simple_interest;
                printf("Simple interest=%.2\n",simple_interest);
                printf("total amount=%.2f\n",total_amount);
              }
        else if(time=2)
        {
            rate=2;
            simple_interest=(principal*time*rate)/100;
            total_amount=principal+simple_interest;
            printf("Simple interest=%.2\n",simple_interest);
            printf("total amount=%.2f\n",total_amount);

        }
        }

    }
