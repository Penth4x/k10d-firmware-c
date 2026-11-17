/* @k10d wait_for_event_and_dispatch @ 0x104987ea
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 201_settings_event_dispatch (unit names are model-proposed)
 * purpose:
 *   Waits on a semaphore, retrieves an event object, invokes a virtual handler, and signals
 *   completion.
 * summary:
 *   The function blocks on a semaphore at param_1+0x18, initializes a local buffer, and
 *   fetches a pointer via get_or_create_camera_object. It performs a virtual call on the
 *   retrieved object, passing param_1 and the local buffer, then signals a flag and the
 *   semaphore. The return value is 1 or 2 based on the first byte of the local buffer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t wait_for_event_and_dispatch(int param_1)

{
  int iVar1;
  int *piVar2;
  uint32_t uVar3;
  uintptr_t sp;
  char acStack_e [6];
  
  twai_sem_obj((void *)(param_1 + 0x18),_DAT_105a2bf0/*ROM*/);
  zero_init_six_bytes(acStack_e);
  iVar1 = get_or_create_camera_object();
  piVar2 = *(int **)(iVar1 + 4);
  eventflag_clr_flg((uint32_t *)(param_1 + 8),4);
  iVar1 = *piVar2;
  (**(code **)(iVar1 + 0x9c))
            ((int)piVar2 + (int)*(short *)(iVar1 + 0x98),param_1,*(uint32_t *)(param_1 + 4),
             acStack_e);
  twai_flg_obj((uint32_t *)(param_1 + 8),4,(void *)0x0,_DAT_105a2af0/*ROM*/);
  uVar3 = 1;
  if (acStack_e[0] == '\0') {
    uVar3 = 2;
  }
  sig_sem_obj((void *)(param_1 + 0x18));
  free_heap_if_flag_set_1047e5d2(acStack_e,2);
  return uVar3;
}
