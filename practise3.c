#include <stdio.h>
#include <math.h>
int main() {
    int r;
    printf("Введіть кількість розрядів р: ");
    scanf("%d", &r);
    long long result = countNumbers(r);
    // результат
    printf("Кількість чисел із %d розрядів: %lld\n", r, result);
    return 0;
}
// обчислення кількості чисел з p розрядів, де не стоять поруч три однакові цифри
unsigned long long count_numbers(int p) {
    if (p < 3) {
        // для p < 3 всі числа допустимі
        return (unsigned long long)pow(2, p);
    }
    // загалом к-сть
    unsigned long long total_numbers = (unsigned long long)pow(2, p);
    // числа з трьома однаковими цифрами поруч
    unsigned long long invalid_numbers = (unsigned long long)(p - 2);
    
    return total_numbers - invalid_numbers;
}