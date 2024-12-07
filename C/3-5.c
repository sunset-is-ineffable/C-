#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DAYS_IN_YEAR 365
#define MONTHS_IN_YEAR 12
int main() {
    float pa[DAYS_IN_YEAR];
    int mdays[12] = {31, 28, 31, 30, 31, 30, 31,31, 30, 31, 30, 31,};
    float min[12], max[12], avg[12];
    // 初始化随机数生成器
    srand((unsigned int)time(NULL));
    // 生成随机水位数据
    for (int i = 0; i < DAYS_IN_YEAR; i++) {
        pa[i] = (float)(rand() % 10000) / 100.0;
    }
    // 初始化每个月的最大值、最小值和总和
    for (int m = 0; m < MONTHS_IN_YEAR; m++) {
        min[m] = pa[m * 31];
        max[m] = pa[m * 31];
        avg[m] = 0;
    }
    // 计算每个月的最大值、最小值和总和
    for (int i = 0; i < DAYS_IN_YEAR; i++) {
        int month = i / (DAYS_IN_YEAR / MONTHS_IN_YEAR);
        if (pa[i] < min[month]) min[month] = pa[i];
        if (pa[i] > max[month]) max[month] = pa[i];
        avg[month] += pa[i];
    }
    // 计算每个月的平均值
    for (int m = 0; m < MONTHS_IN_YEAR; m++) {
        avg[m] /= mdays[m];
    }

    // 输出结果
    printf("月份\t最大值\t最小值\t月均值\n");
    for (int m = 0; m < MONTHS_IN_YEAR; m++) {
        printf("%d\t%.2f\t%.2f\t%.2f\n", m + 1, max[m], min[m], avg[m]);
    }
    return 0;
}