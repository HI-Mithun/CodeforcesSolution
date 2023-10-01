#include <stdio.h>
#include <limits.h>

int main() {
    int array[100];
    int size;
    scanf("%d", &size);

    int smallest = INT_MAX;
    int secondSmallest = INT_MAX;

    for (int i = 0; i < size; i++) {
            scanf("%d", &array[i]);
            if(size==1)
            {
                printf("NO");
                return 0;
            }
        else if (array[i] < smallest) {
            secondSmallest = smallest;
            smallest = array[i];
        } else if (array[i] < secondSmallest && array[i] > smallest) {
            secondSmallest = array[i];
        }

    }

    printf("%d\n", secondSmallest);

    return 0;
}
