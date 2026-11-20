/* @k10d dispatch_virtual_method_on_object_103917fc @ 0x103917fc
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Checks a flag, prepares a local buffer, and invokes a virtual method on an object
 *   pointer.
 * summary:
 *   The function first checks if the byte at offset 0x2c4d in param_1 is zero. If so, it
 *   calls update_three_field_struct with arguments derived from param_1 and param_2. It
 *   then dereferences a pointer at param_1 + 0x2c48 to get an object pointer. If the object
 *   is not null, it reads a short value from offset 0x20 of the object's first field, calls
 *   swap_three_words_with_callbacks_10391b84 to populate a local stack buffer, and performs
 *   a virtual call through the function pointer at offset 0x24 of the object's first field.
 *   Finally, it calls call_single_helper_104df450 with param_1 and a value from param_1 +
 *   0x2c28.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_method_on_object_103917fc(cls_10562400 *param_1,uint32_t param_2)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  uintptr_t sp;
  uint8_t auStack_14 [12];
  
  if (*(char *)((int)&param_1[0x46].field_0x8c + 1) == '\0') {
    update_three_field_struct(&param_1[0x46].field_0x90,2,param_2,0);
    piVar2 = (int *)param_1[0x46].field_0x88;
    if (piVar2 != (int *)0x0) {
      iVar3 = *piVar2;
      sVar1 = *(short *)(iVar3 + 0x20);
      swap_three_words_with_callbacks_10391b84(auStack_14,(int)&param_1[0x46].field_0x90);
      (((vtbl_entry*)(iVar3))[4].fn)((int)sVar1 + (int)piVar2,auStack_14);
      call_single_helper_104df450((int)(param_1),(uint32_t)(param_1[0x46].field_0x68));
    }
  }
  return;
}
