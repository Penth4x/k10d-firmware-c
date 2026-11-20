/* @k10d dispatch_event_with_payload_1050c0e0 @ 0x1050c0e0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * purpose:
 *   Constructs a stack-based event structure and dispatches it via a virtual method call.
 * summary:
 *   The function initializes a local structure with specific flags (0x20, 0xffffffff) and
 *   data derived from an object at param_1+0x28. It calls helper functions
 *   eventflag_clr_flg and eventflag_wai_flg with a size of 0x80000, likely for memory
 *   management or buffer setup. Finally, it invokes virtual method slot 1
 *   (virtual_destructor_free_10428222) on the constructed structure, passing a count of 2,
 *   and returns a boolean indicating if the initial lookup (get_value_if_flag_set_10514eb4)
 *   succeeded.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool dispatch_event_with_payload_1050c0e0(int param_1,uint32_t param_2,uint *param_3)

{
  struct {
    int iStack_1c;
    int * piStack_18;
    uint32_t uStack_14;
    uint32_t uStack_10;
    void * puStack_c;
  } _cfg_1c;
  int iVar1;
  uint32_t *puVar2;
  uintptr_t sp;
  int iStack_3c;
  uint16_t uStack_38;
  uint16_t uStack_36;
  uint16_t uStack_34;
  uint32_t uStack_30;
  ushort uStack_2c;
  uint16_t uStack_2a;
  uint16_t uStack_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  call_kernel_with_short_id((uint32_t *)(param_1 + 0x60));
  iVar1 = get_value_if_flag_set_10514eb4(*(uint32_t *)(param_1 + 0x28));
  if (iVar1 != 0) {
    uStack_2c = 0;
    uStack_2a = 0x20;
    uStack_28 = 0x20;
    uStack_24 = 0xffffffff;
    uStack_20 = 0xffffffff;
    iStack_3c = *(int *)(iVar1 + 0x708) +
                (uint)*(ushort *)(iVar1 + 0x718) * (uint)*(ushort *)(iVar1 + 0x6a6);
    uStack_38 = *(uint16_t *)(iVar1 + 0x718);
    uStack_36 = *(uint16_t *)(iVar1 + 0x714);
    uStack_34 = *(uint16_t *)(iVar1 + 0x6a8);
    _cfg_1c.puStack_c = &DAT_1059e4d0/*ROM*/;
    _cfg_1c.piStack_18 = &iStack_3c;
    _cfg_1c.uStack_14 = 0xa00007;
    _cfg_1c.iStack_1c = param_1 + 4;
    puVar2 = (uint32_t *)(param_1 + 0x68);
    _cfg_1c.uStack_10 = 0;
    uStack_30 = param_2;
    eventflag_clr_flg(puVar2,0x80000);
    reg_framework_send(*(int *)(param_1 + 0x40) + 8);
    eventflag_wai_flg(puVar2,0x80000,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
    eventflag_clr_flg(puVar2,0x80000);
    *param_3 = (uint)uStack_2c;
    virtual_destructor_free_10428222(&_cfg_1c.iStack_1c,2);
  }
  check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0x60));
  return iVar1 != 0;
}
