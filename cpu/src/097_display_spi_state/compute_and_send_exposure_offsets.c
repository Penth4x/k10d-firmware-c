/* @k10d compute_and_send_exposure_offsets @ 0x1041dce4
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Calculates two exposure adjustment values from parameters and sends them to a display
 *   or control object.
 * summary:
 *   The function processes two input parameters (param_2, param_3) by calling helper
 *   functions (compute_lens_fw_crc32, multiply_two_floats) to derive two integer values
 *   (iVar2, iVar3). It applies a correction based on a short value at offset 0xb4 in the
 *   object pointed to by param_1. If a flag at offset 0x40 of the object at param_1+0xf4 is
 *   set, it sends these values via copy_stream_bytes_into_struct. Finally, it invokes a
 *   virtual method (slot at offset 0x84) on the object at param_1+0x2c, passing the
 *   computed values. The caller execute_capture_sequence suggests this is part of the
 *   exposure or metering setup during capture.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void compute_and_send_exposure_offsets(void *param_1,uint param_2,uint param_3)

{
  uint extraout_r4;
  uint extraout_r4_00;
  uint uVar1;
  uint extraout_r4_01;
  uint extraout_r4_02;
  uint extraout_r4_03;
  int iVar2;
  uint extraout_r4_04;
  int iVar3;
  uint extraout_r5;
  uint extraout_r5_00;
  uint extraout_r5_01;
  uint extraout_r5_02;
  uint extraout_r5_03;
  uint extraout_r5_04;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint64_t uVar7;
  uint32_t uStack_c;
  
  if (param_2 < 0x2000) {
    uVar1 = 0;
    uStack_c = 0;
  }
  else {
    compute_lens_fw_crc32(param_2);
    multiply_two_floats(extraout_r4,extraout_r5,0x3f200000,0);
    uVar7 = (*(code *)0x10544eca/*ROM*/)();
    multiply_two_floats((uint)((ulonglong)uVar7 >> 0x20),(uint)uVar7,0x40340000,0);
    uVar1 = extraout_r4_00;
    uStack_c = extraout_r5_00;
  }
  if (param_3 < 0x2000) {
    uVar5 = 0;
    uVar4 = 0;
  }
  else {
    compute_lens_fw_crc32(param_3);
    multiply_two_floats(extraout_r4_01,extraout_r5_01,0x3f200000,0);
    uVar7 = (*(code *)0x10544eca/*ROM*/)();
    multiply_two_floats((uint)((ulonglong)uVar7 >> 0x20),(uint)uVar7,0x40340000,0);
    uVar4 = extraout_r4_02;
    uVar5 = extraout_r5_02;
  }
  multiply_two_floats(uVar1,uStack_c,0x40c38800,0);
  iVar2 = normalize_fixed_point_value_105448ac(extraout_r4_03,extraout_r5_03);
  multiply_two_floats(uVar4,uVar5,0x40c38800,0);
  iVar3 = normalize_fixed_point_value_105448ac(extraout_r4_04,extraout_r5_04);
  if (*(short *)((int)param_1 + 0xb4) != 0) {
    iVar2 = iVar2 + (uint)*(ushort *)((int)param_1 + 0xb4) * -0xeb2e;
    iVar3 = iVar3 + (uint)*(ushort *)((int)param_1 + 0xb4) * -0xeb2e;
  }
  if (*(char *)(*(int *)((int)param_1 + 0xf4) + 0x40) != '\0') {
    append_bytes_to_ring_buffer(*(int *)((int)param_1 + 0xf4),0x1059d404/*ROM*/,0);
    copy_stream_bytes_into_struct((int)(*(uint32_t *)((int)param_1 + 0xf4)),(void *)(iVar2),(int)(1),(void *)(0));
    copy_stream_bytes_into_struct((int)(*(uint32_t *)((int)param_1 + 0xf4)),(void *)(iVar3),(int)(1),(void *)(0));
    append_newline_to_buffer(*(int *)((int)param_1 + 0xf4),0);
    append_bytes_to_ring_buffer(*(int *)((int)param_1 + 0xf4),0x1059d414/*ROM*/,0);
    copy_stream_bytes_into_struct((int)(*(uint32_t *)((int)param_1 + 0xf4)),(void *)(*(uint16_t *)((int)param_1 + 0xb4)),(int)(1),(void *)(0));
    append_newline_to_buffer(*(int *)((int)param_1 + 0xf4),0);
  }
  iVar6 = *(int *)(*(int *)((int)param_1 + 0x2c) + 4);
  (((vtbl_entry*)(iVar6))[16].fn)
            (*(int *)((int)param_1 + 0x2c) + (int)((vtbl_entry*)(iVar6))[16].adj,iVar2,iVar3);
  return;
}
