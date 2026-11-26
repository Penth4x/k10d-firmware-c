/* @k10d run_test_mode_sequence @ 0x10419b82
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Executes a nested loop of 20 outer and 4 inner iterations, calling helper functions and
 *   writing values to a buffer.
 * summary:
 *   The function checks a condition based on param_1 + 0x84 and a byte at offset 0x8c0. If
 *   true, it initializes a local struct, calls several helpers, and enters a nested loop.
 *   The outer loop runs 20 times (iStack_18 < 0x10), and the inner loop runs 4 times
 *   (iStack_20 = 4). Inside the loops, it calls invoke_virtual_method_on_object_10419afe,
 *   reset_and_query_state, and a virtual function, then writes results to iVar3 via
 *   copy_stream_bytes_into_struct. It also calls invoke_virtual_method_on_object_10419b48
 *   and check_kernel_call_success_10459fea(10) in each outer iteration.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10419e1e) overlaps instruction at (ram,0x10419e1c)
    */

void run_test_mode_sequence(int param_1)

{
  struct {
    uint32_t uStack_14;
    uint32_t uStack_10;
    uint32_t uStack_c;
  } _cfg_14;
  uint32_t uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uintptr_t sp;
  int iStack_20;
  int iStack_18;
  _cfg_14.uStack_14 = 0;
  _cfg_14.uStack_10 = 0;
  _cfg_14.uStack_c = 0;
  iVar3 = *(int *)(param_1 + 0x84) + 0x880;
  if ((iVar3 != 0) && (*(char *)(*(int *)(param_1 + 0x84) + 0x8c0) != '\0')) {
    test_mode_state_reset((void *)(*(int *)(param_1 + 0x84) + 0x148));
    append_bytes_to_ring_buffer(iVar3,0x1059c7a4/*ROM*/,0);
    invoke_virtual_method_on_object_10419afe(param_1,&_cfg_14.uStack_14);
    uVar1 = reset_and_query_state();
    copy_stream_bytes_into_struct(iVar3,(void*)(uVar1),1,0);
    piVar2 = (int *)(*(int *)(param_1 + 0x84) + 0x1e4);
    iVar4 = *piVar2;
    uVar1 = (((vtbl_entry*)(iVar4))[2].fn)((int)piVar2 + (int)((vtbl_entry*)(iVar4))[2].adj,0);
    copy_stream_bytes_into_struct(iVar3,(void*)(uVar1),1,0);
    copy_stream_bytes_into_struct(iVar3,0,1,0);
    copy_stream_bytes_into_struct(iVar3,0,1,0);
    copy_stream_bytes_into_struct(iVar3,(void*)(_cfg_14.uStack_14),1,0);
    copy_stream_bytes_into_struct(iVar3,(void*)(_cfg_14.uStack_10),1,0);
    copy_stream_bytes_into_struct(iVar3,(void*)(_cfg_14.uStack_c),1,0);
    append_newline_to_buffer(iVar3,0);
    iStack_18 = 1;
    do {
      iVar4 = 1;
      invoke_virtual_method_on_object_10419b48(param_1, __frv_reg_unset(5));
      check_kernel_call_success_10459fea(0xa);
      iStack_20 = 4;
      while( true ) {
        invoke_virtual_method_on_object_10419afe(param_1,&_cfg_14.uStack_14);
        uVar1 = reset_and_query_state();
        copy_stream_bytes_into_struct(iVar3,(void*)(uVar1),1,0);
        piVar2 = (int *)(*(int *)(param_1 + 0x84) + 0x1e4);
        iVar5 = *piVar2;
        uVar1 = (((vtbl_entry*)(iVar5))[2].fn)((int)piVar2 + (int)((vtbl_entry*)(iVar5))[2].adj,0);
        copy_stream_bytes_into_struct(iVar3,(void*)(uVar1),1,0);
        copy_stream_bytes_into_struct(iVar3,(void*)(iStack_18),1,0);
        copy_stream_bytes_into_struct(iVar3,(void*)(iVar4),1,0);
        copy_stream_bytes_into_struct(iVar3,(void*)(_cfg_14.uStack_14),1,0);
        copy_stream_bytes_into_struct(iVar3,(void*)(_cfg_14.uStack_10),1,0);
        copy_stream_bytes_into_struct(iVar3,(void*)(_cfg_14.uStack_c),1,0);
        append_newline_to_buffer(iVar3,0);
        invoke_virtual_method_on_object_10419afe(param_1,&_cfg_14.uStack_14);
        uVar1 = reset_and_query_state();
        copy_stream_bytes_into_struct(iVar3,(void*)(uVar1),1,0);
        piVar2 = (int *)(*(int *)(param_1 + 0x84) + 0x1e4);
        iVar5 = *piVar2;
        uVar1 = (((vtbl_entry*)(iVar5))[2].fn)((int)piVar2 + (int)((vtbl_entry*)(iVar5))[2].adj,0);
        copy_stream_bytes_into_struct(iVar3,(void*)(uVar1),1,0);
        copy_stream_bytes_into_struct(iVar3,(void*)(iStack_18),1,0);
        copy_stream_bytes_into_struct(iVar3,(void*)(iVar4 + 1),1,0);
        copy_stream_bytes_into_struct(iVar3,(void*)(_cfg_14.uStack_14),1,0);
        copy_stream_bytes_into_struct(iVar3,(void*)(_cfg_14.uStack_10),1,0);
        copy_stream_bytes_into_struct(iVar3,(void*)(_cfg_14.uStack_c),1,0);
        append_newline_to_buffer(iVar3,0);
        iStack_20 = iStack_20 + -1;
        if (iStack_20 < 0) break;
        iVar4 = iVar4 + 2;
      }
      check_kernel_call_success_10459fea(0xa);
      iStack_18 = iStack_18 + 1;
    } while (iStack_18 < 0x10);
  }
  return;
}
