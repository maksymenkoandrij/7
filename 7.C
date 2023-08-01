#include <stdio.h>
#include <math.h>

int intersectingPoints(int x1, int y1, int r1, int x2, int y2, int r2) {
    // Обчислення відстані між центрами коліс
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Обробка різних випадків для визначення кількості точок перетину
    if (distance > r1 + r2) {
        // Кола розташовані далеко одне від одного, немає точок перетину
        return 0;
    } else if (distance == r1 + r2) {
        // Кола торкаються ззовні, одна точка перетину
        return 1;
    } else {
        if (distance <= abs(r1 - r2)) {
            // Одне коло знаходиться всередині іншого, немає точок перетину
            return 0;
        } else {
            // Кола перетинаються в двох точках
            return 2;
        }
    }
}

int main() {
    int x1, y1, r1, x2, y2, r2;

    // Ввід координат і радіусів коліс
    printf("Введіть координати та радіус першого кола (x1 y1 r1): ");
    scanf("%d %d %d", &x1, &y1, &r1);

    printf("Введіть координати та радіус другого кола (x2 y2 r2): ");
    scanf("%d %d %d", &x2, &y2, &r2);

    // Виклик функції та вивід результату
    int result = intersectingPoints(x1, y1, r1, x2, y2, r2);
    if (result == -1) {
        printf("Кола мають нескінченну кількість точок перетину (-1)\n");
    } else {
        printf("Кількість точок перетину: %d\n", result);
    }

    return 0;
}
#include <stdio.h>
#include <math.h>

int intersectingPoints(int x1, int y1, int r1, int x2, int y2, int r2) {
    // Обчислення відстані між центрами коліс
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Обробка різних випадків для визначення кількості точок перетину
    if (distance > r1 + r2) {
        // Кола розташовані далеко одне від одного, немає точок перетину
        return 0;
    } else if (distance == r1 + r2) {
        // Кола торкаються ззовні, одна точка перетину
        return 1;
    } else {
        if (distance <= abs(r1 - r2)) {
            // Одне коло знаходиться всередині іншого, немає точок перетину
            return 0;
        } else {
            // Кола перетинаються в двох точках
            return 2;
        }
    }
}

int main() {
    int x1, y1, r1, x2, y2, r2;

    // Ввід координат і радіусів коліс
    printf("Введіть координати та радіус першого кола (x1 y1 r1): ");
    scanf("%d %d %d", &x1, &y1, &r1);

    printf("Введіть координати та радіус другого кола (x2 y2 r2): ");
    scanf("%d %d %d", &x2, &y2, &r2);

    // Виклик функції та вивід результату
    int result = intersectingPoints(x1, y1, r1, x2, y2, r2);
    if (result == -1) {
        printf("Кола мають нескінченну кількість точок перетину (-1)\n");
    } else {
        printf("Кількість точок перетину: %d\n", result);
    }

    return 0;
}
