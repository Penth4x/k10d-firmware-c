/* @k10d dispatch_event_via_virtual_call @ 0x1049888c
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 201_settings_event_dispatch (unit names are model-proposed)
 * purpose:
 *   Acquires a semaphore, retrieves an object pointer, invokes a virtual method on it, and
 *   signals completion.
 * summary:
 *   The function synchronizes using twai_sem_obj and sig_sem_obj on a semaphore at offset
 *   0x18. It calls get_or_create_camera_object to get a base pointer, dereferences offset 4
 *   to get an object, and performs a virtual call to slot 0x9c/8 (slot 19) passing the
 *   object, param_1, and a value from param_1+4. It also calls eventflag_clr_flg and
 *   twai_flg_obj to manage flags.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint8_t dispatch_event_via_virtual_call(int param_1)

{
  int iVar1;
  int *piVar2;
  uintptr_t sp;
  uint8_t uStack_e;
  uint8_t uStack_d;
  
  twai_sem_obj((void *)(param_1 + 0x18),_DAT_105a2bf0/*ROM*/);
  zero_init_six_bytes(&uStack_e);
  iVar1 = get_or_create_camera_object();
  piVar2 = *(int **)(iVar1 + 4);
  eventflag_clr_flg((uint32_t *)(param_1 + 8),4);
  iVar1 = *piVar2;
  (**(code **)(iVar1 + 0x9c))
            ((int)piVar2 + (int)*(short *)(iVar1 + 0x98),param_1,*(uint32_t *)(param_1 + 4),
             &uStack_e);
  twai_flg_obj((uint32_t *)(param_1 + 8),4,(void *)0x0,_DAT_105a2af0/*ROM*/);
  sig_sem_obj((void *)(param_1 + 0x18));
  free_heap_if_flag_set_1047e5d2(&uStack_e,2);
  return uStack_d;
}
