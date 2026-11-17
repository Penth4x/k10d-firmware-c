/* @k10d invoke_callback_if_flag_clear_10390606 @ 0x10390606
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 036_capture_context_setup (unit names are model-proposed)
 * purpose:
 *   If a byte at offset 0x80 is zero, prepares a stack buffer and invokes a virtual method
 *   on an object pointer.
 * summary:
 *   Checks if the byte at param_1 + 0x80 is null. If so, calls update_three_field_record
 *   with param_1 + 0x68, 1, param_2, and 0. It then dereferences the pointer at param_1 +
 *   0x60, reads a short from offset 0x20 of the target object, calls
 *   swap_three_words_with_callbacks_10390e74 to populate a stack buffer, and invokes the
 *   virtual function at offset 0x24 of the target object with an adjusted this pointer and
 *   the stack buffer. Finally, it calls set_flg_obj on param_1 + 0x4c.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_callback_if_flag_clear_10390606(int param_1,uint32_t param_2)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  uintptr_t sp;
  uint8_t auStack_14 [12];
  
  if (*(char *)(param_1 + 0x80) == '\0') {
    update_three_field_record((void *)(param_1 + 0x68),1,param_2,0);
    piVar2 = *(int **)(param_1 + 0x60);
    if (piVar2 != (int *)0x0) {
      iVar3 = *piVar2;
      sVar1 = *(short *)(iVar3 + 0x20);
      swap_three_words_with_callbacks_10390e74(auStack_14,param_1 + 0x68);
      (**(code **)(iVar3 + 0x24))((int)sVar1 + (int)piVar2,auStack_14);
      set_flg_obj((uint32_t *)(param_1 + 0x4c));
    }
  }
  return;
}
