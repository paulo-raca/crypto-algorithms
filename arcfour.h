/*********************************************************************
* Filename:   arcfour.h
* Author:     Brad Conte (brad AT bradconte.com)
* Copyright:
* Disclaimer: This code is presented "as is" without any guarantees.
* Details:    Defines the API for the corresponding ARCFOUR implementation.
*********************************************************************/

#ifndef ARCFOUR_H
#define ARCFOUR_H

/*************************** HEADER FILES ***************************/
#include <stddef.h>
#include <inttypes.h>

/*********************** FUNCTION DECLARATIONS **********************/
#ifdef __cplusplus
extern "C" {
#endif

// Input: state - the state used to generate the keystream
//        key - Key to use to initialize the state
//        len - length of key in bytes (valid lenth is 1 to 256)
void arcfour_key_setup(uint8_t state[], const uint8_t key[], int len);

// Pseudo-Random Generator Algorithm
// Input: state - the state used to generate the keystream
//        out - Must be allocated to be of at least "len" length
//        len - number of bytes to generate
void arcfour_generate_stream(uint8_t state[], uint8_t out[], size_t len);

// Test function
int rc4_test();

#ifdef __cplusplus
} // extern "C"
#endif

#endif   // ARCFOUR_H
