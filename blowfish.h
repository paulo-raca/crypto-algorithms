/*********************************************************************
* Filename:   blowfish.h
* Author:     Brad Conte (brad AT bradconte.com)
* Copyright:
* Disclaimer: This code is presented "as is" without any guarantees.
* Details:    Defines the API for the corresponding Blowfish implementation.
*********************************************************************/

#ifndef BLOWFISH_H
#define BLOWFISH_H

/*************************** HEADER FILES ***************************/
#include <stddef.h>
#include <inttypes.h>

/****************************** MACROS ******************************/
#define BLOWFISH_BLOCK_SIZE 8           // Blowfish operates on 8 bytes at a time

typedef struct {
   uint32_t p[18];
   uint32_t s[4][256];
} BLOWFISH_KEY;

/*********************** FUNCTION DECLARATIONS **********************/
#ifdef __cplusplus
extern "C" {
#endif

void blowfish_key_setup(const uint8_t user_key[], BLOWFISH_KEY *keystruct, size_t len);
void blowfish_encrypt(const uint8_t in[], uint8_t out[], const BLOWFISH_KEY *keystruct);
void blowfish_decrypt(const uint8_t in[], uint8_t out[], const BLOWFISH_KEY *keystruct);

// Test function
int blowfish_test();

#ifdef __cplusplus
} // extern "C"
#endif

#endif   // BLOWFISH_H
