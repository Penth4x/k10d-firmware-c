/* @k10d configure_sensor_readout_params_104f3de0 @ 0x104f3de0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 258_ae_spi_transfer (unit names are model-proposed)
 * purpose:
 *   Configures sensor readout geometry and timing parameters from a settings struct.
 * summary:
 *   The function takes a settings struct (param_3) and writes numerous fields to two object
 *   pointers stored in param_1 (at offsets 0xc and 0x10). It calculates readout dimensions
 *   (width/height) from fields in param_3, handling alignment and offset calculations. It
 *   then calls a series of setter functions (FUN_1044dxxx, FUN_1044exxx) to apply these
 *   values, likely configuring the image sensor's readout window, binning, and timing. The
 *   final calls enable the configuration.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void configure_sensor_readout_params_104f3de0(int param_1,void *param_2,uint32_t *param_3)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  uint uVar5;
  uint uVar6;
  uint32_t uVar7;
  uintptr_t sp;
  uint16_t uStack_18;
  uint16_t uStack_16;
  uint16_t uStack_14;
  uint16_t uStack_12;
  uint16_t uStack_10;
  uint16_t uStack_e;
  uint16_t uStack_c;
  uint16_t uStack_a;
  
  set_pointer_and_clear_flag((int *)(param_1 + 0x18),param_2);
  pvVar4 = (void *)get_or_init_singleton_object_1051d40e();
  update_camera_state_flags(pvVar4,3,1);
  set_flag_bit_8_in_dat_40128202(*(uint32_t *)(param_1 + 0xc),0);
  sVar1 = *(short *)(param_3 + 10);
  uVar5 = (uint)*(ushort *)((int)param_3 + 0x26);
  uVar3 = (int)uVar5 >> 10;
  iVar2 = uVar5 + uVar3 * -0x400 + 0x3f;
  if (*(char *)(param_3 + 0xe) != '\0') {
    uVar5 = (uint)*(ushort *)(param_3 + 0x12);
  }
  if (((int)(((uint)(iVar2 >> 5) >> 0x1a) + iVar2) >> 6 & 0xffffU) == 0) {
    if (uVar3 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = uVar3 - 1;
    }
    uVar3 = uVar3 & 0xffff;
  }
  (*(code *)0x1044d7e6/*ROM*/)(*(uint32_t *)(param_1 + 0xc),uVar3);
  (*(code *)0x1044d81e/*ROM*/)(*(uint32_t *)(param_1 + 0xc),0x10);
  (*(code *)0x1044d83c/*ROM*/)(*(uint32_t *)(param_1 + 0xc),sVar1 + 0x10);
  uVar6 = 0x400;
  if (uVar5 <= uVar3 * 0x400 && uVar3 * 0x400 - uVar5 != 0) {
    do {
      uVar6 = uVar6 - 0x80 & 0xffff;
    } while ((int)uVar5 <= (int)(uVar6 * uVar3) && uVar6 * uVar3 - uVar5 != 0);
  }
  uVar5 = uVar5 - uVar6 * uVar3 & 0xffff;
  if (uVar5 == 0) {
    if (uVar3 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = uVar3 - 1;
    }
    uVar3 = uVar3 & 0xffff;
    uVar5 = uVar6;
  }
  (*(code *)0x1044d9d8/*ROM*/)(*(uint32_t *)(param_1 + 0xc),uVar6,uVar3,uVar5);
  (*(code *)0x1044d592/*ROM*/)(*(uint32_t *)(param_1 + 0xc),*param_3);
  (*(code *)0x1044d6bc/*ROM*/)(*(uint32_t *)(param_1 + 0xc),param_3[1]);
  (*(code *)0x1044d78c/*ROM*/)(*(uint32_t *)(param_1 + 0xc),0);
  switch(param_3[1]) {
  case 0:
    uVar7 = 0x300;
    break;
  case 1:
    uVar7 = 0x200;
    break;
  case 2:
    uVar7 = 0x200;
    break;
  case 3:
    uVar7 = 0;
    break;
  case 4:
    uVar7 = 0;
    break;
  case 5:
    uVar7 = 0x10;
    break;
  default:
    goto LAB_104f3f5e;
  case 7:
    uVar7 = 0x10;
  }
  set_low_byte_keep_high_bit(*(uint32_t *)(param_1 + 0x10),uVar7);
LAB_104f3f5e:
  set_flag_at_40128302(*(uint32_t *)(param_1 + 0xc),*(uint8_t *)((int)param_3 + 0xd));
  if (*(char *)((int)param_3 + 0xd) == '\0') {
    write_masked_value_to_dat_40128104(*(int *)(param_1 + 0xc),param_3[4]);
  }
  else {
    write_masked_value_to_dat_40128304(*(int *)(param_1 + 0xc) + 0x10,param_3[0xb]);
    store_masked_value_to_dat_1044da46(*(int *)(param_1 + 0xc) + 0x10,param_3[0xc]);
    store_masked_value_to_dat_1044da58(*(int *)(param_1 + 0xc) + 0x10,param_3[0xd]);
  }
  set_bits_8_10_of_dat_40128108(*(uint32_t *)(param_1 + 0xc),*(uint16_t *)(param_3 + 5));
  write_masked_value_to_dat_1044d7c4(*(uint32_t *)(param_1 + 0xc),*(uint16_t *)((int)param_3 + 0x16));
  write_masked_value_to_dat_40128204(*(uint32_t *)(param_1 + 0xc),param_3[6]);
  store_masked_value_to_dat_1044d95c(*(uint32_t *)(param_1 + 0xc),param_3[7]);
  store_masked_value_to_dat_1044d96e(*(uint32_t *)(param_1 + 0xc),param_3[8]);
  write_masked_value_to_dat_40128210(*(uint32_t *)(param_1 + 0xc),*(uint16_t *)(param_3 + 9));
  if (*(char *)(param_3 + 3) == '\0') {
    set_dat_40100b00_flag(*(uint32_t *)(param_1 + 0x10),0);
    set_two_bit_field_in_dat_40128202(*(uint32_t *)(param_1 + 0xc),0);
    uVar7 = 0;
LAB_104f4070:
    set_bit15_of_dat_40100e00(*(uint32_t *)(param_1 + 0x10),uVar7);
    uVar7 = 0x122;
  }
  else {
    set_dat_40100b00_flag(__frv_reg_unset(4), __frv_reg_unset(5));
    set_two_bit_field_in_dat_40128202(*(uint32_t *)(param_1 + 0xc),param_3[2]);
    iVar2 = param_3[2];
    if (iVar2 != 2) {
      if (iVar2 == 1) {
        uVar7 = 1;
      }
      else {
        if (iVar2 != 0) goto LAB_104f40b0;
        uVar7 = 0;
      }
      goto LAB_104f4070;
    }
    set_bit15_of_dat_40100e00(*(uint32_t *)(param_1 + 0x10),1);
    uVar7 = 0x101;
  }
  write_low_byte_to_40100e00(*(uint32_t *)(param_1 + 0x10),uVar7);
LAB_104f40b0:
  set_bit15_of_dat_40100d00(*(uint32_t *)(param_1 + 0x10),0);
  write_mmio_control_word(*(uint32_t *)(param_1 + 0x10),1,1);
  uStack_18 = 0;
  uStack_16 = 0;
  uStack_14 = 0;
  uStack_12 = 0;
  uStack_10 = 0;
  uStack_e = 0;
  uStack_c = 0;
  uStack_a = 0;
  write_masked_shorts_to_mmio_block(*(uint32_t *)(param_1 + 0x10),&uStack_18,&uStack_18);
  if (((*(char *)(param_3 + 0xe) != '\0') && (param_3[0x10] != 0)) && (param_3[0x11] != 0)) {
    set_bit15_of_dat_40100d00(*(uint32_t *)(param_1 + 0x10), __frv_reg_unset(5));
    write_mmio_control_word(*(uint32_t *)(param_1 + 0x10),*(uint16_t *)((int)param_3 + 0x3a),
                 *(uint16_t *)(param_3 + 0xf));
    write_masked_shorts_to_mmio_block((uint32_t)(*(uint32_t *)(param_1 + 0x10)),(ushort *)(param_3[0x10]),(ushort *)(param_3[0x11]));
  }
  set_irq_enable_bit(*(int *)(param_1 + 0x14),-0x7fffffff,0x300);
  set_dat_40128200_flag(*(uint32_t *)(param_1 + 0xc),1);
  write_byte_to_mmio_40100000(*(uint32_t *)(param_1 + 0x10),1);
  set_bit14_in_dat_40128100(*(uint32_t *)(param_1 + 0xc),1);
  return;
}
