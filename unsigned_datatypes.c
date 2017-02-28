#include <stdint.h>  // to support uintX_t data types.
#include <stdio.h>
#include <inttypes.h>  // to support format specifiers.

unsigned long long g_value = 0xFFFFFFFFFFFFFFFF; // 18446744073709551615

int main() {
  // 1-byte --> [0 - 255] or [0x00 - 0xFF]
  uint8_t num8 = g_value;  // 255
  unsigned char numChar = g_value;  // 255
  printf("num8 = " "%" PRIu8 "\n", num8);
  printf("numChar = %u\n", numChar);

  // 2-bytes --> [0 - 65535] or [0x0000 - 0xFFFF]
  uint16_t  num16 = g_value;  // 65535
  unsigned short numShort = g_value;  // 65535
  printf("num16 = " "%" PRIu16 "\n", num16);
  printf("numShort = %u\n", numShort);

  // 4-bytes --> [0 - 4294967295] or [0x00000000 - 0xFFFFFFFF]
  uint32_t num32 = g_value;  // 4294967295
  unsigned int numInt = g_value;  // 4294967295
  printf("num32 = " "%" PRIu32 "\n", num32);
  printf("numInt = %u\n", numInt);

  // 8-bytes --> [0 - 18446744073709551615] or
  // [0x0000000000000000-0xFFFFFFFFFFFFFFFF]
  uint64_t num64 = g_value;  // 18446744073709551615
  unsigned long long numLongLong = g_value;  // 18446744073709551615
  printf("num64 = " "%" PRIu64 "\n", num64);
  printf("numLongLong = %llu\n", numLongLong);

  return 0;
}
