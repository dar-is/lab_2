#include <stdio.h>
#include <locale.h> //второй класс х первый 2х
int main()
{
    setlocale(LC_ALL, "RUS");
    int passengers = 1000, price = 7800;
    int pass2 = passengers * 3 / 4;
    int pass1 = passengers * 1 / 4;
    int price1 = pass2 * price;
    int price2 = pass1 * (2 * price);
    int z = price1 + price2;
    printf("\nвсего денег = %d рублей", z);
    return 0;
}