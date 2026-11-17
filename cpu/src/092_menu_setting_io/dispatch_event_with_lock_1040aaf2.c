/* @k10d dispatch_event_with_lock_1040aaf2 @ 0x1040aaf2
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 092_menu_setting_io (unit names are model-proposed)
 * purpose:
 *   Acquires a lock, builds a 24-byte event structure from parameters, dispatches it via a
 *   handler, and releases the lock.
 * summary:
 *   The function calls eventflag_clr_flg on a pointer derived from param_1 (offset 0x18) to
 *   acquire a lock. It then initializes a local 24-byte structure on the stack with
 *   param_4, param_5, param_6, and fixed values. It calls init_object_with_params_104c45a0,
 *   passing the structure and other parameters, which likely dispatches the event or
 *   message. Finally, it calls eventflag_wai_flg to release the lock and returns a value
 *   from param_1 at offset 0x44.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t
dispatch_event_with_lock_1040aaf2(void *param_1,uint32_t param_2,int param_3,uint32_t param_4,uint32_t param_5,
            uint32_t param_6)

{
  int iVar1;
  uint32_t *puVar2;
  uintptr_t sp;
  uint32_t *puVar3;
  uint8_t auStack_34 [24];
  
  puVar3 = (uint32_t *)auStack_34;
  puVar2 = (uint32_t *)((int)param_1 + 0x18);
  eventflag_clr_flg(puVar2,1);
  iVar1 = *(int *)((int)param_1 + 0x28);
  *puVar3 = param_4;
  puVar3[1] = param_5;
  puVar3[2] = param_6;
  puVar3[3] = 0xffffffff;
  puVar3[4] = 0;
  *(uint8_t *)((int)puVar3 + 0x17) = 0;
  init_object_with_params_104c45a0(iVar1,param_1,param_2,param_3,*puVar3,puVar3[1],puVar3[2],puVar3[3],puVar3[4],
               *(uint8_t *)((int)puVar3 + 0x17));
  eventflag_wai_flg(puVar2,1,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar2,1);
  return *(uint32_t *)((int)param_1 + 0x44);
}
