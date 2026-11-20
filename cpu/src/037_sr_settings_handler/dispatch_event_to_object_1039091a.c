/* @k10d dispatch_event_to_object_1039091a @ 0x1039091a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 037_sr_settings_handler (unit names are model-proposed)
 * purpose:
 *   Prepares a local buffer, invokes a virtual method on an object pointer, and sets a
 *   flag.
 * summary:
 *   The function calls update_three_field_record with an offset from param_1. It then
 *   dereferences a pointer at param_1 + 0x60; if non-null, it reads a short value and calls
 *   swap_three_words_with_callbacks_10390e74 to populate a stack buffer. It subsequently
 *   performs a virtual call using the object pointer and the stack buffer. Finally, it
 *   calls set_flg_obj on a field at param_1 + 0x4c.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_event_to_object_1039091a(int param_1,uint32_t param_2)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  uintptr_t sp;
  uint8_t auStack_14 [12];
  
  update_three_field_record((uint32_t *)(param_1 + 0x68),(uint32_t)(7),(uint32_t)(param_2),(uint32_t)(0));
  piVar2 = *(int **)(param_1 + 0x60);
  if (piVar2 != (int *)0x0) {
    iVar3 = *piVar2;
    sVar1 = *(short *)(iVar3 + 0x20);
    swap_three_words_with_callbacks_10390e74(auStack_14,param_1 + 0x68);
    (((vtbl_entry*)(iVar3))[4].fn)((int)sVar1 + (int)piVar2,auStack_14);
  }
  set_flg_obj((uint32_t *)(param_1 + 0x4c));
  return;
}
