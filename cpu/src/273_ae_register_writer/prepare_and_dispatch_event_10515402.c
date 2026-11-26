/* @k10d prepare_and_dispatch_event_10515402 @ 0x10515402
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 273_ae_register_writer (unit names are model-proposed)
 * purpose:
 *   Initializes an event structure in memory and dispatches it via a helper function.
 * summary:
 *   The function checks param_5; if non-zero, it initializes a block of memory at param_1 +
 *   0x34c using eventflag_clr_flg and eventflag_wai_flg, and sets several fields in the
 *   object at param_1 (offsets 0x328-0x334). It then calls build_status_bitmask_and_notify.
 *   Finally, it constructs a local structure on the stack using param_7, param_8, and
 *   values from param_1, and passes it along with other parameters to
 *   compute_clamped_division_value.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void prepare_and_dispatch_event_10515402(int param_1,int *param_2,int param_3,int param_4,char param_5,int param_6,
                 int param_7,uint param_8)

{
  uint uVar1;
  int iVar2;
  uint32_t *puVar3;
  uintptr_t sp;
  uint8_t *puVar4;
  uint *puVar5;
  uint8_t auStack_2c [16];
  
  puVar5 = (uint *)auStack_2c;
  puVar4 = auStack_2c;
  if (param_5 == '\0') {
    accumulate_lens_data_values(param_1,1);
  }
  else {
    puVar3 = (uint32_t *)(param_1 + 0x34c);
    eventflag_clr_flg(puVar3,0x20);
    *(uint32_t *)(param_1 + 0x330) = 0x800003;
    *(int *)(param_1 + 0x328) = param_1 + 4;
    *(int *)(param_1 + 0x32c) = param_3;
    *(uint32_t *)(param_1 + 0x334) = 0;
    reg_framework_send(*(int *)(param_1 + 0x44) + 8, (void *)(param_1 + 0x328), 0x2);
    eventflag_wai_flg(puVar3,0x20,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
    eventflag_clr_flg(puVar3,0x20);
    puVar5 = (uint *)puVar4;
  }
  build_status_bitmask_and_notify(param_1,param_2,param_3);
  uVar1 = *(uint *)(param_1 + 0x44);
  iVar2 = *(int *)(param_1 + 800);
  *puVar5 = *(int *)(param_1 + 0x324) + param_7;
  *(uint8_t *)((int)puVar5 + 7) = 0;
  *(bool *)((int)puVar5 + 0xb) = param_8 != 0;
  puVar5[3] = param_8;
  compute_clamped_division_value(uVar1,param_3,param_4,iVar2 + param_6,*puVar5,*(char *)((int)puVar5 + 7),
               *(char *)((int)puVar5 + 0xb),puVar5[3]);
  return;
}
