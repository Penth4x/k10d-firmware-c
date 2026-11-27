/* @k10d configure_sensor_readout_params_104f43c0 @ 0x104f43c0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 258_ae_spi_transfer (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void configure_sensor_readout_params_104f43c0(int param_1,void *param_2,uint32_t *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint32_t uVar5;
  uint uVar6;
  
  set_pointer_and_clear_flag((int *)(param_1 + 0x18),param_2);
  set_flag_bit_8_in_dat_40128202(*(uint32_t *)(param_1 + 0xc),1);
  set_flag_at_40128302(*(uint32_t *)(param_1 + 0xc),0);
  uVar1 = (uint)*(ushort *)((int)param_3 + 0x1e);
  uVar4 = 0x400;
  uVar3 = (int)uVar1 >> 10;
  uVar6 = uVar1 + uVar3 * -0x400 & 0xffff;
  while (0x400 < uVar6) {
    uVar4 = uVar4 - 0x80 & 0xffff;
    uVar3 = uVar1 / uVar4;
    uVar6 = uVar1 % uVar4;
  }
  if (uVar6 == 0) {
    if (uVar3 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = uVar3 - 1;
    }
    uVar3 = uVar3 & 0xffff;
    uVar6 = uVar4;
  }
  (*(code *)0x1044d9d8/*ROM*/)(*(uint32_t *)(param_1 + 0xc),uVar4,uVar3,uVar6);
  (*(code *)0x1044d592/*ROM*/)(*(uint32_t *)(param_1 + 0xc),*param_3);
  switch(param_3[1]) {
  case 0:
    uVar5 = 0x300;
    break;
  case 1:
    uVar5 = 0x200;
    break;
  case 2:
    uVar5 = 0x200;
    break;
  case 3:
    uVar5 = 0;
    break;
  case 4:
    uVar5 = 0;
    break;
  case 5:
    uVar5 = 0x10;
    break;
  default:
    goto LAB_104f4532;
  case 7:
    uVar5 = 0x10;
  }
  set_low_byte_keep_high_bit(*(uint32_t *)(param_1 + 0x10),uVar5);
LAB_104f4532:
  write_masked_value_to_dat_40128204(*(uint32_t *)(param_1 + 0xc),param_3[4]);
  store_masked_value_to_dat_1044d95c(*(uint32_t *)(param_1 + 0xc),param_3[5]);
  store_masked_value_to_dat_1044d96e(*(uint32_t *)(param_1 + 0xc),param_3[6]);
  write_masked_value_to_dat_40128210(*(uint32_t *)(param_1 + 0xc),*(uint16_t *)(param_3 + 7));
  if (*(char *)(param_3 + 3) == '\0') {
    set_dat_40100b00_flag(*(uint32_t *)(param_1 + 0x10), (uint32_t)param_2);
    set_two_bit_field_in_dat_40128202(*(uint32_t *)(param_1 + 0xc),0);
    uVar5 = 0;
    goto LAB_104f45c2;
  }
  set_dat_40100b00_flag((uint32_t)param_1, (uint32_t)param_2);
  set_two_bit_field_in_dat_40128202(*(uint32_t *)(param_1 + 0xc),param_3[2]);
  iVar2 = param_3[2];
  if (iVar2 == 2) {
    set_bit15_of_dat_40100e00(*(uint32_t *)(param_1 + 0x10),1);
    uVar5 = 0x101;
LAB_104f45f6:
    write_low_byte_to_40100e00(*(uint32_t *)(param_1 + 0x10),uVar5);
  }
  else {
    if (iVar2 == 1) {
      uVar5 = 1;
LAB_104f45c2:
      set_bit15_of_dat_40100e00(*(uint32_t *)(param_1 + 0x10),uVar5);
      uVar5 = 0x122;
      goto LAB_104f45f6;
    }
    if (iVar2 == 0) {
      uVar5 = 0;
      goto LAB_104f45c2;
    }
  }
  clear_and_set_flag_bits(*(int *)(param_1 + 0xc) + 0x11,*(uint8_t *)(param_3 + 8));
  clear_and_set_flag_bit_1044df9c(*(int *)(param_1 + 0xc) + 0x11,*(uint8_t *)((int)param_3 + 0x21));
  set_bits_4_to_6_of_dat_40128120(*(int *)(param_1 + 0xc) + 0x11,*(uint16_t *)((int)param_3 + 0x22));
  iVar2 = param_3[9];
  if (iVar2 == 0) {
    uVar5 = 0;
  }
  else if (iVar2 == 1) {
    uVar5 = 1;
  }
  else if (iVar2 == 2) {
    uVar5 = 2;
  }
  else {
    if (iVar2 != 3) goto LAB_104f466e;
    uVar5 = 3;
  }
  set_bits_in_dat_40128120(*(int *)(param_1 + 0xc) + 0x11,uVar5);
LAB_104f466e:
  write_masked_value_to_dat_1044e06e(*(int *)(param_1 + 0xc) + 0x11,*(uint16_t *)(param_3 + 10));
  write_clamped_value_to_dat_40128126(*(int *)(param_1 + 0xc) + 0x11,*(uint16_t *)((int)param_3 + 0x2a));
  write_masked_value_to_dat_1044e0be(*(int *)(param_1 + 0xc) + 0x11,*(uint16_t *)(param_3 + 0xb));
  store_masked_value_to_dat_1044e0e0(*(int *)(param_1 + 0xc) + 0x11,*(uint16_t *)((int)param_3 + 0x2e));
  set_dat_40128280_flag(*(int *)(param_1 + 0xc) + 0x11,*(uint8_t *)(param_3 + 0xc));
  write_two_bytes_to_dat(*(int *)(param_1 + 0xc) + 0x11,*(uint16_t *)((int)param_3 + 0x32),
               *(uint16_t *)(param_3 + 0xd));
  set_irq_enable_bit(*(int *)(param_1 + 0x14),-0x7fffffff,0x300);
  set_dat_40128200_flag(*(uint32_t *)(param_1 + 0xc),1);
  write_byte_to_mmio_40100000(*(uint32_t *)(param_1 + 0x10),1);
  set_bit14_in_dat_40128100(*(uint32_t *)(param_1 + 0xc),1);
  return;
}
