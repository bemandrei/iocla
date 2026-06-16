#include <stdio.h>

int main(void) {
    int v[] = {1, 2, 15, 51, 53, 66, 202, 7000};
    int dest = v[2]; /* 15 */
    int start = 0;
    int end = sizeof(v) / sizeof(int) - 1;
    int found = 0;
    int mid;

binary_search:
    if (start > end)
        goto not_found;
    mid = (start + end) / 2;
    if (v[mid] == dest) {
        found = 1;
        goto found;
    } else if (v[mid] < dest) {
        start = mid + 1;
        goto binary_search;
    } else {
        end = mid - 1;
        goto binary_search;
    }

not_found:
    printf("not found.\n");
    goto end_prog;

found:
    printf("index %d.\n", mid);
    goto end_prog;

end_prog:
    return 0;
}

