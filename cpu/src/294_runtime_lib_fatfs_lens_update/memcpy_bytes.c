/* @k10d memcpy_bytes @ 0x10545122
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed copy_bytes_from_source)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Copies param_3 bytes from param_2 to param_1 in a byte-wise loop.
 * summary:
 *   Performs a simple byte-by-byte copy from the source buffer (param_2) to the destination
 *   buffer (param_1) for param_3 bytes. The loop decrements the counter and copies one byte
 *   per iteration until the count reaches zero. No other side effects or MMIO operations
 *   are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void memcpy_bytes(void *param_1,void *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  
  if (0 < param_3) {
    do {
      iVar2 = param_3 + -1;
      bVar1 = 0 < param_3;
      *(uint8_t *)(iVar2 + (int)param_1) = *(uint8_t *)(iVar2 + (int)param_2);
      param_3 = iVar2;
    } while (bVar1 && iVar2 != 0);
  }
  return;
}
