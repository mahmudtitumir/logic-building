#include <stdio.h>
/*
struct time
{
    int hours, minutes, seconds;
};

void setTime(struct time* t, int h, int m, int s)
{
    t->hours = h;
    t->minutes = m;
    t->seconds = s;
}

int main() {
    struct time t1;
    setTime(&t1, 10, 20, 30);
    printf("Time: %d:%d:%d\n", t1.hours, t1.minutes, t1.seconds);
    return 0;
}
*/

struct time
{
    int hours, minutes, seconds;
};

struct time setTime(int h, int m, int s) {
    struct time t;
    t.hours = h;
    t.minutes = m;
    t.seconds = s;
    return t;
};

int main() {
    struct time t1 = setTime(10, 20, 30);
    printf("Time: %d:%d:%d\n", t1.hours, t1.minutes, t1.seconds);
    return 0;
}