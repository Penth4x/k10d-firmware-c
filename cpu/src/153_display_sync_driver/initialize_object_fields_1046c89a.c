/* @k10d initialize_object_fields_1046c89a @ 0x1046c89a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 153_display_sync_driver (unit names are model-proposed)
 * purpose:
 *   Populates the second and third fields of a 12-byte object with values from two helper
 *   functions.
 * summary:
 *   The function takes a pointer to an object (param_1) and writes the return value of
 *   read_table_entry_field (called with the result of get_or_init_sram_buffer_104277bc and
 *   constant 0xb1) to offset +4. It then calls get_or_create_singleton_object_10485138 and
 *   copies the value at offset 0x20 of the returned pointer to offset +8 of the object. It
 *   returns 1. The specific roles of the callees are unknown, so the exact semantic meaning
 *   of the fields is indeterminate.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t initialize_object_fields_1046c89a(void *param_1)

{
  void *pvVar1;
  uint32_t uVar2;
  int iVar3;
  
  pvVar1 = (void *)get_or_init_sram_buffer_104277bc();
  uVar2 = read_table_entry_field(pvVar1,0xb1);
  *(uint32_t *)((int)param_1 + 4) = uVar2;
  iVar3 = get_or_create_singleton_object_10485138();
  *(uint32_t *)((int)param_1 + 8) = *(uint32_t *)(iVar3 + 0x20);
  return 1;
}
