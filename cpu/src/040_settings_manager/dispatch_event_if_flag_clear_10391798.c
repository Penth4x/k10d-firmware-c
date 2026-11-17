/* @k10d dispatch_event_if_flag_clear_10391798 @ 0x10391798
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Checks a flag byte and, if clear, initializes a local buffer and invokes a virtual
 *   method on an object pointer.
 * summary:
 *   The function first checks if the byte at offset 0x2c4d in the object is zero. If so, it
 *   calls update_three_field_struct to initialize a structure at offset 0x2c50. It then
 *   dereferences a pointer at offset 0x2c48, reads a short value from offset 0x20 of the
 *   pointed-to object, and calls swap_three_words_with_callbacks_10391b84 to populate a
 *   stack buffer. Finally, it performs a virtual call using the function pointer at offset
 *   0x24 of the object, passing the adjusted pointer and the stack buffer, before calling
 *   call_single_helper_104df450 with a value from offset 0x2c28.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_event_if_flag_clear_10391798(int param_1,uint32_t param_2)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  uintptr_t sp;
  uint8_t auStack_14 [12];
  
  if (*(char *)(param_1 + 0x2c4d) == '\0') {
    update_three_field_struct((void *)(param_1 + 0x2c50),1,param_2,0);
    piVar2 = *(int **)(param_1 + 0x2c48);
    if (piVar2 != (int *)0x0) {
      iVar3 = *piVar2;
      sVar1 = *(short *)(iVar3 + 0x20);
      swap_three_words_with_callbacks_10391b84(auStack_14,param_1 + 0x2c50);
      (**(code **)(iVar3 + 0x24))((int)sVar1 + (int)piVar2,auStack_14);
      call_single_helper_104df450(param_1,*(uint32_t *)(param_1 + 0x2c28));
    }
  }
  return;
}
