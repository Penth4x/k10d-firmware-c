/* @k10d pack_and_write_byte @ 0x104ad84e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Packs two parameters into a single byte and writes it via a helper function.
 * summary:
 *   The function combines param_2 (shifted left by 5) and the lower 5 bits of param_3 into
 *   a local byte. It then calls copy_bytes_aligned, passing a pointer derived from param_1
 *   (offset 0x20), the address of the packed byte, a length of 1, and 0. The specific role
 *   of the helper and the data structure at param_1+0x20 is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void pack_and_write_byte(int param_1,char param_2,byte param_3)

{
  uintptr_t sp;
  byte bStack_9;
  
  bStack_9 = param_2 << 5 | param_3 & 0x1f;
  copy_bytes_aligned((void *)(*(uint32_t *)(param_1 + 0x20)),&bStack_9,1,0);
  return;
}
