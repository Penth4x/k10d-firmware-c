/* @k10d dispatch_object_event_10498ac6 @ 0x10498ac6
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 201_settings_event_dispatch (unit names are model-proposed)
 * purpose:
 *   Signals a semaphore and invokes a virtual method on an object retrieved from a global
 *   context, branching on a mode parameter.
 * summary:
 *   The function first calls twai_sem_obj on a semaphore at offset 0x10 of param_1. It then
 *   retrieves an object pointer via get_or_create_camera_object and calls eventflag_clr_flg
 *   with a mode value (2 if param_2 is 0, else 1). Finally, it performs a virtual call on
 *   the retrieved object, selecting slot 10 (offset 0x8c) or slot 9 (offset 0x84) based on
 *   the same condition, passing param_1 and a value from param_1+4 as arguments. The
 *   specific subsystem role is unclear without more context on the object type.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t dispatch_object_event_10498ac6(void *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  twai_sem_obj((uint32_t *)((int)param_1 + 0x10),(int)(_DAT_105a2bf0/*ROM*/));
  iVar1 = get_or_create_camera_object();
  piVar2 = *(int **)(iVar1 + 4);
  if (param_2 == 0) {
    eventflag_clr_flg((uint32_t *)((int)param_1 + 8),(uint)(2));
    (((vtbl_entry*)(*piVar2))[17].fn)
              ((int)((vtbl_entry*)(*piVar2))[17].adj + (int)piVar2,param_1,
               *(uint32_t *)((int)param_1 + 4));
  }
  else {
    eventflag_clr_flg((uint32_t *)((int)param_1 + 8),(uint)(1));
    (((vtbl_entry*)(*piVar2))[16].fn)
              ((int)((vtbl_entry*)(*piVar2))[16].adj + (int)piVar2,param_1,
               *(uint32_t *)((int)param_1 + 4));
  }
  return 1;
}
