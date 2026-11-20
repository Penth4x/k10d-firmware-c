/* @k10d dispatch_virtual_on_linked_obj @ 0x103907dc
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 036_capture_context_setup (unit names are model-proposed)
 * purpose:
 *   If a flag at offset 0x80 is clear, prepares a local buffer and invokes a virtual method
 *   on an object linked from offset 0x60.
 * summary:
 *   Checks if the byte at param_1 + 0x80 is zero. If so, calls update_three_field_record
 *   with arguments derived from param_1 and param_2. It then dereferences the pointer at
 *   param_1 + 0x60 to get an object pointer. If non-null, it reads a short value from
 *   offset 0x20 of the first element of that object, calls
 *   swap_three_words_with_callbacks_10390e74 to populate a local stack buffer, and performs
 *   a virtual function call via the vtable at offset 0x24 of that first element, passing
 *   the adjusted object pointer and the local buffer. Finally, it calls set_flg_obj on the
 *   structure at param_1 + 0x4c.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_on_linked_obj(cls_1055a304 *param_1,uint32_t param_2)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  uintptr_t sp;
  uint8_t auStack_14 [12];
  
  if (param_1->field_0x80 == '\0') {
    update_three_field_record(&param_1->field_0x68,5,param_2,0);
    piVar2 = (int *)param_1->field_0x60;
    if (piVar2 != (int *)0x0) {
      iVar3 = *piVar2;
      sVar1 = *(short *)(iVar3 + 0x20);
      swap_three_words_with_callbacks_10390e74(auStack_14,(int)&param_1->field_0x68);
      (((vtbl_entry*)(iVar3))[4].fn)((int)sVar1 + (int)piVar2,auStack_14);
      set_flg_obj(&param_1->field_0x4c);
    }
  }
  return;
}
