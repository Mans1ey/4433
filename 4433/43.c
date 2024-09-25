#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "RUS");
    int n;
    printf("Введите трехзначное число: ");
    scanf("%d", &n);
    int c = n % 10;    
    int a = n / 100;     
    int b = (n / 10) % 10; 
    int s = a + b + c; 
    int g = c * 100 + b * 10 + a;
    printf("Последняя цифра: %d, первая: %d, сумма цифр: %d, число в обратном порядке: %d\n",
        c, a, s, g);

    return 0;
}