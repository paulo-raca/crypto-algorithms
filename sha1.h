/*********************************************************************
* Filename:   sha1.h
* Author:     Brad Conte (brad AT bradconte.com)
* Copyright:
* Disclaimer: This code is presented "as is" without any guarantees.
* Details:    Defines the API for the corresponding SHA1 implementation.
*********************************************************************/

#ifndef SHA1_H
#define SHA1_H

/*************************** HEADER FILES ***************************/
#include <stddef.h>
#include <inttypes.h>

/****************************** MACROS ******************************/
#define SHA1_BLOCK_SIZE 20              // SHA1 outputs a 20 byte digest

typedef struct {
	uint8_t data[64];
	uint32_t datalen;
	unsigned long long bitlen;
	uint32_t state[5];
	uint32_t k[4];
} SHA1_CTX;

/*********************** FUNCTION DECLARATIONS **********************/
#ifdef __cplusplus
extern "C" {
#endif

void sha1_init(SHA1_CTX *ctx);
void sha1_update(SHA1_CTX *ctx, const uint8_t data[], size_t len);
void sha1_final(SHA1_CTX *ctx, uint8_t hash[]);

// Test function
int sha1_test();

#ifdef __cplusplus
} // extern "C"
#endif

#endif   // SHA1_H
