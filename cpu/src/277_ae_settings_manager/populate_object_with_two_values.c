/* @k10d populate_object_with_two_values @ 0x1051d718
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Fills offsets 4 and 8 of the target object with values returned by two helper
 *   functions.
 * summary:
 *   The function calls sr_driver_singleton to obtain a pointer, then calls
 *   read_offset_eight_field on the value at offset 4 of that pointer, storing the result at
 *   offset 4 of param_1. It then calls get_sram_address_0x8001dedc and stores the result at
 *   offset 8 of param_1. Finally, it returns 1. The specific roles of the callees and the
 *   data being stored are not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t populate_object_with_two_values(cls_105d6da0 *param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = sr_driver_singleton();
  uVar2 = read_offset_eight_field(*(void **)(iVar1 + 4));
  param_1->field_0x4 = uVar2;
  uVar2 = get_sram_address_0x8001dedc();
  param_1->field_0x8 = uVar2;
  return 1;
}
