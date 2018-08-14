#include <iostream>
#include <cstdlib>
#include <pthread.h>

using namespace std;

#define NUM_THREADS 5

struct thread_data
{
    int thread_id;
    char *message;
};

void *PrintHello(void *threadarg)
{
    // struct thread_data *my_data;
    thread_data *my_data;
    // my_data = (struct thread_data *) threadarg;
    my_data = (thread_data *) threadarg;

    printf("Thread ID : %d\n", my_data->thread_id);
    printf("Message : %s\n", my_data->message);
    pthread_exit(NULL);
}

int main(int argc, char const *argv[])
{
    pthread_t threads[NUM_THREADS];
    // struct thread_data td[NUM_THREADS];
    thread_data td[NUM_THREADS];
    int rc;
    int i;

    for (i = 0; i < NUM_THREADS; ++i)
    {
        printf("main() : creating thread, %d\n", i);
        td[i].thread_id = i;
        td[i].message = (char *)"This is message";
        rc = pthread_create(&threads[i], NULL, PrintHello, (void *)&td[i]);
        if (rc)
        {
            printf("Error:unable to create thread,%d\n", rc);
        }
    }
    pthread_exit(NULL);
    return 0;
}