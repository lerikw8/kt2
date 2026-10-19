#include <stdio.h>

int main() {
    int ages[10] = {25, 30, 25, 45, 30, 25, 60, 45, 30, 25};
    int n = 10;

    int mode = ages[0];
    int max_count = 0;

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (ages[j] == ages[i]) count++;
        }
        if (count > max_count) {
            max_count = count;
            mode = ages[i];
        }
    }

    printf("Самый частый возраст: %d (встречается %d раз)\n", mode, max_count);
    return 0;
}
