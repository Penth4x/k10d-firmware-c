/* @k10d transfer_buffer_block @ 0x10543456
 * name: model (proposed by the local model from the decompile, confidence 0.80)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Transfers a block of data from a source buffer to a destination, handling allocation
 *   and length clamping.
 * summary:
 *   The function takes a source buffer pointer, length, and destination address. It calls
 *   write_data_block_with_offset to prepare the transfer (retrying with
 *   lens_fw_get_block_ptr on error -5), then uses iterate_context_blocks to move the data.
 *   It updates the destination pointer and clamps the remaining length to the available
 *   space.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int transfer_buffer_block(void)

{
  uint uVar1;
  int iVar2;
  uint *r7_in;
  uint uVar3;
  uintptr_t sp;
  void *in_stack_00000010;
  uint in_stack_00000014;
  uint in_stack_00000018;
  uint *in_stack_0000001c;
  uint uStack_18;
  int iStack_10;
  uint uStack_c;
  
  uVar1 = *(uint *)((int)in_stack_00000010 + 0x10);
  *r7_in = *in_stack_0000001c;
  r7_in[1] = 0;
  uVar3 = in_stack_00000018;
  if ((*in_stack_0000001c != 0) && (in_stack_00000014 != 0)) {
    iVar2 = write_data_block_with_offset(in_stack_00000010,*in_stack_0000001c,in_stack_00000014);
    if (iVar2 != 0) {
      if (iVar2 != -5) {
        return iVar2;
      }
      iVar2 = lens_fw_get_block_ptr(in_stack_00000010,*in_stack_0000001c,&iStack_10);
      if (iVar2 != 0) {
        return -0x389;
      }
      fill_byte_array((void *)(iStack_10 + 8 + in_stack_00000014),0,uVar1 - in_stack_00000014);
      iVar2 = transmit_data_block_with_retry(in_stack_00000010,iStack_10 + 8,*in_stack_0000001c,(int *)&uStack_c);
      clear_lens_update_entry(in_stack_00000010,*in_stack_0000001c);
      if (iVar2 != 0) {
        return iVar2;
      }
      *in_stack_0000001c = uStack_c;
    }
    *r7_in = *in_stack_0000001c;
    if (uVar1 - in_stack_00000014 < in_stack_00000018) {
      uVar3 = in_stack_00000018 - (uVar1 - in_stack_00000014);
    }
    else {
      uVar3 = 0;
    }
  }
  iVar2 = 0;
  if (uVar3 != 0) {
    uStack_18 = unsigned_divide(uVar3,uVar1);
    uVar1 = compute_modulo_10544c28(uVar3,uVar1);
    if (uVar1 != 0) {
      uStack_18 = uStack_18 + 1;
    }
    iVar2 = iterate_context_blocks(in_stack_00000010,uStack_18,(int *)r7_in,(int *)in_stack_0000001c);
  }
  uVar3 = r7_in[1] + (in_stack_00000018 - uVar3);
  r7_in[1] = uVar3;
  if (in_stack_00000018 < uVar3) {
    r7_in[1] = in_stack_00000018;
  }
  return iVar2;
}
