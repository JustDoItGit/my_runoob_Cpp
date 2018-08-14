#include <iostream>
#include <cstdlib>
#include <pthread.h>
#include <unistd.h>

using namespace std;

#define NUM_THREADS 5

void *PrintHello(void *threadid)
{
    // 对传入的参数进行强制类型转换，由无类型指针变为整形数指针，然后再读取
    int tid = *((int *)threadid);
    printf("Hello Runoob! 线程 ID, %d\n", tid);
    pthread_exit(NULL);
}

int main(int argc, char const *argv[])
{
    pthread_t threads[NUM_THREADS];
    int indexes[NUM_THREADS]; // 用数组来保存i的值
    int rc;
    int i;
    for (i = 0; i < NUM_THREADS; ++i)
    {
        printf("main(): 创建线程， %d\n", i);
        indexes[i] = i;
        // 传入的时候必须强制转换为void* 类型，即无类型指针
        rc = pthread_create(&threads[i], NULL, PrintHello, (void *) & (indexes[i]));
        if (rc)
        {
            printf("Error:无法创建线程, %d\n", rc);
            exit(-1);
        }
    }
    pthread_exit(NULL);
    return 0;
}