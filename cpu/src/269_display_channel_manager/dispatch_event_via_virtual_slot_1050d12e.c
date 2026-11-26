/* @k10d dispatch_event_via_virtual_slot_1050d12e @ 0x1050d12e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * purpose:
 *   Builds a stack event structure and invokes virtual method slot 1 of a class object.
 * summary:
 *   The function retrieves a pointer from param_1+0x28 via get_value_if_flag_set_10514eb4.
 *   If non-null, it constructs a stack-based structure containing fields from the retrieved
 *   object and param_2, then calls virtual_destructor_free_10428222 (virtual slot 1) with a
 *   pointer to this structure and the value 2. It also calls several other helpers
 *   (eventflag_clr_flg, reg_framework_send, eventflag_wai_flg) with a pointer to
 *   param_1+0x68 and the constant 0x100000. Returns 1 on success, 0 if the initial lookup
 *   fails.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t dispatch_event_via_virtual_slot_1050d12e(int param_1,void *param_2,int param_3)

{
  int iVar1;
  uint32_t *puVar2;
  uint32_t uVar3;
  uintptr_t sp;
  uint32_t *puStack_48;
  void *pvStack_44;
  uint16_t uStack_40;
  uint16_t uStack_3e;
  uint16_t uStack_3c;
  uint32_t uStack_38;
  uint32_t uStack_34;
  uint32_t uStack_30;
  uint32_t uStack_2c;
  uint16_t uStack_28;
  uint16_t uStack_26;
  uint16_t uStack_24;
  uint16_t uStack_22;
  uint16_t uStack_20;
  int iStack_1c;
  uint32_t **ppuStack_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  void *puStack_c;
  
  iVar1 = get_value_if_flag_set_10514eb4(*(uint32_t *)(param_1 + 0x28));
  uVar3 = 0;
  if (iVar1 != 0) {
    ppuStack_18 = &puStack_48;
    uStack_40 = 0;
    uStack_3e = 0x80;
    uStack_3c = 0x80;
    puStack_48 = (uint32_t *)(iVar1 + 0x704);
    if (param_3 != 0) {
      uStack_22 = 0;
      uStack_38 = *puStack_48;
      uStack_34 = *(uint32_t *)(iVar1 + 0x708);
      uStack_30 = *(uint32_t *)(iVar1 + 0x70c);
      uStack_2c = *(uint32_t *)(iVar1 + 0x710);
      uStack_28 = *(uint16_t *)(iVar1 + 0x714);
      uStack_26 = *(uint16_t *)(iVar1 + 0x6a8);
      uStack_24 = *(uint16_t *)(iVar1 + 0x718);
      uStack_20 = *(uint16_t *)(iVar1 + 0x6a6);
      puStack_48 = &uStack_38;
    }
    puStack_c = &DAT_1059e4d0/*ROM*/;
    uStack_14 = 0x900001;
    iStack_1c = param_1 + 4;
    puVar2 = (uint32_t *)(param_1 + 0x68);
    uStack_10 = 0;
    pvStack_44 = param_2;
    eventflag_clr_flg(puVar2,0x100000);
    reg_framework_send(*(int *)(param_1 + 0x54) + 8, &iStack_1c, 0x2);
    uVar3 = 1;
    eventflag_wai_flg(puVar2,0x100000,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
    eventflag_clr_flg(puVar2,0x100000);
    virtual_destructor_free_10428222(&iStack_1c,2);
  }
  return uVar3;
}
