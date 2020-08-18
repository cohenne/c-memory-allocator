//
// Created by a on 8/18/20.
//

#ifndef MEMORY_ALLOC_MEMORY_H
#define MEMORY_ALLOC_MEMORY_H

typedef struct MemoryAllocator MemoryAllocator;


/* memoryPool is a ptr to an already-existing large memoryblock */
MemoryAllocator* MemoryAllocator_init(void* memoryPool, size_t size);


/* Returns a ptr to the memoryPool */
void* MemoryAllocator_release(MemoryAllocator* allocator);


void* MemoryAllocator_allocate(MemoryAllocator* allocator, size_t size);


/* Merge the next adjacent block is free */
void MemoryAllocator_free(MemoryAllocator* allocator, void* ptr);


/* Merges all adjacent free blocks, and returns the size oflargest free block */
size_t MemoryAllocator_optimize(MemoryAllocator* allocator);

#endif //MEMORY_ALLOC_MEMORY_H
