//
// Created by kiloo on 16.1.26.
//

#ifndef GLOOP_LANG_CHUNK_H
#define GLOOP_LANG_CHUNK_H

#include "common.h"

typedef enum {
    OP_RETURN,
} OpCode;

typedef struct {
    int count;
    int capacity;
    uint8_t* code;
} Chunk;

void init_chunk(Chunk* chunk);
void free_chunk(Chunk* chunk);
void write_chunk(Chunk* chunk, uint8_t byte);

#endif //GLOOP_LANG_CHUNK_H