#include <stdio.h>
#include <omp.h>
#define N 10
int main(int argc, char* argv[])
    {
    int a[N];
    int i;
    // 1) Create the OpenMP parallel region
    #pragma parallel omp
    {
            // 1.1) Create the for construct and initialise the array elements
            #pragma omp for
                for (i=0;i<N;i++){
                    a[i]=i*i;
                }
            // 2) Print the array elements
            #pragma omp for
                for (i=0;i<N;i++){
                    printf("a[%d] = %d\n",i,a[i]);
                }
    }
    return 0;
}