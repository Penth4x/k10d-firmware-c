/* @k10d allocate_two_word_struct @ 0x104b554e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 217_error_display_handler (unit names are model-proposed)
 * purpose:
 *   Allocates an 8-byte struct and initializes its two fields from two unknown global
 *   sources.
 * summary:
 *   The function either uses the provided pointer or heap_allocates 8 bytes. It sets the
 *   first field to 0, then overwrites it with the value at offset 4 of the pointer returned
 *   by get_sensor_singleton. The second field is set to the return value of
 *   get_or_init_sram_block_105343c4. The roles of the two callee functions are unknown, so
 *   the specific data being captured is indeterminate.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * allocate_two_word_struct(uint32_t *param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)8), param_1 != (uint32_t *)0x0)) {
    *param_1 = 0;
    iVar1 = get_sensor_singleton();
    *param_1 = *(uint32_t *)(iVar1 + 4);
    uVar2 = get_or_init_sram_block_105343c4();
    param_1[1] = uVar2;
  }
  return param_1;
}
