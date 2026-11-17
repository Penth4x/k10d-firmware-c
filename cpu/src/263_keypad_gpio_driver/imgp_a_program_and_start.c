/* @k10d imgp_a_program_and_start @ 0x104fe398
 * name: verified (structural evidence: d313: decompile; FRN_IMG_LOG shows the programmed values (640x480, 320x240 rectangles at boot))
 * unit: 263_keypad_gpio_driver (unit names are model-proposed)
 * purpose:
 *   Program engine A from a request block (mode, fields, strides, sizes, two rectangle
 *   addresses), enable completion bit 0x20 and start it.
 * summary:
 *   VERIFIED: d313: decompile; FRN_IMG_LOG shows the programmed values (640x480, 320x240
 *   rectangles at boot)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void imgp_a_program_and_start(int param_1,uint32_t *param_2)

{
  uint32_t uVar1;
  
  switch(*param_2) {
  case 0:
    uVar1 = 0;
    break;
  case 1:
    uVar1 = 0x100;
    break;
  case 2:
    uVar1 = 0x200;
    break;
  case 3:
    uVar1 = 0x300;
    break;
  case 4:
    uVar1 = 0x400;
    break;
  case 5:
    uVar1 = 0x500;
    break;
  case 6:
    uVar1 = 0x600;
    break;
  case 7:
    uVar1 = 0x700;
    break;
  default:
    goto switchD_104fe3b0_default;
  }
  imgp_a_set_mode_10459050(*(uint32_t *)(param_1 + 0xc),uVar1);
switchD_104fe3b0_default:
  imgp_a_set_mode(*(uint32_t *)(param_1 + 0xc),*(uint16_t *)(param_2 + 7));
  imgp_a_set_f82_hi(*(uint32_t *)(param_1 + 0xc),*(uint16_t *)((int)param_2 + 0x1e));
  imgp_a_set_f82_lo(*(uint32_t *)(param_1 + 0xc),*(uint16_t *)(param_2 + 8));
  imgp_a_set_w84(*(uint32_t *)(param_1 + 0xc),param_2[9]);
  imgp_a_set_w88(*(uint32_t *)(param_1 + 0xc),param_2[10]);
  imgp_a_set_stride0(*(uint32_t *)(param_1 + 0xc),*(uint16_t *)(param_2 + 4));
  imgp_a_set_stride1(*(uint32_t *)(param_1 + 0xc),*(uint16_t *)((int)param_2 + 0x12));
  imgp_a_set_size0(*(uint32_t *)(param_1 + 0xc),*(uint16_t *)(param_2 + 3));
  imgp_a_set_size1(*(uint32_t *)(param_1 + 0xc),*(uint16_t *)((int)param_2 + 0xe));
  imgp_a_set_addr0(*(uint32_t *)(param_1 + 0xc),
                   (uint)*(ushort *)(param_2 + 4) * (uint)*(ushort *)((int)param_2 + 0x16) +
                   param_2[1] + (uint)*(ushort *)(param_2 + 5));
  imgp_a_set_addr1(*(uint32_t *)(param_1 + 0xc),
                   (uint)*(ushort *)((int)param_2 + 0x12) * (uint)*(ushort *)((int)param_2 + 0x1a) +
                   param_2[2] + (uint)*(ushort *)(param_2 + 6));
  imgp_a_set_opt(*(uint32_t *)(param_1 + 0xc),0);
  set_irq_enable_bit(*(int *)(param_1 + 0x18),-0x7ffffffe,0x20);
  imgp_a_start(*(uint32_t *)(param_1 + 0xc),1);
  return;
}
