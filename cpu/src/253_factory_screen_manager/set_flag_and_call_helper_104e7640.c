/* @k10d set_flag_and_call_helper_104e7640 @ 0x104e7640
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 253_factory_screen_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper with a pointer offset by 0x30 and sets byte 9 of the object to 1.
 * summary:
 *   The function takes an object pointer in param_1 and a 16-bit value in param_2. It calls
 *   invoke_virtual_slot_5_104949f6 with a pointer to offset 0x30 of the object and the
 *   second parameter. It then sets the byte at offset 9 of the object to 1. The specific
 *   role of the object and the helper is not determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_and_call_helper_104e7640(int param_1,uint16_t param_2)

{
  invoke_virtual_slot_5_104949f6((int *)(param_1 + 0x30),param_2);
  *(uint8_t *)(param_1 + 9) = 1;
  return;
}
