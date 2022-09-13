#include<stdio.h>

// 顺序输出数组元素
void trace(int A[],int N)
{
    int i;
    for(i=0; i < N; i++)
    {
        if (i > 0)
            printf(" ");
        printf("%d",A[i]);
    }
    printf("\n");
}

// 插入排序（0起点数组）
void InsertionSort(int A[],int N)
{   int j,v;
    for (int i = 1; i < N; i++)
    {
        v = A[i];       // 临时保存未排序部分第一个元素
        j = i -1;
        while(j >= 0 && A[j] > v)
        {
            A[j+1] = A[j];      // 已排序部分整体后移
            j--;
        }
        A[j+1] = v;             // v的值放到合适的位置
        trace(A,N);              // 输出当前排序结果
    }
}


int main()
{
    int N,i,j;
    int A[100];

    scanf("%d",&N);
    for(i = 0; i < N; i++)
    {
        scanf("%d",&A[i]);
    }

    trace(A,N);
    
    InsertionSort(A,N);

    return 0;

}


