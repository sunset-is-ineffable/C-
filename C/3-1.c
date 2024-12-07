#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h> // 引入数学库，用于计算平方根
#define N 100 // 定义数组大小为100
// 计算标准差的函数
float stddev(float x[], int n) {
    float mean = 0, sum = 0; // 定义平均值和方差和变量
    // 计算平均值
    for (int i = 0; i < n; i++) mean += x[i];
    mean /= n;
    // 计算方差
    for (int i = 0; i < n; i++) sum += (x[i] - mean) * (x[i] - mean);
    return sqrt(sum / n); // 返回方差的平方根，即标准差
}
int main() {
    float a[N]; // 定义并初始化一个大小为N的数组
    srand(time(0)); // 设置随机数种子
    // 生成N个0-1之间的随机浮点数
    for (int i = 0; i < N; i++) a[i] = (float)rand() / RAND_MAX;
    // 计算并打印标准差
    printf("标准差为：%f\n", stddev(a, N));
    return 0;
}
