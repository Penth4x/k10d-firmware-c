/* @k10d check_and_update_object_state @ 0x10364aa2
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 003_ae_mode_state_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on a sub-object to get a state, then updates a local field if
 *   it differs from the current value.
 * summary:
 *   The function dereferences a pointer at offset 0x70 of the input object. If non-null, it
 *   calls virtual slot 0x19 (offset 0xcc) on that sub-object, passing a value from offset
 *   0x20c of the main object. If the result is non-zero, it compares the result (minus 1)
 *   against the value returned by read_byte_at_offset_five_1051e50e for a field at offset
 *   0x1c. If they differ, it updates that field via set_byte_at_offset_five and calls
 *   dispatch_event_with_buffer_lock with the constant 4.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void check_and_update_object_state(void *param_1)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  void *pvVar4;
  
  piVar1 = *(int **)((int)param_1 + 0x70);
  if (piVar1 != (int *)0x0) {
    cVar2 = (**(code **)(*piVar1 + 0xcc))
                      ((int)*(short *)(*piVar1 + 200) + (int)piVar1,
                       *(uint32_t *)((int)param_1 + 0x20c));
    if (cVar2 != '\0') {
      pvVar4 = (void *)((int)param_1 + 0x1c);
      cVar3 = read_byte_at_offset_five_1051e50e((int)pvVar4);
      if ((char)(cVar2 + -1) != cVar3) {
        set_byte_at_offset_five((int)pvVar4,cVar2 + -1);
        dispatch_event_with_buffer_lock(param_1,4,pvVar4);
      }
    }
  }
  return;
}
