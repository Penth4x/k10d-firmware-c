/* @k10d init_object_with_two_timers @ 0x104bcdc0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Initializes an object by calling setup routines, starting two timer-like objects with
 *   1s and 10s periods, and storing a flag byte.
 * summary:
 *   Calls clear_fourteen_word_blocks and reset_struct_fields_and_zero_tail(param_1) for
 *   initial setup. Sets a byte at offset 0xfd99 to 1. If flags at 0x88c and 0x8a8 are set,
 *   calls virtual slot 3 on objects at 0x874 and 0x890 respectively. Then calls virtual
 *   slot 2 on those same objects with arguments 0 and 1000/10000, storing the result (0 or
 *   1) back into the flags. Finally stores param_2 into the object at offset 0x1e.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_two_timers(int param_1,uint8_t param_2)

{
  int iVar1;
  
  clear_fourteen_word_blocks(__frv_reg_unset(4));
  reset_struct_fields_and_zero_tail(param_1);
  *(uint8_t *)(param_1 + 0xfd99) = 1;
  if (*(char *)(param_1 + 0x88c) != '\0') {
    release_object_heap_blocks_1047e1ec((cls_105aae94 *)(param_1 + 0x874));
  }
  iVar1 = allocate_dual_buffers_for_object((cls_105aae94 *)(param_1 + 0x874),0,1000);
  if (iVar1 == 0) {
    *(uint8_t *)(param_1 + 0x88c) = 0;
  }
  else {
    *(uint8_t *)(param_1 + 0x88c) = 1;
  }
  if (*(char *)(param_1 + 0x8a8) != '\0') {
    release_object_heap_blocks_1047e1ec((cls_105aae94 *)(param_1 + 0x890));
  }
  iVar1 = allocate_dual_buffers_for_object((cls_105aae94 *)(param_1 + 0x890),0,10000);
  if (iVar1 == 0) {
    *(uint8_t *)(param_1 + 0x8a8) = 0;
  }
  else {
    *(uint8_t *)(param_1 + 0x8a8) = 1;
  }
  *(uint8_t *)(param_1 + 0x1e) = param_2;
  return;
}
