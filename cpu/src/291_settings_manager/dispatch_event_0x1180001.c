/* @k10d dispatch_event_0x1180001 @ 0x105312f2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 291_settings_manager (unit names are model-proposed)
 * purpose:
 *   Checks for event ID 0x1180001 and dispatches it to a virtual handler with optional sub-
 *   calls.
 * summary:
 *   Validates that param_2 is non-null and its third field equals 0x1180001. If valid, it
 *   calls an unknown function at 0x10529e56 with data from param_1 and param_2. It
 *   conditionally calls iterate_and_call_handler_for_entries and
 *   iterate_and_dispatch_param_records based on non-zero bytes in the event payload.
 *   Finally, it invokes virtual slot 2 of the object pointed to by param_2[0] with the
 *   event ID and a parameter from param_2[3].
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_event_0x1180001(int param_1,int *param_2)

{
  uint32_t *puVar1;
  int iVar2;
  
  if ((param_2 != (int *)0x0) && (param_2[2] == 0x1180001)) {
    puVar1 = (uint32_t *)param_2[1];
    (*(code *)0x10529e56/*ROM*/)
              (*(uint32_t *)(param_1 + 0x20),*(uint16_t *)(puVar1 + 1),
               *(uint16_t *)((int)puVar1 + 6),puVar1[2]);
    if (*(char *)(puVar1 + 3) != '\0') {
      iterate_and_call_handler_for_entries(*(uint32_t *)(param_1 + 0x20),*puVar1);
    }
    if (*(char *)((int)puVar1 + 0xd) != '\0') {
      iterate_and_dispatch_param_records(*(uint32_t *)(param_1 + 0x20),*puVar1);
    }
    iVar2 = *(int *)*param_2;
    (**(code **)(iVar2 + 0x14))(*param_2 + (int)*(short *)(iVar2 + 0x10),0x1180001,param_2[3]);
  }
  return;
}
