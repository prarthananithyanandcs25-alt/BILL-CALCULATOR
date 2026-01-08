#include <stdio.h>
#define HEIGHT 27
int main()
{
int quantity;
float price, total, discount = 0, gst, final_bill;
for(int i=0;i<HEIGHT;i++)
printf("^");
// Step 2: Display welcome message

printf("Welcome to college canteen\n\n");
// Step 3: Input quantity
printf("Enter quantity of items: ");
scanf("%d", &quantity);
// Step 4: Input price per item
printf("Enter price per item: ");
scanf("%f", &price);
// Step 5: Validate input
if (quantity <= 0 || price <= 0)
{
printf("Invalid input\n");
return 0;
}
// Step 6: Calculate total amount
total = quantity * price;
// Step 7: Apply discount
if (total >= 1000)
discount = total * 0.15;
else if (total >= 500)
discount = total * 0.10;
else
discount = total * 0.05;
// Step 8: Calculate GST (18%)
gst = 0.18 * (total - discount);
// Step 9: Calculate final bill
final_bill = total - discount + gst;
// Step 10: Display bill details
printf("\nBill Details:\n");
printf("Total Amount   : %.2f\n", total);
printf("Discount       : %.2f\n", discount);
printf("GST (18%%): %.2f\n", gst);
printf("Final Bill: %.2f\n", final_bill);
// Step 11: Thank you message
printf("\nThank you! Visit again.\n\n");
for(int i=0;i<HEIGHT;i++)
{
printf("^");
}


    // Step 12: Stop
  return 0;
}
