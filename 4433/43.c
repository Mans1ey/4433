#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "RUS");
    int n;
    printf("������� ����������� �����: ");
    scanf("%d", &n);
    int c = n % 10;    
    int a = n / 100;     
    int b = (n / 10) % 10; 
    int s = a + b + c; 
    int g = c * 100 + b * 10 + a;
    printf("��������� �����: %d, ������: %d, ����� ����: %d, ����� � �������� �������: %d\n",
        c, a, s, g);

    return 0;
}