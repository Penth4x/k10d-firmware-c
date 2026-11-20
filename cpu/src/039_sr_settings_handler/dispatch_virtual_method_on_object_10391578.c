/* @k10d dispatch_virtual_method_on_object_10391578 @ 0x10391578
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 039_sr_settings_handler (unit names are model-proposed)
 * purpose:
 *   Initializes a sub-structure, then invokes a virtual method on an object stored at a
 *   fixed offset if non-null.
 * summary:
 *   The function first calls update_three_field_struct with an offset (param_1 + 0x2c50)
 *   and a constant 6. It then checks a pointer at param_1 + 0x2c48; if valid, it reads a
 *   short value from the object, calls swap_three_words_with_callbacks_10391b84 to prepare
 *   a stack buffer, and executes a virtual call via the vtable at offset 0x24. Finally, it
 *   calls call_single_helper_104df450 with param_1 and a value from param_1 + 0x2c28. The
 *   specific subsystem is not identifiable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_method_on_object_10391578(int param_1,uint32_t param_2)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  uintptr_t sp;
  uint8_t auStack_14 [12];
  
  update_three_field_struct((uint32_t *)(param_1 + 0x2c50),(uint32_t)(6),(uint32_t)(param_2),(uint32_t)(0));
  piVar2 = *(int **)(param_1 + 0x2c48);
  if (piVar2 != (int *)0x0) {
    iVar3 = *piVar2;
    sVar1 = *(short *)(iVar3 + 0x20);
    swap_three_words_with_callbacks_10391b84(auStack_14,param_1 + 0x2c50);
    (((vtbl_entry*)(iVar3))[4].fn)((int)sVar1 + (int)piVar2,auStack_14);
  }
  call_single_helper_104df450(param_1,*(uint32_t *)(param_1 + 0x2c28));
  return;
}
