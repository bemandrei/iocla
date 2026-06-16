#include <stdio.h>
int main(void)
{
	int v[] = {0xCAFEBABE, 0xDEADBEEF, 0x0B00B135, 0xBAADF00D, 0xDEADC0DE};
	printf("Parcurgere octet cu octet:\n");
	unsigned char *char_ptr = (unsigned char *)v;
	for (int i = 0; i < sizeof(v); i++) {
        	printf("%p -> 0x%x\n", char_ptr, *char_ptr);
        	char_ptr++;
    	}
    	printf("\nParcurgere doi octeți la un pas:\n");
    	char_ptr = (unsigned char *)v;
    	for (int i = 0; i < sizeof(v); i += 2) {
        	printf("%p -> 0x%x%x\n", char_ptr, *char_ptr, *(char_ptr + 1));
        	char_ptr += 2;
    	}
    	printf("\nParcurgere patru octeți la un pas:\n");
    	char_ptr = (unsigned char *)v;
    	for (int i = 0; i < sizeof(v); i += 4) {
        	printf("%p -> 0x%x%x%x%x\n", char_ptr, *char_ptr, *(char_ptr + 1), *(char_ptr + 2), *(char_ptr + 3));
        	char_ptr += 4;
   	}
    return 0;
}
