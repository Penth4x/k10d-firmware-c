/* @k10d dispatch_virtual_method_with_sem @ 0x10498926
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 201_settings_event_dispatch (unit names are model-proposed)
 * purpose:
 *   Acquires a semaphore, calls a virtual method on an object retrieved from a global, and
 *   releases the semaphore.
 * summary:
 *   The function locks a semaphore at param_1+0x18, initializes a local buffer via
 *   alloc_and_init_small_object, and retrieves an object pointer from a global structure
 *   (get_or_create_camera_object). It then invokes a virtual method (slot at offset 0xd4)
 *   on that object, passing param_1 and a local buffer. After the call, it checks a flag in
 *   the local buffer; if set, it calls combine_two_helper_results. Finally, it signals the
 *   semaphore and cleans up the local buffer via destroy_and_maybe_free_object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t dispatch_virtual_method_with_sem(int param_1, uint32_t param_x1, uint32_t param_x2)

{
  int iVar1;
  uint32_t uVar2;
  int *piVar3;
  uintptr_t sp;
  uint8_t auStack_20 [20];
  uint uStack_c;
  
  twai_sem_obj((uint32_t *)(param_1 + 0x18),(int)(_DAT_105a2bf0/*ROM*/));
  uStack_c = 0;
  alloc_and_init_small_object(auStack_20);
  iVar1 = get_or_create_camera_object();
  piVar3 = *(int **)(iVar1 + 4);
  eventflag_clr_flg((uint32_t *)(param_1 + 8),0x18);
  iVar1 = *piVar3;
  (((vtbl_entry*)(iVar1))[26].fn)
            ((int)piVar3 + (int)((vtbl_entry*)(iVar1))[26].adj,param_1,*(uint32_t *)(param_1 + 4),
             auStack_20);
  eventflag_wai_flg((uint32_t *)(param_1 + 8),0x18,&uStack_c,_DAT_105a2af0/*ROM*/);
  if ((uStack_c & 8) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = combine_two_helper_results(auStack_20);
  }
  sig_sem_obj((uint32_t *)(param_1 + 0x18));
  destroy_and_maybe_free_object(auStack_20,2);
  return uVar2;
}
