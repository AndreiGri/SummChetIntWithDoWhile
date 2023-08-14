#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    // Изменение кодировки консоли:
    system("chcp 1251 > nul");
    int n, s = 0, k = 2;
    cout << "Введите верхнюю границу слогаемых натуральных чётных чисел: ";
    cin >> n;
    do {
        if (k % 2 == 0) {
            s += k;
        }
        k++;
    } while (k <= n);
    // Вывод решения:
    cout << "Сумма натуральных чётных чисел от 0 до " << n << ": " << s << endl;
    // Задержка окна консоли:
    system("pause > nul");
    return 0;
}
