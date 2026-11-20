/* @k10d sync_object_state_via_virtual_call @ 0x1036db10
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 023_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on a sub-object and conditionally updates state if the result
 *   differs from current.
 * summary:
 *   The function retrieves a pointer from offset 0x70 of the input object and calls virtual
 *   slot 0xcc/8 (slot 21) with a this-adjusted pointer and a value from offset 0x248. If
 *   the return value is non-zero, it compares it against the result of
 *   read_byte_at_offset_five_1051e50e on offset 0x1c. If they differ, it calls
 *   set_byte_at_offset_five to update the state and dispatch_event_with_buffer_lock with a
 *   constant 4. This appears to be a state synchronization or event handling routine within
 *   a class structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void sync_object_state_via_virtual_call(void *param_1)

{
  char cVar1;
  char cVar2;
  void *pvVar3;
  int iVar4;
  
  iVar4 = **(int **)((int)param_1 + 0x70);
  cVar1 = (((vtbl_entry*)(iVar4))[25].fn)
                    ((int)*(int **)((int)param_1 + 0x70) + (int)*(short *)(iVar4 + 200),
                     *(uint32_t *)((int)param_1 + 0x248));
  if (cVar1 != '\0') {
    pvVar3 = (void *)((int)param_1 + 0x1c);
    cVar2 = read_byte_at_offset_five_1051e50e((int)pvVar3);
    if ((char)(cVar1 + -1) != cVar2) {
      set_byte_at_offset_five((int)pvVar3,cVar1 + -1);
      dispatch_event_with_buffer_lock(param_1,4,pvVar3);
    }
  }
  return;
}
