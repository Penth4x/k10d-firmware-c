/* @k10d acquire_sem_and_invoke_virtual @ 0x104989e6
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 201_settings_event_dispatch (unit names are model-proposed)
 * purpose:
 *   Locks a semaphore, calls a virtual method on an object, and returns a status byte if a
 *   flag is set.
 * summary:
 *   The function acquires a semaphore at param_1+0x18, initializes output pointers, and
 *   retrieves an object pointer via get_or_create_camera_object. It then invokes a virtual
 *   method (slot at offset 0xd4) on that object, passing param_1 and a stack buffer.
 *   Finally, it releases the semaphore and returns a byte from the stack buffer if a
 *   specific flag (bit 3) is set in uStack_c.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char acquire_sem_and_invoke_virtual(int param_1,uint32_t *param_2,uint32_t *param_3,uint32_t *param_4)

{
  struct {
    uint32_t uStack_20;
    uint32_t uStack_1c;
    uint32_t uStack_18;
    char cStack_14;
  } _cfg_20;
  int iVar1;
  int *piVar2;
  char cVar3;
  uintptr_t sp;
  uint uStack_c;
  
  twai_sem_obj((uint32_t *)(param_1 + 0x18),(int)(_DAT_105a2bf0/*ROM*/));
  uStack_c = 0;
  *param_2 = 0;
  *param_3 = 0;
  *param_4 = 0;
  alloc_and_init_small_object(&_cfg_20.uStack_20);
  iVar1 = get_or_create_camera_object();
  piVar2 = *(int **)(iVar1 + 4);
  eventflag_clr_flg((uint32_t *)(param_1 + 8),0x18);
  iVar1 = *piVar2;
  (((vtbl_entry*)(iVar1))[26].fn)
            ((int)piVar2 + (int)((vtbl_entry*)(iVar1))[26].adj,param_1,*(uint32_t *)(param_1 + 4),
             &_cfg_20.uStack_20);
  eventflag_wai_flg((uint32_t *)(param_1 + 8),0x18,&uStack_c,_DAT_105a2af0/*ROM*/);
  cVar3 = '\0';
  if (((uStack_c & 8) != 0) && (cVar3 = _cfg_20.cStack_14, _cfg_20.cStack_14 != '\0')) {
    *param_2 = _cfg_20.uStack_20;
    *param_3 = _cfg_20.uStack_1c;
    *param_4 = _cfg_20.uStack_18;
  }
  sig_sem_obj((uint32_t *)(param_1 + 0x18));
  destroy_and_maybe_free_object(&_cfg_20.uStack_20,2);
  return cVar3;
}
