/* @k10d init_struct_and_set_flag @ 0x104e7622
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 253_factory_screen_manager (unit names are model-proposed)
 * purpose:
 *   Initializes a sub-structure at offset 0x20 and sets a flag at offset 9.
 * summary:
 *   Calls invoke_virtual_slot_5_104949f6 with a pointer to offset 0x20 of the object and
 *   the second parameter. Then sets the byte at offset 9 of the object to 1. The specific
 *   role of the object and the callee is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_struct_and_set_flag(int param_1,uint16_t param_2)

{
  invoke_virtual_slot_5_104949f6((cls_105b989c *)(param_1 + 0x20),param_2);
  *(uint8_t *)(param_1 + 9) = 1;
  return;
}
