/* @k10d zero_initialize_struct_fields @ 0x10516b6c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Zeroes a fixed set of fields in a struct starting at offset 4 through offset 0x1f.
 * summary:
 *   The function takes a pointer to a struct and clears specific members: a 4-byte field at
 *   +4, two 1-byte fields at +8 and +9, a 4-byte field at +0xc, and then loops three times
 *   to clear four 2-byte fields each at offsets 0x10-0x16, 0x18-0x1e, and 0x20-0x26
 *   (relative to the base). It is called from a verified constructor and two other
 *   functions, suggesting it is a helper for initializing or resetting a data structure. No
 *   camera-specific subsystem is identifiable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void zero_initialize_struct_fields(void *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  *(uint32_t *)((int)param_1 + 4) = 0;
  *(uint8_t *)((int)param_1 + 8) = 0;
  *(uint8_t *)((int)param_1 + 9) = 0;
  *(uint32_t *)((int)param_1 + 0xc) = 0;
  iVar2 = 3;
  do {
    *(uint16_t *)((int)param_1 + iVar1 + 0x10) = 0;
    *(uint16_t *)((int)param_1 + iVar1 + 0x12) = 0;
    *(uint16_t *)((int)param_1 + iVar1 + 0x14) = 0;
    *(uint16_t *)((int)param_1 + iVar1 + 0x16) = 0;
    iVar2 = iVar2 + -1;
    iVar1 = iVar1 + 8;
  } while (-1 < iVar2);
  return;
}
