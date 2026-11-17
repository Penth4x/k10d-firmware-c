/* @k10d store_word_at_offset_0x2a @ 0x10463a1a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Writes a 32-bit value into a struct at byte offset 0x2a in big-endian byte order.
 * summary:
 *   The function takes a pointer (param_1) and a 32-bit value (param_2). It decomposes the
 *   value into four bytes and stores them sequentially at offsets 0x2a, 0x2b, 0x2c, and
 *   0x2d of the pointed-to structure. This is a manual big-endian store operation, likely
 *   used to maintain byte-order consistency on the big-endian FR60Lite processor. No
 *   callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_word_at_offset_0x2a(void *param_1,uint32_t param_2)

{
  *(char *)((int)param_1 + 0x2a) = (char)((uint)param_2 >> 0x18);
  *(char *)((int)param_1 + 0x2b) = (char)((uint)param_2 >> 0x10);
  *(char *)((int)param_1 + 0x2c) = (char)((uint)param_2 >> 8);
  *(char *)((int)param_1 + 0x2d) = (char)param_2;
  return;
}
