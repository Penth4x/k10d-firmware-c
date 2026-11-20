/* @k10d init_object_and_call_virtual_slot2 @ 0x1036860a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 011_ae_bracketing_control (unit names are model-proposed)
 * purpose:
 *   Initializes an object via a helper, invokes virtual slot 2 on three global objects, and
 *   calls a virtual method on a sub-structure.
 * summary:
 *   The function first calls dispatch_three_params_and_return_offset with the object
 *   pointer and two 16-bit fields at offsets 0x16 and 0x18. It then performs a single
 *   iteration of a loop that calls virtual slot 2 (offset 0x14) on three distinct global
 *   objects located at fixed stack-relative addresses. Finally, it calls
 *   release_object_heap_blocks_1047e1ec (virtual slot 3 of cls_105aae94) on a sub-structure
 *   at offset 0x118 and calls empty_stub_10368836 on the main object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_and_call_virtual_slot2(cls_10557a18 *param_1)

{
  int iVar1;
  int iStack_10;
  
  iVar1 = 0;
  dispatch_three_params_and_return_offset(param_1,(uint)(ushort)param_1->field_0x16,(uint)*(ushort *)&param_1->field_0x18);
  iStack_10 = 1;
  do {
    (((vtbl_entry*)(*(int *)(iVar1 + -0x7ffea0d4)))[2].fn)
              (((vtbl_entry*)(*(int *)(iVar1 + -0x7ffea0d4)))[2].adj + iVar1 + -0x7ffea0e8);
    (((vtbl_entry*)(*(int *)(iVar1 + -0x7ffe9ec0)))[2].fn)
              (((vtbl_entry*)(*(int *)(iVar1 + -0x7ffe9ec0)))[2].adj + iVar1 + -0x7ffe9ed4);
    (((vtbl_entry*)(*(int *)(iVar1 + -0x7ffe9cac)))[2].fn)
              (((vtbl_entry*)(*(int *)(iVar1 + -0x7ffe9cac)))[2].adj + iVar1 + -0x7ffe9cc0);
    iVar1 = iVar1 + 0x63c;
    iStack_10 = iStack_10 + -1;
  } while (-1 < iStack_10);
  release_object_heap_blocks_1047e1ec((cls_105aae94 *)&param_1->field_0x118);
  empty_stub_10368836((uint32_t)(param_1));
  return;
}
