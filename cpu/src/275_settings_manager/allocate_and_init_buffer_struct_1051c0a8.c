/* @k10d allocate_and_init_buffer_struct_1051c0a8 @ 0x1051c0a8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 275_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a 12-byte struct containing two heap buffers and initializes them with source
 *   data.
 * summary:
 *   The function allocates a 12-byte header structure (or uses a provided one) and sets its
 *   first byte to param_3. It then allocates two additional buffers of sizes param_3 and
 *   2*param_3, storing their pointers at offsets 4 and 8. It calls 0x104aca1e and
 *   copy_byte_array_with_optional_transform to initialize the contents of these buffers
 *   using param_2 as a source.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t * allocate_and_init_buffer_struct_1051c0a8(uint8_t *param_1,byte *param_2,void *param_3)

{
  uint32_t uVar1;
  
  if ((param_1 != (uint8_t *)0x0) ||
     (param_1 = (uint8_t *)heap_alloc((void *)0xc), param_1 != (uint8_t *)0x0)) {
    *param_1 = (char)param_3;
    uVar1 = heap_alloc_2((int)param_3);
    *(uint32_t *)(param_1 + 4) = uVar1;
    uVar1 = heap_alloc_2((int)param_3 << 1);
    *(uint32_t *)(param_1 + 8) = uVar1;
    (*(code *)0x104aca1e/*ROM*/)(*(uint32_t *)(param_1 + 4),param_2,param_3,0);
    copy_byte_array_with_optional_transform(*(ushort **)(param_1 + 8),param_2,param_3,0);
  }
  return param_1;
}
