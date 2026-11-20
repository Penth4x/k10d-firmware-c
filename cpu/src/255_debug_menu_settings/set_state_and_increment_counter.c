/* @k10d set_state_and_increment_counter @ 0x104ea7a4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Calls a helper, sets a state field based on param_1[6], and increments a global
 *   counter.
 * summary:
 *   The function first calls release_object_members with the object pointer. It then checks
 *   the value at offset 0x18 (param_1[6]) of the object: if it is 0x1000, it passes 0x2005
 *   to initialize_linked_struct_fields; otherwise (including 0x101d), it passes 0x2000.
 *   Finally, it increments the global variable at 0x80010908 and returns 1. The specific
 *   camera subsystem is not identifiable from the provided pseudocode and unknown callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t set_state_and_increment_counter(cls_105c23c4 *param_1)

{
  uint32_t uVar1;
  
  release_object_members((int *)param_1);
  if (param_1->field_0x18 == 0x1000) {
    uVar1 = 0x2005;
  }
  else if (param_1->field_0x18 == 0x101d) {
    uVar1 = 0x2000;
  }
  else {
    uVar1 = 0x2000;
  }
  initialize_linked_struct_fields(param_1,uVar1);
  _DAT_80010908/*SDRAM*/ = _DAT_80010908/*SDRAM*/ + 1;
  return 1;
}
