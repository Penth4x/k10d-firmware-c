/* @k10d imgp_c_program_and_start @ 0x104fe976
 * name: verified (structural evidence: d313: decompile (enables 0x80000002 bit 8, then imgp_c_start))
 * unit: 263_keypad_gpio_driver (unit names are model-proposed)
 * purpose:
 *   Program engine C from a request block, enable completion bit 0x08 and start it.
 * summary:
 *   VERIFIED: d313: decompile (enables 0x80000002 bit 8, then imgp_c_start)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void imgp_c_program_and_start(int param_1,void *param_2,int *param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  void *pvVar5;
  uint uVar6;
  uint32_t uVar7;
  uintptr_t sp;
  uint8_t *puVar8;
  uint8_t auStack_14 [4];
  
  puVar8 = auStack_14;
  set_pointer_and_clear_flag((int *)(param_1 + 0x4c),param_2);
  pvVar5 = (void *)get_or_init_singleton_object_1051d40e();
  uVar6 = read_bounded_array_element_1051d696(pvVar5,7);
  update_camera_state_flags(pvVar5,7,uVar6 | 4);
  switch(*param_3) {
  case 0:
    uVar7 = 0;
    break;
  case 1:
    uVar7 = 1;
    break;
  case 2:
    uVar7 = 0x81;
    break;
  case 3:
    uVar7 = 2;
    break;
  case 4:
    uVar7 = 3;
    break;
  case 5:
    uVar7 = 0x83;
    break;
  case 6:
    uVar7 = 4;
    break;
  case 7:
    uVar7 = 0x84;
    break;
  case 8:
    uVar7 = 5;
    break;
  case 9:
    uVar7 = 6;
    break;
  default:
    goto switchD_104fe9c2_default;
  }
  set_engine_c_mode_bits(*(uint32_t *)(param_1 + 0x14),uVar7);
switchD_104fe9c2_default:
  write_imgp_c_program_mask(*(uint32_t *)(param_1 + 0x14),*(uint16_t *)(param_3 + 1));
  write_engine_c_control_word(*(uint32_t *)(param_1 + 0x14),*(uint16_t *)((int)param_3 + 6));
  write_engine_c_status_bits(*(uint32_t *)(param_1 + 0x14),*(uint16_t *)(param_3 + 2));
  write_masked_value_to_mmio_10451cfa(*(uint32_t *)(param_1 + 0x14),*(uint16_t *)((int)param_3 + 10));
  write_masked_value_to_gpio_port_10451d0a(*(uint32_t *)(param_1 + 0x14),*(uint16_t *)(param_3 + 3));
  write_masked_value_to_gpio_port_10451d1a(*(uint32_t *)(param_1 + 0x14),param_3[4]);
  write_masked_value_to_gpio_port_10451d3e(*(uint32_t *)(param_1 + 0x14),param_3[5]);
  write_masked_value_to_gpio_port_10451d62(*(uint32_t *)(param_1 + 0x14),param_3[6]);
  map_mode_index_to_gpio_value(*(uint32_t *)(param_1 + 0x14),param_3[7]);
  iVar4 = *param_3;
  if ((iVar4 == 0) || (iVar4 == 1)) {
    uVar7 = *(uint32_t *)(param_1 + 0x14);
    uVar1 = *(ushort *)(param_3 + 9);
    uVar2 = *(ushort *)((int)param_3 + 0x26);
    uVar3 = *(ushort *)(param_3 + 10);
    *(uint16_t *)(puVar8 + 2) = *(uint16_t *)((int)param_3 + 0x2a);
    write_four_mmio_values(uVar7,uVar1,uVar2,uVar3,*(ushort *)(puVar8 + 2));
    uVar7 = *(uint32_t *)(param_1 + 0x14);
    uVar1 = *(ushort *)(param_3 + 0xb);
    uVar2 = *(ushort *)((int)param_3 + 0x2e);
    uVar3 = *(ushort *)(param_3 + 0xc);
    *(uint16_t *)(puVar8 + 2) = *(uint16_t *)((int)param_3 + 0x32);
    write_four_12bit_fields_to_mmio(uVar7,uVar1,uVar2,uVar3,*(ushort *)(puVar8 + 2));
  }
  else if (iVar4 == 2) {
    write_12bit_field_to_gpio_port_10451de0(*(uint32_t *)(param_1 + 0x14),*(uint16_t *)(param_3 + 8));
    write_12bit_field_to_gpio_port_10451e02(*(uint32_t *)(param_1 + 0x14),*(uint16_t *)((int)param_3 + 0x22));
  }
  write_key_port_low_bits(*(uint32_t *)(param_1 + 0x14),*(uint16_t *)(param_3 + 0xd));
  write_keypad_port_low_bits(*(uint32_t *)(param_1 + 0x14),*(uint16_t *)((int)param_3 + 0x36));
  set_gpio_key_port_bit_10451f20(*(uint32_t *)(param_1 + 0x14),*(uint8_t *)(param_3 + 0xe));
  set_gpio_key_port_bit_10451f46(*(uint32_t *)(param_1 + 0x14),*(uint8_t *)((int)param_3 + 0x39));
  write_keypad_port_bytes(*(uint32_t *)(param_1 + 0x14),(void *)param_3[0xf]);
  set_irq_enable_bit(*(int *)(param_1 + 0x18),-0x7ffffffe,8);
  imgp_c_start(*(uint32_t *)(param_1 + 0x14),1);
  return;
}
