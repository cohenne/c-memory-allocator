#include <stdio.h>
#include <stdlib.h>
#include "memory.h"

int main(){
    void* temp = malloc(60);
    MemoryAllocator* heap = MemoryAllocator_init(temp,60);
    MemoryAllocator_allocate(heap,8);
    printf("%ld",MemoryAllocator_optimize(heap));
    temp = MemoryAllocator_release(heap);
    free(temp);
    return 0;
}