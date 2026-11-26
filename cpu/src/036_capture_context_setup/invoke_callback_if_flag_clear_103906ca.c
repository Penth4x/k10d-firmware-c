/* @k10d invoke_callback_if_flag_clear_103906ca @ 0x103906ca
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 036_capture_context_setup (unit names are model-proposed)
 * purpose:
 *   Checks a byte flag at offset 0x80 and, if zero, calls a helper and invokes a virtual
 *   method on an object pointer.
 * summary:
 *   The function first tests the byte at param_1+0x80; if it is non-zero it returns
 *   immediately. Otherwise it calls update_three_field_record with param_1+0x68 and the two
 *   extra parameters. It then dereferences the pointer at param_1+0x60, reads a short at
 *   offset 0x20 of the pointed-to object, calls swap_three_words_with_callbacks_10390e74 to
 *   build a stack buffer, and performs a virtual call through the vtable at offset 0x24 of
 *   that object. Finally it calls set_flg_obj on the pointer at param_1+0x4c. The callees
 *   update_three_field_record and swap_three_words_with_callbacks_10390e74 are not yet
 *   named, so the specific subsystem role is not determinable from the provided
 *   information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_callback_if_flag_clear_103906ca(cls_1055a304 *param_1,uint32_t param_2,uint32_t param_3)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  uintptr_t sp;
  uint8_t auStack_14 [12];
  
  if (param_1->field_0x80 == '\0') {
    update_three_field_record(&param_1->field_0x68,3,param_2,param_3);
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
