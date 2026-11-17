/* @k10d process_file_path_entry @ 0x104e5656
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * purpose:
 *   Resolves a file path from an object, extracts the filename, and dispatches it to a
 *   handler.
 * summary:
 *   The function constructs a string buffer (likely a path) using fill_byte_array and
 *   copy_null_terminated_string. It calls call_with_offset_lock_1048101c to process the
 *   path; if successful, it calculates a timeout (allocate_queue_slot + 100), retrieves a
 *   target object (insert_node_into_array), and parses the string to find the last
 *   backslash ('\') to isolate the filename. It then invokes a virtual method on the target
 *   object with the filename and updates the object state via
 *   invoke_virtual_slot_14_104e6148 and a function at 0x104e62b2.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t process_file_path_entry(int param_1)

{
  char *pcVar1;
  uint8_t *puVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uintptr_t sp;
  uint32_t uStack_6c;
  char cStack_68;
  uint8_t auStack_67 [63];
  uint8_t auStack_28 [31];
  uint8_t uStack_9;
  
  cls_105ab468_new(auStack_28);
  fill_byte_array(&cStack_68,0,0x40);
  uStack_6c = 0;
  pvVar3 = (void *)(*(code *)0x1047796e/*ROM*/)(*(uint32_t *)(param_1 + 0x7c));
  copy_null_terminated_string(&cStack_68,pvVar3);
  iVar4 = call_with_offset_lock_1048101c(*(void **)(param_1 + 0x4c),&cStack_68,auStack_28);
  if (iVar4 != 0) {
    uVar5 = allocate_queue_slot(param_1);
    *(uint *)(param_1 + 0x30) = uVar5 + 100;
    pvVar3 = (void *)insert_node_into_array(param_1,100, __frv_reg_unset(6));
    iVar4 = count_string_bytes(&cStack_68);
    iVar6 = iVar4 + -1;
    if (*(char *)((int)&uStack_6c + iVar4 + 3) != '\\') {
      puVar2 = &uStack_9 + iVar4;
      do {
        pcVar1 = puVar2 + -0x61;
        iVar6 = iVar6 + -1;
        puVar2 = puVar2 + -1;
      } while (*pcVar1 != '\\');
    }
    (**(code **)(*(int *)((int)pvVar3 + 0x18) + 0x44))
              ((int)*(short *)(*(int *)((int)pvVar3 + 0x18) + 0x40) + (int)pvVar3,auStack_67 + iVar6
              );
    uStack_6c = 1;
    invoke_virtual_slot_14_104e6148((void *)param_1,pvVar3);
    (*(code *)0x104e62b2/*ROM*/)(**(uint32_t **)(param_1 + 0x40),pvVar3);
  }
  cls_105ab468_delete(auStack_28,2);
  return uStack_6c;
}
