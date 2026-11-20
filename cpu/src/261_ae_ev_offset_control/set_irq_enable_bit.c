/* @k10d set_irq_enable_bit @ 0x104f9596
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 261_ae_ev_offset_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_irq_enable_bit(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint32_t uVar2;
  int iVar3;
  
  call_kernel_with_short_id((uint32_t *)(param_1 + 0x118));
  switch(param_2) {
  case -0x7fffffff:
    uVar2 = *(uint32_t *)(param_1 + 0x108);
    uVar1 = read_mmio_word_masked_1045209e(uVar2);
    write_mmio_40128002(uVar2,(uVar1 | param_3) & 0xffff);
    break;
  case -0x7ffffffe:
    uVar2 = *(uint32_t *)(param_1 + 0x108);
    uVar1 = imgp_irq_enable(uVar2);
    imgp_irq_enable_set(uVar2,(uVar1 | param_3) & 0xffff);
    break;
  case -0x7ffffffd:
    uVar2 = *(uint32_t *)(param_1 + 0x108);
    uVar1 = read_gpio_key_port_bits_1045211e(uVar2);
    imgp_irq_mask_write(uVar2,(uVar1 | param_3) & 0xffff);
    break;
  case -0x7ffffffc:
    uVar2 = *(uint32_t *)(param_1 + 0x108);
    uVar1 = read_mmio_word_and_mask_10452140(uVar2);
    write_mmio_4000c310_masked(uVar2,(uVar1 | param_3) & 0xffff);
    break;
  case -0x7ffffffb:
    uVar2 = *(uint32_t *)(param_1 + 0x108);
    uVar1 = read_mmio_status_bits_10452162(uVar2);
    write_masked_value_to_mmio_10452152(uVar2,(uVar1 | param_3) & 0xffff);
    break;
  case -0x7ffffffa:
    uVar2 = *(uint32_t *)(param_1 + 0x108);
    uVar1 = read_status_bits_15_14_11_10_10452184(uVar2);
    write_masked_value_to_dat_4000c510(uVar2,(uVar1 | param_3) & 0xffff);
    break;
  case -0x7ffffff9:
    uVar2 = *(uint32_t *)(param_1 + 0x108);
    uVar1 = read_two_bit_status_field(uVar2);
    write_two_mmio_registers_1045221e(uVar2,(uVar1 | param_3) & 0xffff);
    break;
  case -0x7ffffff8:
    uVar2 = *(uint32_t *)(param_1 + 0x108);
    uVar1 = read_two_bit_field_from_registers_1045229e(uVar2);
    write_dsp_ram_control_bits(uVar2,(uVar1 | param_3) & 0xffff);
    break;
  case -0x7ffffff7:
    uVar2 = *(uint32_t *)(param_1 + 0x108);
    uVar1 = read_two_bit_field_from_registers_104522fc(uVar2);
    write_two_mmio_registers_104522da(uVar2,(uVar1 | param_3) & 0xffff);
    break;
  case -0x7ffffff6:
    uVar2 = *(uint32_t *)(param_1 + 0x108);
    uVar1 = read_bits_8_11_from_40000006(uVar2);
    write_shifted_value_to_mmio_10452452(uVar2,(uVar1 | param_3) & 0xffff);
    break;
  case -0x7ffffff5:
    uVar2 = *(uint32_t *)(param_1 + 0x108);
    uVar1 = read_gpio_key_port_bits_1045248a(uVar2);
    write_shifted_value_to_mmio_10452478(uVar2,(uVar1 | param_3) & 0xffff);
    break;
  case -0x7ffffff4:
    uVar2 = *(uint32_t *)(param_1 + 0x108);
    uVar1 = read_status_bits_10_15(uVar2);
    write_shifted_value_to_mmio_1045249e(uVar2,(uVar1 | param_3) & 0xffff);
    break;
  case -0x7ffffff3:
    set_mmio_bit15_flag(*(uint32_t *)(param_1 + 0x108),1);
    break;
  case -0x7ffffff2:
    uVar2 = *(uint32_t *)(param_1 + 0x108);
    uVar1 = read_mmio_bits_13_15(uVar2);
    store_masked_param_to_dat_1045258e(uVar2,(uVar1 | param_3) & 0xffff);
    break;
  case -0x7ffffff1:
    uVar2 = *(uint32_t *)(param_1 + 0x108);
    uVar1 = read_bits_8_11_from_40030402(uVar2);
    write_masked_value_to_mmio_104525d2(uVar2,(uVar1 | param_3) & 0xffff);
    break;
  case -0x7ffffff0:
    uVar2 = *(uint32_t *)(param_1 + 0x108);
    uVar1 = read_byte_at_0x4003000e(uVar2);
    write_byte_to_mmio_4003000e(uVar2,uVar1 & 0xff | param_3 & 0xff);
    break;
  case -0x7fffffef:
    uVar2 = *(uint32_t *)(param_1 + 0x108);
    uVar1 = rescon0_irq_enable(uVar2);
    rescon0_irq_set_enable(uVar2,(uVar1 | param_3) & 0xffff);
    break;
  case -0x7fffffee:
    uVar2 = *(uint32_t *)(param_1 + 0x108);
    uVar1 = rescon1_irq_enable(uVar2);
    rescon1_irq_enable_set(uVar2,(uVar1 | param_3) & 0xffff);
    break;
  case -0x7fffffed:
    set_watch_counter_enable(*(uint32_t *)(param_1 + 0x108),1);
    break;
  case -0x7fffffec:
    set_dat_400d0004_flag(*(uint32_t *)(param_1 + 0x108),1);
    break;
  case -0x7fffffeb:
    uVar2 = *(uint32_t *)(param_1 + 0x108);
    uVar1 = rtc_read_reg_pair_0106(uVar2);
    write_two_mmio_bits(uVar2,(uVar1 | param_3) & 0xffff);
    break;
  case -0x7fffffea:
    set_dat_400e0014_flag(*(uint32_t *)(param_1 + 0x108),1);
    break;
  case -0x7fffffe9:
    set_mmio_flag_bit15(*(uint32_t *)(param_1 + 0x108),1);
    break;
  case -0x7fffffe8:
    uVar2 = *(uint32_t *)(param_1 + 0x108);
    uVar1 = read_mmio_word_and_mask_bits_10452a00(uVar2);
    write_masked_value_to_mmio_104529f0(uVar2,(uVar1 | param_3) & 0xffff);
    break;
  case -0x7fffffe7:
    uVar2 = *(uint32_t *)(param_1 + 0x108);
    uVar1 = read_mmio_status_bits_10452a44(uVar2);
    write_masked_value_to_mmio_10452a34(uVar2,(uVar1 | param_3) & 0xffff);
    break;
  case -0x7fffffe6:
    iVar3 = *(int *)(*(int *)(param_1 + 0x110) + 4);
    (((vtbl_entry*)(iVar3))[13].fn)(*(int *)(param_1 + 0x110) + (int)((vtbl_entry*)(iVar3))[13].adj,1);
    break;
  case -0x7fffffe5:
    iVar3 = *(int *)(*(int *)(param_1 + 0x114) + 4);
    (((vtbl_entry*)(iVar3))[13].fn)(*(int *)(param_1 + 0x114) + (int)((vtbl_entry*)(iVar3))[13].adj,1);
    break;
  default:
  }
  check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0x118));
  return;
}
