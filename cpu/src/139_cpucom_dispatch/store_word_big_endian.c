/* @k10d store_word_big_endian @ 0x104639fc
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Writes a 32-bit value to a struct at offset 0x26 in big-endian byte order.
 * summary:
 *   The function takes a pointer and a 32-bit integer, then stores the integer's bytes into
 *   the memory location at offset 0x26 of the pointed-to structure. The bytes are stored in
 *   big-endian order (most significant byte first), which matches the big-endian
 *   architecture of the Fujitsu FR60Lite processor. No other side effects or callees are
 *   involved.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_word_big_endian(void *param_1,uint32_t param_2)

{
  *(char *)((int)param_1 + 0x26) = (char)((uint)param_2 >> 0x18);
  *(char *)((int)param_1 + 0x27) = (char)((uint)param_2 >> 0x10);
  *(char *)((int)param_1 + 0x28) = (char)((uint)param_2 >> 8);
  *(char *)((int)param_1 + 0x29) = (char)param_2;
  return;
}
