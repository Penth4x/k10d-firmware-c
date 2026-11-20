/* @k10d queue_event_with_state @ 0x10515af2
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 273_ae_register_writer (unit names are model-proposed)
 * purpose:
 *   Initializes an event structure at param_2 and enqueues it via reg_framework_send.
 * summary:
 *   The function checks a byte at offset 0x28 of the object pointed to by param_2. If null,
 *   it sets offset 0x10 to 3 and offset 0x8 to param_1 + 4. Otherwise, it performs a
 *   virtual call on an object at offset 0x8d4, sets offset 0x10 to 1, and copies a value
 *   from offset 0x828. It then sets offset 0xc to the determined value, sets offset 0x14 to
 *   param_2, and calls reg_framework_send with a pointer derived from param_1 + 0x54 + 8.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void queue_event_with_state(int param_1,void *param_2)

{
  uint32_t uVar1;
  
  if (*(char *)((int)param_2 + 0x28) == '\0') {
    *(uint32_t *)((int)param_2 + 0x10) = 3;
    *(int *)((int)param_2 + 8) = param_1 + 4;
    uVar1 = 0;
  }
  else {
    (((vtbl_entry*)(*(int *)((int)param_2 + 0x8d4)))[38].fn)
              ((int)((vtbl_entry*)(*(int *)((int)param_2 + 0x8d4)))[38].adj + (int)param_2);
    *(uint32_t *)((int)param_2 + 0x10) = 1;
    *(int *)((int)param_2 + 8) = param_1 + 4;
    uVar1 = *(uint32_t *)((int)param_2 + 0x828);
  }
  *(uint32_t *)((int)param_2 + 0xc) = uVar1;
  *(void **)((int)param_2 + 0x14) = param_2;
  reg_framework_send(*(int *)(param_1 + 0x54) + 8);
  return;
}
