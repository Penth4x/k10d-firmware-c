/* @k10d write_buffer_in_chunks_100f0a94 @ 0x100f0a94
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * purpose:
 *   Writes a buffer to a destination in 256-byte chunks, toggling a control flag between
 *   iterations.
 * summary:
 *   Calls init_p67_base_and_vectors and checks a status via check_status_is_zero_100f0b4e.
 *   If param_2 is zero, it performs a single write via loop_call_helper_with_offset.
 *   Otherwise, it loops 64 times (0x4000 / 0x100), calling invoke_function_pointer with a
 *   toggling boolean and loop_call_helper_with_offset with an incrementing offset. Returns
 *   1 on success, 0 on failure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t write_buffer_in_chunks_100f0a94(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  uintptr_t sp;
  uint8_t auStack_c [4];
  
  init_p67_base_and_vectors();
  if (param_2 == 0) {
    iVar1 = check_status_is_zero_100f0b4e();
    if ((iVar1 != 0) && (iVar1 = loop_call_helper_with_offset(0,1,param_1,auStack_c), iVar1 == 0)) {
LAB_100f0b08:
      invoke_function_pointer(0);
      return 1;
    }
  }
  else {
    iVar1 = check_status_is_zero_100f0b4e();
    if (iVar1 != 0) {
      bVar3 = true;
      uVar2 = 0;
      do {
        invoke_function_pointer(bVar3);
        bVar3 = !bVar3;
        iVar1 = loop_call_helper_with_offset(uVar2,0x100,uVar2 * 0x200 + param_1,auStack_c);
        if (iVar1 != 0) {
          return 0;
        }
        uVar2 = uVar2 + 0x100 & 0xffff;
      } while (uVar2 < 0x4000);
      goto LAB_100f0b08;
    }
  }
  return 0;
}
