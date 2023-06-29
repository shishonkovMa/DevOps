#include <stdlib.h>

#include "encryptor.h"

int encrypt(unsigned char* input, size_t in_size,
	    unsigned char* output) {
	for (size_t i = 0; i < in_size; ++i) {
		output[i] = input[i] ^ ENC_SEED;
	}

	return 0;
}
