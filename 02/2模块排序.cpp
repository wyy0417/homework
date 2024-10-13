#include <stdio.h>
#include <stdlib.h>

// ��������ıȽϺ���
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int N;
    printf("������������N��"); 
    scanf("%d", &N);  // ��ȡ������ N

    int *arr = (int *)malloc(N * sizeof(int));  // ��̬���������ڴ�
    if (arr == NULL) {
        printf("�ڴ����ʧ��\n");
        return 1;
    }

    // ��ȡ N ��������
    printf("����N����������"); 
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // ʹ�ÿ�������������������
    qsort(arr, N, sizeof(int), compare);

    // �������������
    printf("���������飺"); 
    for (int i = 0; i < N; i++) {
        printf("%d", arr[i]);
        if (i < N - 1) {
            printf(" ");  // ��֮���ÿո����
        }
    }
    printf("\n");  // ��ĩ����

    // �ͷŶ�̬������ڴ�
    free(arr);

    return 0;
}

