#include <stdio.h>

int main() {
    int balance[8] = {100, -50, 200, -30, -70, 150, -20, 80};
    int n = 8;

    int running = balance[0];
    int min_running = running;
    int min_day = 1;

    for (int i = 1; i < n; i++) {
        running += balance[i];
        if (running < min_running) {
            min_running = running;
            min_day = i + 1;
        }
    }

    printf("Итоговый баланс: %d\n", running);
    printf("Минимальный баланс: %d (после дня %d)\n", min_running, min_day);

    return 0;
}
