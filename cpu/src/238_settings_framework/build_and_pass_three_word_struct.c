/* @k10d build_and_pass_three_word_struct @ 0x104ce9ca
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 238_settings_framework (unit names are model-proposed)
 * purpose:
 *   Copies three words from a sub-object into a temporary struct and passes it to a helper.
 * summary:
 *   The function allocates a temporary object via cls_105b572c_new, then copies three
 *   32-bit values from the object pointed to by *(param_1 + 0x34) (at offsets 4, 0xc, and
 *   0x10) into the temporary struct. It calls allocate_and_init_event_struct_1049aa36 with
 *   four arguments: a pointer from *(param_1 + 0x2c), a pointer to param_1+4, the temporary
 *   struct, and a pointer to param_1+0x4c. Finally, it calls query_flag_with_timeout with
 *   param_1 and the constant 2, cleans up the temporary object with cls_105b572c_delete,
 *   and returns the result of query_flag_with_timeout.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t build_and_pass_three_word_struct(int param_1)

{
  uint32_t uVar1;
  uintptr_t sp;
  uint32_t auStack_1c0 [3];
  uint32_t uStack_1b4;
  uint32_t uStack_1b0;
  
  cls_105b572c_new(auStack_1c0);
  auStack_1c0[0] = *(uint32_t *)(*(int *)(param_1 + 0x34) + 4);
  uStack_1b4 = *(uint32_t *)(*(int *)(param_1 + 0x34) + 0xc);
  uStack_1b0 = *(uint32_t *)(*(int *)(param_1 + 0x34) + 0x10);
  allocate_and_init_event_struct_1049aa36(*(int *)(param_1 + 0x2c),param_1 + 4,auStack_1c0,param_1 + 0x4c);
  uVar1 = query_flag_with_timeout(param_1,2);
  cls_105b572c_delete(auStack_1c0,2);
  return uVar1;
}
