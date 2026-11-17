/* @k10d init_buffer_and_dispatch_event_1050bfae @ 0x1050bfae
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * purpose:
 *   Initializes a buffer structure at param_1+0x68 and dispatches a virtual event if a
 *   resource check passes.
 * summary:
 *   The function first calls call_kernel_with_short_id on param_1+0x60. It then checks a
 *   value derived from param_1+0x28 via get_value_if_flag_set_10514eb4. If non-zero, it
 *   constructs a local structure on the stack, initializes a buffer at param_1+0x68 using
 *   eventflag_clr_flg and eventflag_wai_flg, and calls virtual_destructor_free_10428222
 *   (virtual slot 1) with a pointer to the local structure. Finally, it calls
 *   check_kernel_call_success_10459d88 on param_1+0x60 and returns the result of the
 *   initial check.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool init_buffer_and_dispatch_event_1050bfae(int param_1,uint16_t *param_2)

{
  int iVar1;
  uint32_t *puVar2;
  uintptr_t sp;
  int iStack_50;
  uint32_t uStack_4c;
  uint16_t uStack_48;
  uint16_t uStack_46;
  uint16_t uStack_44;
  uint16_t uStack_42;
  uint8_t uStack_40;
  uint8_t uStack_3f;
  uint32_t uStack_3c;
  uint32_t uStack_38;
  uint32_t uStack_34;
  uint32_t uStack_30;
  uint32_t uStack_2c;
  uint32_t uStack_28;
  uint16_t uStack_24;
  uint16_t uStack_22;
  uint16_t uStack_20;
  int iStack_1c;
  int *piStack_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  void *puStack_c;
  
  call_kernel_with_short_id((uint32_t *)(param_1 + 0x60));
  iVar1 = get_value_if_flag_set_10514eb4(*(uint32_t *)(param_1 + 0x28));
  if (iVar1 != 0) {
    uStack_24 = 0;
    uStack_22 = 0x80;
    uStack_20 = 0x80;
    iStack_50 = iVar1 + 0x6e8;
    uStack_40 = 1;
    uStack_3f = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_4c = *(uint32_t *)(param_2 + 4);
    piStack_18 = &iStack_50;
    uStack_48 = param_2[2];
    uStack_46 = param_2[3];
    uStack_44 = *param_2;
    uStack_42 = param_2[1];
    puStack_c = &DAT_1059e4d0/*ROM*/;
    uStack_14 = 0x1130001;
    iStack_1c = param_1 + 4;
    puVar2 = (uint32_t *)(param_1 + 0x68);
    uStack_10 = 0;
    eventflag_clr_flg(puVar2,0x40000);
    reg_framework_send(*(int *)(param_1 + 0x50) + 8);
    eventflag_wai_flg(puVar2,0x40000,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
    eventflag_clr_flg(puVar2,0x40000);
    *(uint32_t *)(param_2 + 6) = uStack_3c;
    *(uint32_t *)(param_2 + 8) = uStack_38;
    *(uint32_t *)(param_2 + 10) = uStack_34;
    *(uint32_t *)(param_2 + 0xc) = uStack_30;
    *(uint32_t *)(param_2 + 0xe) = uStack_2c;
    *(uint32_t *)(param_2 + 0x10) = uStack_28;
    virtual_destructor_free_10428222(&iStack_1c,2);
  }
  check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0x60));
  return iVar1 != 0;
}
