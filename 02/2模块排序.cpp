#include <stdio.h>
#include <stdlib.h>

// 快速排序的比较函数
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int N;
    printf("请输入正整数N："); 
    scanf("%d", &N);  // 读取正整数 N

    int *arr = (int *)malloc(N * sizeof(int));  // 动态分配数组内存
    if (arr == NULL) {
        printf("内存分配失败\n");
        return 1;
    }

    // 读取 N 个正整数
    printf("输入N个正整数："); 
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // 使用快速排序对数组进行排序
    qsort(arr, N, sizeof(int), compare);

    // 输出排序后的数组
    printf("排序后的数组："); 
    for (int i = 0; i < N; i++) {
        printf("%d", arr[i]);
        if (i < N - 1) {
            printf(" ");  // 数之间用空格隔开
        }
    }
    printf("\n");  // 行末换行

    // 释放动态分配的内存
    free(arr);

    return 0;
}

