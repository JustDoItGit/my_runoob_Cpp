#include <iostream>
#include <cstdlib>
#include <pthread.h>
#include <unistd.h>

using namespace std;

#define NUM_THREADS 5

void *wait(void *t)
{
    int i;
    long tid;
    tid = (long)t;

    // tid = (long)t;

    sleep(1);
    // cout << "Sleeping in thread " << endl;
    // cout << "Thread with id : " << tid << "  ...exiting " << endl;
    printf("Sleeping in thread\n Thread with id : %lu  ...exiting\n", tid);
    // printf("Thread with id : %d  ...exiting", *tid);
    // cout << "Thread with id : " << tid << "  ...exiting " << endl;
    pthread_exit(NULL);
}

int main(int argc, char const *argv[])
{
    int rc;
    int i;
    pthread_t threads[NUM_THREADS];
    pthread_attr_t attr;
    void *status;

    // 初始化并设置线程为可连接的（joinable)
    pthread_attr_init(&attr);
    pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_JOINABLE);

    for (i = 0; i < NUM_THREADS; ++i)
    {
        printf("main() : creating thread, %d\n", i);
        rc = pthread_create(&threads[i], NULL, wait, (void *)&i);
        if (rc)
        {
            printf("Error:unable to create thread, %d\n", rc);
            exit(-1);
        }
    }

    // 删除属性，并等待其他线程
    pthread_attr_destroy(&attr);
    for (i = 0; i < NUM_THREADS; ++i)
    {
        rc = pthread_join(threads[i], &status);
        if (rc)
        {
            printf("Error:unable to join, %d\n", rc);
            exit(-1);
        }
        printf("Main: completed thread id: %d", i);
        // printf("  exiting with status :%s\n", status);
        cout << "  exiting with status :" << status << endl;
    }
    printf("Main: program exiting.\n");
    pthread_exit(NULL);
    return 0;
}