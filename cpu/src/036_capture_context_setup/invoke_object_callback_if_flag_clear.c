/* @k10d invoke_object_callback_if_flag_clear @ 0x1039066e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 036_capture_context_setup (unit names are model-proposed)
 * purpose:
 *   If a byte at offset 0x80 is zero, prepares a local buffer and invokes a virtual method
 *   on an object pointer stored at offset 0x60.
 * summary:
 *   Checks if the byte at param_1 + 0x80 is null. If so, calls update_three_field_record
 *   with param_1 + 0x68, 2, param_2, and 0. It then dereferences the pointer at param_1 +
 *   0x60, reads a short at offset 0x20 of the target object, calls
 *   swap_three_words_with_callbacks_10390e74 to populate a stack buffer, and performs a
 *   virtual call via the function pointer at offset 0x24 of the target object. Finally, it
 *   calls set_flg_obj on the pointer at param_1 + 0x4c.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_object_callback_if_flag_clear(cls_1055a304 *param_1,uint32_t param_2)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  uintptr_t sp;
  uint8_t auStack_14 [12];
  
  if (param_1->field_0x80 == '\0') {
    update_three_field_record(&param_1->field_0x68,2,param_2,0);
    piVar2 = (int *)param_1->field_0x60;
    if (piVar2 != (int *)0x0) {
      iVar3 = *piVar2;
      sVar1 = *(short *)(iVar3 + 0x20);
      swap_three_words_with_callbacks_10390e74(auStack_14,(int)&param_1->field_0x68);
      (((vtbl_entry*)(iVar3))[4].fn)((int)sVar1 + (int)piVar2,auStack_14);
      set_flg_obj(&param_1->field_0x4c, 0x1);
    }
  }
  return;
}
