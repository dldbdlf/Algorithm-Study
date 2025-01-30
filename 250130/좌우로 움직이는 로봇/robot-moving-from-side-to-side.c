#include <stdio.h>
#include <stdlib.h>

struct move {
    int size;
    char direction;
};

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    
    struct move A[n], B[m];
    int time_a = 0, time_b = 0;

    for (int i = 0; i < n; ++i) {
        scanf("%d %c", &A[i].size, &A[i].direction);
        time_a += A[i].size;
    }
    for (int i = 0; i < m; ++i) {
        scanf("%d %c", &B[i].size, &B[i].direction);
        time_b += B[i].size;
    }

    int max_time = (time_a > time_b) ? time_a : time_b;

    int *a_distance = (int*)malloc((max_time + 1) * sizeof(int));
    int *b_distance = (int*)malloc((max_time + 1) * sizeof(int));

    a_distance[0] = 0;
    b_distance[0] = 0;

    int start_distance = 0, start_time = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 1; j <= A[i].size; ++j) {
            start_distance += (A[i].direction == 'R') ? 1 : -1;
            a_distance[start_time + j] = start_distance;
        }
        start_time += A[i].size;
    }
    for (int i = start_time; i <= max_time; ++i)
        a_distance[i] = start_distance;

    start_distance = 0;
    start_time = 0;
    for (int i = 0; i < m; ++i) {
        for (int j = 1; j <= B[i].size; ++j) {
            start_distance += (B[i].direction == 'R') ? 1 : -1;
            b_distance[start_time + j] = start_distance;
        }
        start_time += B[i].size;
    }
    for (int i = start_time; i <= max_time; ++i)
        b_distance[i] = start_distance;

    int before = 0;
    int result = 0;

    for (int i = 1; i <= max_time; ++i) {
        if (a_distance[i] == b_distance[i]) {
            if (before == 0) {  // 새로운 충돌이 발생한 경우만 카운트
                result++;
                before = 1;  // 충돌 상태를 유지
            }
        } else {
            before = 0;  // 충돌이 끝나면 다시 리셋
        }
    }

    printf("%d\n", result);

    free(a_distance);
    free(b_distance);

    return 0;
}
