#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static const uint64_t mask8[] = {
    0x80,   0x40,   0x20,   0x10,
    0x8,    0x4,    0x2,    0x1
};

static const uint64_t masks16[] = {
    0x8000, 0x4000, 0x2000, 0x1000,
    0x800,  0x400,  0x200,  0x100,
    0x80,   0x40,   0x20,   0x10,
    0x8,    0x4,    0x2,    0x1
};

static const uint64_t mask32[] = {
    0x8000000,  0x4000000,  0x2000000,  0x1000000,
    0x800000,   0x400000,   0x200000,   0x100000,
    0x80000,    0x40000,    0x20000,    0x10000,
    0x8000,     0x4000,     0x2000,     0x1000,
    0x800,      0x400,      0x200,      0x100,
    0x80,       0x40,       0x20,       0x10,
    0x8,        0x4,        0x2,        0x1
};

static const uint64_t mask64[] = {
    0x8000000000000000, 0x4000000000000000, 0x2000000000000000, 0x1000000000000000,
    0x800000000000000,  0x400000000000000,  0x200000000000000,  0x100000000000000,
    0x80000000000000,   0x40000000000000,   0x20000000000000,   0x10000000000000,
    0x8000000000000,    0x4000000000000,    0x2000000000000,    0x1000000000000,
    0x800000000000,     0x400000000000,     0x200000000000,     0x100000000000,
    0x80000000000,      0x40000000000,      0x20000000000,      0x10000000000,
    0x8000000000,       0x4000000000,       0x2000000000,       0x1000000000,
    0x800000000,        0x400000000,        0x200000000,        0x100000000,
    0x80000000,         0x40000000,         0x20000000,         0x10000000,
    0x8000000,          0x4000000,          0x2000000,          0x1000000,
    0x800000,           0x400000,           0x200000,           0x100000,
    0x80000,            0x40000,            0x20000,            0x10000,
    0x8000,             0x4000,             0x2000,             0x1000,
    0x800,              0x400,              0x200,              0x100,
    0x80,               0x40,               0x20,               0x10,
    0x8,                0x4,                0x2,                0x1
};

uint64_t permutation(uint64_t, int *, size_t, char *);