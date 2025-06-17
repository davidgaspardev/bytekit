#ifndef DEBUG
#include <stdio.h>
#endif

/*
 * cBytes library
 * Author: David Gaspar <davidgaspar.dev@gmail.com>
 */
#ifndef BYTEKIT_H
#define BYTEKIT_H

typedef char byte_t;
typedef byte_t *bytes_t;
typedef const byte_t *cbytes_t;

#ifndef bool
#define true (byte_t)1
#define false (byte_t)0
#endif

unsigned int length(cbytes_t arg);

int index_of(cbytes_t target, cbytes_t fragment);
byte_t equal(cbytes_t bytes_1, cbytes_t bytes_2);
byte_t copy(cbytes_t src, bytes_t dst, unsigned long sizeof_dst);
byte_t subcopy(cbytes_t src, unsigned int start_index, unsigned int end_index, bytes_t dst, unsigned long sizeof_dst);
byte_t subcopy_len(cbytes_t src, unsigned int dst_length, bytes_t dst, unsigned long sizeof_dst);
byte_t subcopy_index_len(cbytes_t src, unsigned int start_index, unsigned int dst_length, bytes_t dst, unsigned long sizeof_dst);

#endif