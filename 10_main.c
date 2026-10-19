#include <stdio.h>

int main() {
    float prices[6] = {199.99, 49.50, 1250.00, 89.90, 350.75, 15.00};
    int n = 6;

    float sum = 0;
    for (int i = 0; i < n; i++) sum += prices[i];
    float avg = sum / n;

    printf("Средняя цена: %.2f\n", avg);
    printf("Цены выше среднего: ");
    for (int i = 0; i < n; i++) {
        if (prices[i] > avg) {
            printf("%.2f ", prices[i]);
        }
    }
    printf("\n");

    return 0;
}
