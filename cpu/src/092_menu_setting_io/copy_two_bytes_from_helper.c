/* @k10d copy_two_bytes_from_helper @ 0x1040abc4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 092_menu_setting_io (unit names are model-proposed)
 * purpose:
 *   Calls a helper to fill a local buffer and copies two bytes from it into the object at
 *   offsets 0x5c and 0x5e.
 * summary:
 *   The function invokes init_object_with_buffer_and_callback_1040a534 with param_1, a
 *   local stack variable, and 0xffffffff. It then reads two bytes from offsets 4 and 6 of
 *   the buffer pointed to by the local variable and writes them into param_1 at offsets
 *   0x5c and 0x5e. The specific role of the helper and the meaning of the copied bytes are
 *   not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_two_bytes_from_helper(int param_1)

{
  uintptr_t sp;
  int iStack_c;
  
  init_object_with_buffer_and_callback_1040a534(param_1,&iStack_c,0xffffffff);
  *(uint16_t *)(param_1 + 0x5c) = *(uint16_t *)(iStack_c + 4);
  *(uint16_t *)(param_1 + 0x5e) = *(uint16_t *)(iStack_c + 6);
  return;
}
