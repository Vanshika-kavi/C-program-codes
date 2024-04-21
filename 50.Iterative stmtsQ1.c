#include <stdio.h>
int main() {
int couponNum;
printf("Enter the customer's coupon number: ");
scanf("%d", &couponNum);

int sumOfDigits = (couponNum % 10) + ((couponNum / 10) % 10);
if (sumOfDigits % 2 == 0) {
    printf("Customer is eligible for additional discount!\n");
} else {
    printf("Customer is not eligible for additional discount.\n");
}
return 0;
}
