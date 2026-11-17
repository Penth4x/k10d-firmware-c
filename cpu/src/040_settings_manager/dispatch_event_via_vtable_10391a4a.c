/* @k10d dispatch_event_via_vtable_10391a4a @ 0x10391a4a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Sets a flag, initializes a local buffer, and invokes a virtual method on an object
 *   stored in a struct field.
 * summary:
 *   The function writes 1 to offset 0x2c4d of the object passed in param_1. It calls
 *   update_three_field_struct to initialize a region at offset 0x2c50. If the pointer at
 *   offset 0x2c48 is non-null, it reads a vtable pointer and a short value from the target
 *   object, prepares a local buffer via swap_three_words_with_callbacks_10391b84, and
 *   performs a virtual call using the vtable entry at offset 0x24. Finally, it calls
 *   call_single_helper_104df450 with the object and a value from offset 0x2c28.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_event_via_vtable_10391a4a(int param_1)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  uintptr_t sp;
  uint8_t auStack_14 [12];
  
  *(uint8_t *)(param_1 + 0x2c4d) = 1;
  update_three_field_struct((void *)(param_1 + 0x2c50),8,0,0);
  piVar2 = *(int **)(param_1 + 0x2c48);
  if (piVar2 != (int *)0x0) {
    iVar3 = *piVar2;
    sVar1 = *(short *)(iVar3 + 0x20);
    swap_three_words_with_callbacks_10391b84(auStack_14,param_1 + 0x2c50);
    (**(code **)(iVar3 + 0x24))((int)sVar1 + (int)piVar2,auStack_14);
    call_single_helper_104df450(param_1,*(uint32_t *)(param_1 + 0x2c28));
  }
  return;
}
