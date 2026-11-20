/* @k10d dispatch_event_if_flag_clear_103918c6 @ 0x103918c6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Checks a flag byte and, if clear, prepares a local struct and invokes a virtual method
 *   on an object pointer.
 * summary:
 *   The function first checks if the byte at offset 0x2c4d in the object is zero. If so, it
 *   calls update_three_field_struct to initialize a sub-structure at offset 0x2c50. It then
 *   retrieves a pointer from offset 0x2c48; if non-null, it reads a short value from offset
 *   0x20 of the pointed-to object, calls swap_three_words_with_callbacks_10391b84 to
 *   populate a stack buffer, and performs a virtual call (slot 4) on the object with the
 *   adjusted pointer and stack buffer as arguments. Finally, it calls
 *   call_single_helper_104df450 with the object and a value from offset 0x2c28.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_event_if_flag_clear_103918c6(cls_10562400 *param_1,uint32_t param_2)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  uintptr_t sp;
  uint8_t auStack_14 [12];
  
  if (*(char *)((int)&param_1[0x46].field_0x8c + 1) == '\0') {
    update_three_field_struct(&param_1[0x46].field_0x90,4,param_2,0);
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
