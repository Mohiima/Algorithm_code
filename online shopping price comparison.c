//An online shopping platform wants to display products from the lowest price to the highest price so that customers can easily find affordable items.
//Develop a C program that:
//1. Accepts the number of products.
//2. Takes each product's name and price as input.
//3. Uses the Bubble Sort algorithm to arrange the products in ascending order based on price.
//4. Displays the sorted product list.

#include <stdio.h>
#include <string.h>
struct Product
{
char name[50];
float price;
};
int main()
{
struct Product p[100], temp;
int n, i, j;
printf("Enter number of products: ");
scanf("%d", &n);
printf("Enter Product Name and Price:\n");
for(i = 0; i < n; i++)
{
scanf("%s %f", p[i].name, &p[i].price);
}
for(i = 0; i < n - 1; i++)
{
for(j = 0; j < n - i - 1; j++)
{
if(p[j].price > p[j + 1].price)
{
temp = p[j];
p[j] = p[j + 1];
p[j + 1] = temp;
}
}
}
    printf("\nProducts Sorted by Price\n");
    printf("...............................\n");
    printf("Product Name\tPrice\n");
    printf("...............................\n");

    for(i = 0; i < n; i++)
    {
        printf("%-15s %.0f\n", p[i].name, p[i].price);
    }

    return 0;
}
