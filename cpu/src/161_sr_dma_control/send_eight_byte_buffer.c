/* @k10d send_eight_byte_buffer @ 0x10470334
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 161_sr_dma_control (unit names are model-proposed)
 * purpose:
 *   Copies 8 bytes from a source buffer to the stack and passes them to a handler if a flag
 *   is set.
 * summary:
 *   Retrieves a pointer from get_or_create_singleton_object_1046d20c and dereferences
 *   offset 4. If param_3 is non-zero, it copies 8 bytes from param_2 into a local stack
 *   buffer, calls forward_param_to_helper_1046c8e8 with the dereferenced pointer and the
 *   buffer, then calls free_heap_if_flag_set_1045c56c with the buffer and the value 2.
 *   Finally, it calls call_helper_with_second_arg_1046c8d6 with the dereferenced pointer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void send_eight_byte_buffer(uint32_t param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uintptr_t sp;
  uint8_t auStack_10 [8];
  int iVar3;
  
  iVar1 = get_or_create_singleton_object_1046d20c();
  iVar1 = *(int *)(iVar1 + 4);
  if (param_3 != 0) {
    iVar3 = 8;
    do {
      iVar2 = iVar3 + -1;
      (&stack0xffffffef)[iVar3] = *(uint8_t *)(iVar2 + param_2);
      iVar3 = iVar2;
    } while (iVar2 != 0);
    forward_param_to_helper_1046c8e8(iVar1,auStack_10);
    free_heap_if_flag_set_1045c56c(auStack_10,2);
  }
  call_helper_with_second_arg_1046c8d6(iVar1);
  return;
}
