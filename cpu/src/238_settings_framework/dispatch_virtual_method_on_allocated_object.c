/* @k10d dispatch_virtual_method_on_allocated_object @ 0x104ce8fc
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 238_settings_framework (unit names are model-proposed)
 * purpose:
 *   Allocates an object via a factory, invokes a virtual method on it, and sets a status
 *   flag based on the result.
 * summary:
 *   The function first copies a pointer from a nested structure into the object at offset
 *   0x34. It checks a condition via build_and_pass_three_word_struct; if true, it obtains a
 *   context from get_or_create_singleton_object_104cfcea, allocates an object using a
 *   function pointer at 0x104cfe98, and calls virtual slot 5 (offset 0x2c) on the new
 *   object. Depending on the return value, it calls dispatch_event_with_payload_104cea58
 *   and always calls call_two_helpers_on_object_104cea32. Finally, it sets a flag at offset
 *   0x38 to 1 or 0 and potentially sets a byte in a related structure to 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_method_on_allocated_object(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  int *piVar3;
  int iVar4;
  
  *(uint32_t *)(param_1 + 0x34) = **(uint32_t **)(*(int *)(param_1 + 100) + 0xc);
  iVar4 = 0;
  iVar1 = build_and_pass_three_word_struct(__frv_reg_unset(4));
  if (iVar1 != 0) {
    uVar2 = get_or_create_singleton_object_104cfcea();
    piVar3 = (int *)(*(code *)0x104cfe98/*ROM*/)(uVar2,**(uint32_t **)(param_1 + 0x34));
    iVar1 = (((vtbl_entry*)(*piVar3))[5].fn)
                      ((int)piVar3 + (int)((vtbl_entry*)(*piVar3))[5].adj,*(uint32_t *)(param_1 + 0x34)
                       ,*(uint32_t *)(param_1 + 0x4c));
    if (iVar1 != 0) {
      iVar4 = dispatch_event_with_payload_104cea58(param_1);
    }
    call_two_helpers_on_object_104cea32(param_1);
  }
  if (iVar4 == 0) {
    *(uint8_t *)(*(int *)(*(int *)(param_1 + 0x34) + 8) + 0x18) = 1;
    *(uint32_t *)(param_1 + 0x38) = 1;
  }
  else {
    *(uint32_t *)(param_1 + 0x38) = 0;
  }
  return;
}
