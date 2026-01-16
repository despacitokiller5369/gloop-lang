//
// Created by kiloo on 16.1.26.
//

#ifndef GLOOP_LANG_DEBUG_H
#define GLOOP_LANG_DEBUG_H

#include "chunk.h"

void disassemble_chunk(Chunk* chunk, const char* name);
int disassemble_instruction(Chunk* chunk, int offset);

#endif //GLOOP_LANG_DEBUG_H