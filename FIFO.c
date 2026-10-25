#include <stdio.h>

#define CAP 3

int q[CAP], front = 0, n = 0;

void addJob(int job) {
    if (n == CAP) {
        printf("Evict job %d (oldest)\n", q[front]);
        front = (front + 1) % CAP;
        n--;
    }

    q[(front + n) % CAP] = job;
    n++;
    printf("Queued Job %d\n", job);
}

int main() {
    int jobs[] = {101, 102, 103, 104, 105};

    for (int i = 0; i < 5; i++) {
        addJob(jobs[i]);
    }

    return 0;
}
