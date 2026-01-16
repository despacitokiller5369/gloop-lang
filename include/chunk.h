//
// Created by kiloo on 16.1.26.
//

#ifndef GLOOP_LANG_CHUNK_H
#define GLOOP_LANG_CHUNK_H

#include "common.h"
#include "value.h"

typedef enum {
    OP_CONSTANT,
    OP_RETURN,
} OpCode;

typedef struct {
    int count;
    int capacity;
    uint8_t* code;
    ValueArray constants;
} Chunk;

void init_chunk(Chunk* chunk);
void free_chunk(Chunk* chunk);
void write_chunk(Chunk* chunk, uint8_t byte);
int add_constant(Chunk* chunk, Value value);

#endif //GLOOP_LANG_CHUNK_H