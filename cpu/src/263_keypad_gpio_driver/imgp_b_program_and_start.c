/* @k10d imgp_b_program_and_start @ 0x104fe72c
 * name: verified (structural evidence: d313: decompile (enables 0x80000002 bit 4, then imgp_b_start))
 * unit: 263_keypad_gpio_driver (unit names are model-proposed)
 * purpose:
 *   Program engine B from a request block, enable completion bit 0x04 and start it.
 * summary:
 *   VERIFIED: d313: decompile (enables 0x80000002 bit 4, then imgp_b_start)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void imgp_b_program_and_start(int param_1,void *param_2,uint32_t *param_3)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  uint32_t uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  set_pointer_and_clear_flag((int *)(param_1 + 0x34),param_2);
  pvVar2 = (void *)get_or_init_singleton_object_1051d40e();
  uVar3 = read_bounded_array_element_1051d696(pvVar2,7);
  update_camera_state_flags(pvVar2,7,uVar3 | 2);
  iVar6 = (uint)*(ushort *)(param_3 + 4) * (uint)*(ushort *)((int)param_3 + 0x16) + param_3[1] +
          (uint)*(ushort *)(param_3 + 5);
  iVar1 = *(ushort *)((int)param_3 + 0xe) - 1;
  iVar7 = (uint)*(ushort *)(param_3 + 4) * iVar1 + iVar6;
  uVar3 = (uint)*(ushort *)((int)param_3 + 0x12);
  iVar5 = uVar3 * *(ushort *)((int)param_3 + 0x1a) + param_3[2] + (uint)*(ushort *)(param_3 + 6);
  iVar8 = uVar3 * (*(ushort *)(param_3 + 3) - 1) + iVar5;
  switch(*param_3) {
  case 0:
    uVar4 = 0;
    break;
  case 1:
    uVar4 = 1;
    break;
  case 2:
    uVar4 = 2;
    break;
  case 3:
    uVar4 = 4;
    goto LAB_104fe7fc;
  case 4:
    uVar4 = 5;
    goto LAB_104fe7fc;
  case 5:
    uVar4 = 6;
LAB_104fe7fc:
    imgp_b_set_mode(*(uint32_t *)(param_1 + 0x10),uVar4);
LAB_104fe7e6:
    imgp_b_set_addr0(*(uint32_t *)(param_1 + 0x10),iVar7);
    goto LAB_104fe8a0;
  case 6:
    uVar4 = 8;
    goto LAB_104fe816;
  case 7:
    uVar4 = 9;
    goto LAB_104fe816;
  case 8:
    uVar4 = 10;
LAB_104fe816:
    imgp_b_set_mode(*(uint32_t *)(param_1 + 0x10),uVar4);
    iVar7 = iVar6;
    goto LAB_104fe7e6;
  case 9:
    uVar4 = 0xc;
    goto LAB_104fe830;
  case 10:
    uVar4 = 0xd;
    goto LAB_104fe830;
  case 0xb:
    uVar4 = 0xe;
LAB_104fe830:
    imgp_b_set_mode(*(uint32_t *)(param_1 + 0x10),uVar4);
    goto LAB_104fe7ca;
  case 0xc:
    iVar8 = uVar3 * iVar1 + iVar5;
    imgp_b_set_mode(*(uint32_t *)(param_1 + 0x10),0x10);
    imgp_b_set_addr0(*(uint32_t *)(param_1 + 0x10),iVar6);
    goto LAB_104fe8a0;
  case 0xd:
    uVar4 = 0x14;
    break;
  case 0xe:
    imgp_b_set_mode(*(uint32_t *)(param_1 + 0x10),0x18);
    imgp_b_set_addr0(*(uint32_t *)(param_1 + 0x10),iVar6);
    iVar8 = uVar3 * iVar1 + iVar5;
    goto LAB_104fe8a0;
  default:
    goto LAB_104fe8ac;
  }
  imgp_b_set_mode(*(uint32_t *)(param_1 + 0x10),uVar4);
  iVar7 = iVar6;
LAB_104fe7ca:
  imgp_b_set_addr0(*(uint32_t *)(param_1 + 0x10),iVar7);
  iVar8 = iVar5;
LAB_104fe8a0:
  imgp_b_set_addr1(*(uint32_t *)(param_1 + 0x10),iVar8);
LAB_104fe8ac:
  imgp_b_set_stride0(*(uint32_t *)(param_1 + 0x10),*(uint16_t *)(param_3 + 4));
  imgp_b_set_stride1_104582d0(*(uint32_t *)(param_1 + 0x10),*(uint16_t *)((int)param_3 + 0x12));
  imgp_b_set_stride1_104582f2(*(uint32_t *)(param_1 + 0x10),*(uint16_t *)(param_3 + 3));
  imgp_b_set_stride1_10458314(*(uint32_t *)(param_1 + 0x10),*(uint16_t *)((int)param_3 + 0xe));
  set_irq_enable_bit(*(int *)(param_1 + 0x18),-0x7ffffffe,4);
  imgp_b_start(*(uint32_t *)(param_1 + 0x10),1);
  return;
}
