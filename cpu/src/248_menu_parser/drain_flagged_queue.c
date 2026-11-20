/* @k10d drain_flagged_queue @ 0x104dec98
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 248_menu_parser (unit names are model-proposed)
 * purpose:
 *   Calls an init helper, then repeatedly invokes a processing routine while a byte flag at
 *   offset 0x94 is non-zero.
 * summary:
 *   The function first calls update_dual_object_state_flags, then enters a loop that calls
 *   poll_event_queue_for_mask with the object pointer and two zero arguments. The loop
 *   continues as long as the byte at param_1 + 0x94 is non-zero, re-reading the flag after
 *   each call. This pattern suggests draining or processing a queue or list of items
 *   indicated by the flag.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105bb0ec": ignoring overlapping field "field_0x8" */

void drain_flagged_queue(cls_105bb0ec *param_1)

{
  char cVar1;
  
  update_dual_object_state_flags(__frv_reg_unset(4));
  cVar1 = param_1->field_0x94;
  while (cVar1 != '\0') {
    poll_event_queue_for_mask((int)param_1,0,0);
    cVar1 = param_1->field_0x94;
  }
  return;
}
