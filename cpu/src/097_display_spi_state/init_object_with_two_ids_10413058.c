/* @k10d init_object_with_two_ids_10413058 @ 0x10413058
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Initializes an object by setting pointer fields and calling two helper functions on a
 *   sub-structure.
 * summary:
 *   The function takes a pointer to an object and writes a value from
 *   get_or_create_singleton_object_1050b118 to offset 0x78. It sets offsets 0x6c and 0x70
 *   to pointers relative to the object base (base+4 and base+0x40). It then calls
 *   copy_fields_into_linked_object and dispatch_mode_event_request on the sub-structure at
 *   offset 0x60, passing the constant 0x130005 to the latter. It returns 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_object_with_two_ids_10413058(cls_1059c10c *param_1)

{
  uint32_t uVar1;
  
  uVar1 = get_or_create_singleton_object_1050b118();
  param_1->field_0x78 = uVar1;
  param_1->field_0x6c = (int)&param_1->field_0x4;
  param_1->field_0x70 = (int)&param_1->field_0x40;
  copy_fields_into_linked_object(&param_1->field_0x60);
  dispatch_mode_event_request((cls_105c2050 *)&param_1->field_0x60,0x130005);
  return 1;
}
