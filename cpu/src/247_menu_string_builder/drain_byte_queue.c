/* @k10d drain_byte_queue @ 0x104de180
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Processes and removes bytes from a queue structure until empty or a callee fails.
 * summary:
 *   The function checks if the queue (param_1) has a valid head and non-zero length. It
 *   copies the queue state to a local object, then iterates through the bytes, calling
 *   check_key_code_in_set for each byte and decrementing the length on success. It
 *   continues processing remaining bytes in a second loop until check_key_code_in_set
 *   returns 0 or the queue is empty. Finally, it calls a virtual method on the local
 *   object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void drain_byte_queue(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uintptr_t sp;
  int iStack_28;
  uint uStack_24;
  int iStack_20;
  int iStack_1c;
  uint8_t uStack_18;
  int iStack_14;
  int iStack_10;
  
  if ((*param_1 != 0) && (param_1[1] != 0)) {
    cls_105bb0b8_new(&iStack_28);
    iStack_28 = *param_1;
    uStack_24 = param_1[1];
    iStack_20 = param_1[2];
    iStack_1c = param_1[3];
    uStack_18 = *(uint8_t *)(param_1 + 4);
    iStack_14 = param_1[5];
    iStack_10 = param_1[6];
    uVar3 = 0;
    uVar1 = uStack_24;
    if (uStack_24 != 0) {
      do {
        *param_1 = (int)(iStack_28 + uVar3);
        iVar2 = check_key_code_in_set(param_1,(uint)*(byte *)(iStack_28 + uVar3));
        uVar1 = uStack_24;
        if (iVar2 == 0) break;
        uVar3 = uVar3 + 1;
        param_1[1] = param_1[1] + -1;
      } while (uVar3 < uStack_24);
    }
    while ((uVar1 = uVar1 - 1, -1 < (int)uVar1 &&
           (iVar2 = check_key_code_in_set(param_1,(uint)*(byte *)(iStack_28 + uVar1)), iVar2 != 0))) {
      param_1[1] = param_1[1] + -1;
    }
    reset_vtable_and_free_if_flagged_104ddfe6(&iStack_28,2);
  }
  return;
}
