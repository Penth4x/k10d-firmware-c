/* @k10d wait_and_copy_status_word @ 0x104928e2
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 195_capture_event_handler (unit names are model-proposed)
 * purpose:
 *   Polls a status flag until clear, then loops reading and copying an 8-byte value until a
 *   sentinel is reached.
 * summary:
 *   The function first calls call_kernel_with_offset_arg with an offset from param_1 in a
 *   loop until it returns 0, calling destroy_virtual_object in between. It then enters a
 *   do-while loop that calls get_ui_root_object to get a value, passes it to
 *   pop_stack_frame_and_swap to fill a local buffer, and copies 8 bytes from that buffer to
 *   the stack. The loop continues until local_1c equals 0xffff. The specific subsystem is
 *   not identifiable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void wait_and_copy_status_word(int param_1)

{
  int iVar1;
  int iVar2;
  uintptr_t sp;
  int local_1c;
  uint32_t uStack_18;
  uint8_t local_14 [8];
  uint32_t uStack_c;
  
  uStack_c = 0;
  iVar1 = call_kernel_with_offset_arg(*(int *)(param_1 + 0x18) + 4);
  while (iVar1 != 0) {
    destroy_virtual_object((int *)(uStack_c),(uint)(3));
    iVar1 = call_kernel_with_offset_arg(*(int *)(param_1 + 0x18) + 4);
  }
  do {
    iVar1 = get_ui_root_object();
    pop_stack_frame_and_swap(local_14,iVar1);
    iVar1 = 8;
    do {
      iVar2 = iVar1 + -4;
      *(uint32_t *)(&stack0xffffffe0 + iVar1) = *(uint32_t *)(local_14 + iVar2);
      iVar1 = iVar2;
    } while (iVar2 != 0);
  } while (local_1c != 0xffff);
  return;
}
