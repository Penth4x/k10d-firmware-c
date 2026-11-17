/* @k10d read_byte_at_offset_0x45 @ 0x104712d8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 164_sr_calibration (unit names are model-proposed)
 * purpose:
 *   Reads and returns the byte at offset 0x45 of the object pointed to by param_1.
 * summary:
 *   The function returns the value stored at param_1 + 0x45. It first calls
 *   get_cached_high_nibble; if the result is 0xf0 or 0x10, it writes 0 to that offset
 *   before returning. Otherwise, it calls test_flag_set with the pointer at param_1 + 0x20,
 *   stores the boolean result at param_1 + 0x45, and returns it. The specific roles of the
 *   callees and the object structure are not determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t read_byte_at_offset_0x45(void *param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = get_cached_high_nibble();
  if ((iVar1 == 0xf0) || (iVar1 == 0x10)) {
    *(uint8_t *)((int)param_1 + 0x45) = 0;
  }
  else {
    bVar2 = test_flag_set(*(void **)((int)param_1 + 0x20));
    *(bool *)((int)param_1 + 0x45) = bVar2;
  }
  return *(uint8_t *)((int)param_1 + 0x45);
}
