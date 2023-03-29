#ifndef clox_chunk_h
#define clox_chunk_h

#include "common.h"

#define foreach_opcode   \
    _(RETURN, "return"), \
        _(test, "test"),

typedef enum
{
#define _(code, str) OP_##code
    foreach_opcode
#undef _
        OP_N_CODE,
} OpCode;

typedef struct
{
    int count;
    int capacity;
    uint8_t *code;
} Chunk;

void initChunk(Chunk *chunk);

void writeChunk(Chunk *chunk, uint8_t byte);

void freeChunk(Chunk *chunk);
#endif