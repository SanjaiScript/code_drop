#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

typedef struct {

    int start;
    int end;
    int* array;

} container;

typedef struct {
    int start;
    int end;
} size_and_end ;

void* sum_and_max(void* value ) {

    //lock
    //function fro dum and sum_and_max
    //unlock

}

int main(int argc, char** argv) {

    pthread_t tid[5];
    container thread_container;
    size_and_end array_of_limits[5];
    int n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);

    thread_container.array = malloc(n*sizeof(int));

    for ( int i = 0 ; i < n ; i++ ) {
        thread_container.array[i] = i+1;
    }

    array_of_limits[0].start = 0;
    array_of_limits[0].end = (n/5);
    array_of_limits[1].start =  (n/5)+1;
    array_of_limits[1].end = 2*(n/5);
    array_of_limits[2].start =  (2*(n/5))+1;
    array_of_limits[2].end = 3*(n/5);
    array_of_limits[3].start = (()) 
    array_of_limits[3].end = 
    array_of_limits[4].start =  
    array_of_limits[4].end = 



    for ( int  i = 0 ; i < 5 ; i++ ) {

        // in the loop we have to assign value start and end

        pthread_create(&tid[0],NULL,sum_and_max,&thread_container);

    }


    // use join 5 times

}
