#include <stdio.h>

#include <openssl/opensslv.h>

int main(void)
{
	printf("Pouet world\n");

	printf("OpenSSL version: 0x%08lX\n", OPENSSL_VERSION_NUMBER);
	return 0;
}
