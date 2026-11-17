/* @k10d configure_four_dma_channels @ 0x1050c1f4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * purpose:
 *   Configures and starts four sequential DMA transfers using a shared control block and
 *   distinct source/destination parameters.
 * summary:
 *   The function initializes a DMA control structure at param_1+0x60 and retrieves a handle
 *   from param_1+0x28. If the handle is valid, it performs four iterations of DMA setup,
 *   each calling eventflag_clr_flg, reg_framework_send, and eventflag_wai_flg with specific
 *   sizes (0x20000 or 0x80000) and parameters derived from the handle and input arguments.
 *   It stores the result of each transfer into the output pointers param_3, param_5, and
 *   param_7, and finally calls a virtual method on the control block before cleaning up.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1050c234) overlaps instruction at (ram,0x1050c232)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint configure_four_dma_channels(int param_1,uint32_t param_2,uint *param_3,uint32_t param_4,uint *param_5,
                 uint32_t param_6,uint *param_7)

{
  int iVar1;
  int iVar2;
  uint32_t *puVar3;
  uintptr_t sp;
  int iStack_44;
  uint32_t uStack_40;
  int iStack_3c;
  int *piStack_38;
  uint32_t uStack_34;
  uint32_t uStack_30;
  void *puStack_2c;
  int iStack_28;
  uint16_t uStack_24;
  uint16_t uStack_22;
  short sStack_20;
  uint32_t uStack_1c;
  ushort uStack_18;
  uint16_t uStack_16;
  uint16_t uStack_14;
  uint32_t uStack_10;
  uint32_t uStack_c;
  
  call_kernel_with_short_id((uint32_t *)(param_1 + 0x60));
  iVar2 = get_value_if_flag_set_10514eb4(*(uint32_t *)(param_1 + 0x28));
  if (iVar2 != 0) {
    iStack_44 = iVar2 + 0x704;
    uStack_40 = *(uint32_t *)(param_1 + 0x5c);
    puStack_2c = &DAT_1059e4d0/*ROM*/;
    piStack_38 = &iStack_44;
    uStack_34 = 0x700004;
    iVar1 = param_1 + 4;
    puVar3 = (uint32_t *)(param_1 + 0x68);
    uStack_30 = 0;
    iStack_3c = iVar1;
    eventflag_clr_flg(puVar3,0x20000);
    reg_framework_send(*(int *)(param_1 + 0x34) + 8);
    eventflag_wai_flg(puVar3,0x20000,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
    eventflag_clr_flg(puVar3,0x20000);
    iStack_28 = *(int *)(param_1 + 0x5c) +
                ((*(ushort *)(iVar2 + 0x6a6) + 1 & 0xfffffffe) + 2) * 0x780;
    sStack_20 = (*(ushort *)(iVar2 + 0x6a8) & 0xfffe) - 4;
    uStack_18 = 0;
    uStack_14 = 0x20;
    uStack_24 = 0x780;
    uStack_22 = 0x780;
    uStack_16 = 6;
    uStack_34 = 0xa00007;
    uStack_c = 0xffffffff;
    uStack_10 = 0x90000000;
    uStack_30 = 0;
    iStack_3c = iVar1;
    piStack_38 = &iStack_28;
    uStack_1c = param_2;
    eventflag_clr_flg(puVar3,0x80000);
    reg_framework_send(*(int *)(param_1 + 0x40) + 8);
    eventflag_wai_flg(puVar3,0x80000,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
    eventflag_clr_flg(puVar3,0x80000);
    *param_3 = (uint)uStack_18;
    uStack_10 = 0x48000000;
    uStack_16 = 6;
    uStack_34 = 0xa00007;
    uStack_30 = 0;
    iStack_3c = iVar1;
    piStack_38 = &iStack_28;
    uStack_1c = param_4;
    eventflag_clr_flg(puVar3,0x80000);
    reg_framework_send(*(int *)(param_1 + 0x40) + 8);
    eventflag_wai_flg(puVar3,0x80000,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
    eventflag_clr_flg(puVar3,0x80000);
    *param_5 = (uint)uStack_18;
    uStack_16 = 6;
    uStack_1c = param_6;
    uStack_34 = 0xa00007;
    uStack_10 = 0x24000000;
    uStack_30 = 0;
    iStack_3c = iVar1;
    piStack_38 = &iStack_28;
    eventflag_clr_flg(puVar3,0x80000);
    reg_framework_send(*(int *)(param_1 + 0x40) + 8);
    eventflag_wai_flg(puVar3,0x80000,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
    eventflag_clr_flg(puVar3,0x80000);
    *param_7 = (uint)uStack_18;
    virtual_destructor_free_10428222(&iStack_3c,2);
  }
  check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0x60));
  return (uint)(iVar2 != 0);
}
