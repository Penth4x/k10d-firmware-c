/* @k10d dispatch_imgp_irq_control @ 0x104f9de2
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 261_ae_ev_offset_control (unit names are model-proposed)
 * purpose:
 *   Dispatches a command ID to a specific image-processor IRQ control routine via a switch
 *   statement.
 * summary:
 *   The function takes a command ID in param_2 and an object pointer in param_1. It
 *   extracts a sub-object pointer from offset 0x108 of param_1 and passes it to one of
 *   several callees based on the command ID. Two callees are explicitly named
 *   imgp_irq_enable and rescon0_irq_enable, indicating this manages interrupts for the
 *   image processor (PRIME) and resource controllers. The return value is the result of the
 *   selected callee, often a boolean status.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104f9dfc) overlaps instruction at (ram,0x104f9dfa)
    */

uint dispatch_imgp_irq_control(int param_1,uint32_t param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  switch(param_2) {
  case 0x80000001/*SDRAM*/:
    uVar1 = read_mmio_word_masked_1045209e(*(uint32_t *)(param_1 + 0x108));
    break;
  case 0x80000002/*SDRAM*/:
    uVar1 = imgp_irq_enable(*(uint32_t *)(param_1 + 0x108));
    break;
  case 0x80000003/*SDRAM*/:
    uVar1 = read_gpio_key_port_bits_1045211e(*(uint32_t *)(param_1 + 0x108));
    break;
  case 0x80000004/*SDRAM*/:
    uVar1 = read_mmio_word_and_mask_10452140(*(uint32_t *)(param_1 + 0x108));
    break;
  case 0x80000005/*SDRAM*/:
    uVar1 = read_mmio_status_bits_10452162(*(uint32_t *)(param_1 + 0x108));
    break;
  case 0x80000006/*SDRAM*/:
    uVar1 = read_status_bits_15_14_11_10_10452184(*(uint32_t *)(param_1 + 0x108));
    break;
  case 0x80000007/*SDRAM*/:
    uVar1 = read_two_bit_status_field(*(uint32_t *)(param_1 + 0x108));
    break;
  case 0x80000008/*SDRAM*/:
    uVar1 = read_two_bit_field_from_registers_1045229e(*(uint32_t *)(param_1 + 0x108));
    break;
  case 0x80000009/*SDRAM*/:
    uVar1 = read_two_bit_field_from_registers_104522fc(*(uint32_t *)(param_1 + 0x108));
    break;
  case 0x8000000a/*SDRAM*/:
    uVar1 = read_bits_8_11_from_40000006(*(uint32_t *)(param_1 + 0x108));
    break;
  case 0x8000000b/*SDRAM*/:
    uVar1 = read_gpio_key_port_bits_1045248a(*(uint32_t *)(param_1 + 0x108));
    break;
  case 0x8000000c/*SDRAM*/:
    uVar1 = read_status_bits_10_15(*(uint32_t *)(param_1 + 0x108));
    break;
  case 0x8000000d/*SDRAM*/:
    iVar2 = test_bit15_of_dat_400a0030(*(uint32_t *)(param_1 + 0x108));
    uVar1 = (uint)(iVar2 != 0);
  case 0x8000001a/*SDRAM*/:
  case 0x8000001b/*SDRAM*/:
LAB_104fa03c:
    break;
  case 0x8000000e/*SDRAM*/:
    uVar1 = read_mmio_bits_13_15(*(uint32_t *)(param_1 + 0x108));
    break;
  case 0x8000000f/*SDRAM*/:
    uVar1 = read_bits_8_11_from_40030402(*(uint32_t *)(param_1 + 0x108));
    break;
  case 0x80000010/*SDRAM*/:
    uVar1 = read_byte_at_0x4003000e(*(uint32_t *)(param_1 + 0x108));
    break;
  case 0x80000011/*SDRAM*/:
    uVar1 = rescon0_irq_enable(*(uint32_t *)(param_1 + 0x108));
    break;
  case 0x80000012/*SDRAM*/:
    uVar1 = rescon1_irq_enable(*(uint32_t *)(param_1 + 0x108));
    break;
  case 0x80000013/*SDRAM*/:
    iVar2 = clock_set_check(*(uint32_t *)(param_1 + 0x108));
    uVar1 = (uint)(iVar2 != 0);
    goto LAB_104fa03c;
  case 0x80000014/*SDRAM*/:
    iVar2 = check_bit15_of_dat_400d0004(*(uint32_t *)(param_1 + 0x108));
    uVar1 = (uint)(iVar2 != 0);
    goto LAB_104fa03c;
  case 0x80000015/*SDRAM*/:
    uVar1 = rtc_read_reg_pair_0106(*(uint32_t *)(param_1 + 0x108));
    break;
  case 0x80000016/*SDRAM*/:
    iVar2 = test_bit15_of_dat_400e0014(*(uint32_t *)(param_1 + 0x108));
    uVar1 = (uint)(iVar2 != 0);
    goto LAB_104fa03c;
  case 0x80000017/*SDRAM*/:
    iVar2 = check_bit15_of_0x4007000c(*(uint32_t *)(param_1 + 0x108));
    uVar1 = (uint)(iVar2 != 0);
    goto LAB_104fa03c;
  case 0x80000018/*SDRAM*/:
    uVar1 = read_mmio_word_and_mask_bits_10452a00(*(uint32_t *)(param_1 + 0x108));
    break;
  case 0x80000019/*SDRAM*/:
    uVar1 = read_mmio_status_bits_10452a44(*(uint32_t *)(param_1 + 0x108));
    goto LAB_104fa03c;
  default:
    uVar1 = 0;
    goto LAB_104fa03c;
  }
  return uVar1;
}
