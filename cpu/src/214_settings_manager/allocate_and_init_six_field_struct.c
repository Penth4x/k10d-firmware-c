/* @k10d allocate_and_init_six_field_struct @ 0x104b24f8
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a 0x18-byte struct and initializes its six pointer/integer fields with sub-
 *   allocations and zeroed buffers.
 * summary:
 *   If param_1 is NULL, allocates 0x18 bytes via heap_alloc. Allocates a 0x40-byte buffer
 *   for field 0, a buffer sized by extract_bitfield_with_offset(8,4,1)<<2 for field 1, and
 *   an 8-byte buffer for field 4. Calls alloc_and_zero_small_object and
 *   clear_two_fields_and_reset to initialize field 2, and calls an unknown function at
 *   0x104ad2d4 with fields 2, 1, 8, and 0. Zeroes 48 bytes in the field 0 buffer and 8
 *   bytes in the field 4 buffer. Returns the struct pointer in r4.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int * allocate_and_init_six_field_struct(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (int *)0x0) || (param_1 = (int *)heap_alloc((void *)0x18), param_1 != (int *)0x0)) {
    iVar2 = heap_alloc_2(0x40);
    *param_1 = iVar2;
    iVar2 = extract_bitfield_with_offset(8,4,1);
    iVar2 = heap_alloc_2(iVar2 << 2);
    param_1[1] = iVar2;
    iVar2 = (int)alloc_and_zero_small_object((uint32_t *)0x0);
    param_1[2] = iVar2;
    param_1[3] = 0;
    iVar2 = heap_alloc_2(8);
    param_1[4] = iVar2;
    param_1[5] = 0;
    (*(code *)0x104ad2d4/*ROM*/)(param_1[2],param_1[1],8,0);
    clear_two_fields_and_reset((void *)param_1[2],1);
    iVar1 = 3;
    iVar2 = 0;
    do {
      *(uint32_t *)(iVar2 + *param_1) = 0;
      *(uint32_t *)(iVar2 + 4 + *param_1) = 0;
      *(uint32_t *)(iVar2 + 8 + *param_1) = 0;
      *(uint32_t *)(*param_1 + iVar2 + 0xc) = 0;
      iVar1 = iVar1 + -1;
      iVar2 = iVar2 + 0x10;
    } while (-1 < iVar1);
    *(uint32_t *)param_1[4] = 0;
    *(uint32_t *)(param_1[4] + 4) = 0;
  }
  return param_1;
}
