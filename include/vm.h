//
// Created by kiloo on 16.1.26.
//

#ifndef GLOOP_LANG_VM_H
#define GLOOP_LANG_VM_H

#include "chunk.h"

typedef struct {
    Chunk* chunk;
    uint8_t* ip;
} VM;

typedef enum {
    INTERPRET_OK,
    INTERPRET_COMPILE_ERROR,
    INTERPRET_RUNTIME_ERROR,
} InterpretResult;

void init_vm();
void free_vm();
InterpretResult interpret(Chunk* chunk);

#endif //GLOOP_LANG_VM_H