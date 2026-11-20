/* @k10d dispatch_virtual_then_call_helper @ 0x1039cdb4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on an object, passes its result to a helper, and releases a
 *   resource.
 * summary:
 *   The function performs a virtual call on the object pointed to by param_3, using a
 *   vtable offset of 0x1c. It then calls read_first_word_1045bd4c with the result of that
 *   virtual call, and passes the return value along with param_1 and param_2 to
 *   compute_delta_and_call_virtuals. Finally, it calls free_heap_block_if_flagged_1045bc54
 *   with the stack buffer and the constant 2, likely to release or finalize the resource
 *   created by the virtual call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_then_call_helper(uint32_t param_1,uint32_t param_2,int param_3)

{
  uint32_t uVar1;
  uintptr_t sp;
  uint32_t auStack_18 [4];
  
  (((vtbl_entry*)(*(int *)(param_3 + 0xc)))[3].fn)
            (auStack_18,((vtbl_entry*)(*(int *)(param_3 + 0xc)))[3].adj + param_3);
  uVar1 = read_first_word_1045bd4c(auStack_18);
  compute_delta_and_call_virtuals(param_1,param_2,uVar1);
  free_heap_block_if_flagged_1045bc54(auStack_18,2);
  return;
}
