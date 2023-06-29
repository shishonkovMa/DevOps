#include <string.h>
#include <stdlib.h>

#include "encryptor.h"

int main(int argc, char** argv) {
	if (argc <3)
		return -1;

	size_t data_size = atoi(argv[1]);

	unsigned char* input = (unsigned char*)malloc(data_size);
	memcpy(input, argv[2], data_size);

	unsigned char* output = (unsigned char*)malloc(data_size);
        encrypt(input, data_size, output);

	printf("Encrypted: %s\n", output);

	unsigned char* decrypted = (unsigned char*)malloc(data_size);
        encrypt(output, data_size, decrypted);

	printf("Decrypted: %s\n", decrypted);

	free(input);
	free(output);
	free(decrypted);

	return 0;
}
