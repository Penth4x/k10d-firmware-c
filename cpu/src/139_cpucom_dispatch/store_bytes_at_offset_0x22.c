/* @k10d store_bytes_at_offset_0x22 @ 0x104639de
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Writes the four bytes of param_2 into the structure pointed to by param_1 at offsets
 *   0x22 through 0x25.
 * summary:
 *   The function performs a simple big-endian byte decomposition of the 32-bit value in
 *   param_2, storing each byte sequentially into the memory region starting at param_1 +
 *   0x22. It has no callees and no side effects other than these four memory writes. The
 *   specific role of the data at this offset is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_bytes_at_offset_0x22(void *param_1,uint32_t param_2)

{
  *(char *)((int)param_1 + 0x22) = (char)((uint)param_2 >> 0x18);
  *(char *)((int)param_1 + 0x23) = (char)((uint)param_2 >> 0x10);
  *(char *)((int)param_1 + 0x24) = (char)((uint)param_2 >> 8);
  *(char *)((int)param_1 + 0x25) = (char)param_2;
  return;
}
