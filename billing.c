#include <stdio.h>
#include <conio.h>
#include <time.h>
int main()
{
int a = 30, b = 15, c = 10, d = 10, e, f, g, h, total, i, j, k, l, m, discount, id;
char s[40];
float amount;
printf("\t\twelcome to VDIT co-operative store \n");
time_t tm;
time(&tm);
printf("\t\t\t\t\t\t\tdate & time = %s \n", ctime(&tm));
printf("enter the customer mobile number-\t\n");    // customer mobile is taken as id
scanf("%d", &id);
printf("enter the customer name \n",&s);
scanf("%s",&s);
printf("PRODUCT AVILABLE AND THEIR PRICE\n\n");
printf("\t\t the price of Pen\t%d\n", a);
printf("\t\t the price of Scale\t%d\n", b);
printf("\t\t the price of Eraser \t%d\n", c);
printf("\t\t the price of Pencil \t%d\n\n", d);
printf("enter the quantity Pen\n", &e);
scanf("%d", &e);
printf("enter the quantity Scale\n", &f);
scanf("%d", &f);
printf("enter the quantity Eraser\n", &g);
scanf("%d", &g);
printf("enter the quantity Pencil\n", &h);
scanf("%d", &h);
{
i = (a * e);
j = (b * f);
k = (c * g);
l = (d * h);
total = i + j + k + l;
amount = total + (0.17 * total);
m = amount * 0.05;
discount = amount - m;
}
FILE *fp;
fp = fopen("billingsyestemaccountss.txt", "a+");
printf("\nTHE BILL GENERATED\n\n");
printf("customer mobile number %d\n\n", id);
printf("The items purchased\n ");
printf("Product\tQuantity\t\tProduct Price\t\tTotal\n");
printf("Scale\t\t %d \t\t\t%d\t\t\t%d\n", f, b, j);
printf("Eraser \t\t %d \t\t\t%d \t\t\t%d\n ", g, c, k);
printf("Pen \t\t %d \t\t\t%d\t\t\t%d\n", e, a, i);
printf("Pencil \t\t %d \t\t\t%d\t\t\t%d\n", h, d, l);
printf("**********************************************************************************\n");
printf("The total=%d\n", total);
printf("The total price after tax applied=%f\n", amount); // tax aplied on goods purchased is 17%
printf("Discount is 5%%\n");
printf("%s has to pay =%d amount\n\n",s, discount);
printf("\t\t*******thank you for shoppping with us****************\n\n\n");
fprintf(fp, "THE BILL GENERATED\n\n");
fprintf(fp, "customer mobile number %d\n",id);
fprintf(fp, "The items purchased\n\n ");
fprintf(fp, "Product\tQuantity\t\tPrice\t\tTotal\n");
fprintf(fp, "Scale\t\t %d \t\t\t%d\t\t\t%d\n", f, b, j);
fprintf(fp, "Eraser \t\t %d \t\t\t\t%d \t\t\t%d\n ", g, c, k);
fprintf(fp, "Pen \t\t %d \t\t\t\t%d\t\t\t%d\n", e, a, i);
fprintf(fp, "Pencil \t\t %d \t\t\t\t%d\t\t\t%d\n", h, d, l);
fprintf(fp, 
"**********************************************************************************\n");
fprintf(fp, "The total=%d\n", total);
fprintf(fp, "The total price after tax applied=%f\n", amount);
fprintf(fp, "Discount is 5%%\n");
fprintf(fp, "%s has to pay =%d amount\n\n",s, discount);
fprintf(fp, "%s", "\t\t*******thank you for shoppping with us****************" );
fclose(fp);
return 0;
}