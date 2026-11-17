/* @k10d initialize_event_handler_table @ 0x10483ff8
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Allocates and initializes a 0x88-byte object, then registers 30 event handlers via
 *   virtual calls.
 * summary:
 *   Allocates a 0x88-byte block and constructs an object of class cls_105ab8ac. It stores
 *   the pointer in param_1+4, invokes virtual slot 2 with argument 0, and then calls
 *   set_array_slot_if_empty 30 times with indices 0-29 and descending negative constants.
 *   The callees set_field_if_zero_10483f6c, set_field_if_null, and set_array_slot_if_empty
 *   are unnamed, preventing definitive identification of the specific camera subsystem
 *   (e.g., AE, AF, or OSDC) being configured.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t initialize_event_handler_table(void *param_1)

{
  int *piVar1;
  uint32_t uVar2;
  
  piVar1 = (int *)heap_alloc((void *)0x88);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    cls_105ab8ac_new(piVar1);
  }
  *(int **)((int)param_1 + 4) = piVar1;
  uVar2 = (**(code **)(*piVar1 + 0x14))((int)*(short *)(*piVar1 + 0x10) + (int)piVar1,0);
  set_field_if_zero_10483f6c(*(void **)((int)param_1 + 4),-0x7ffb7784);
  set_field_if_null(*(void **)((int)param_1 + 4),-0x7ffb7780);
  set_array_slot_if_empty(*(void **)((int)param_1 + 4),0,-0x7ffb777c);
  set_array_slot_if_empty(*(void **)((int)param_1 + 4),1,-0x7ffb7778);
  set_array_slot_if_empty(*(void **)((int)param_1 + 4),2,-0x7ffb7774);
  set_array_slot_if_empty(*(void **)((int)param_1 + 4),3,-0x7ffb7770);
  set_array_slot_if_empty(*(void **)((int)param_1 + 4),4,-0x7ffb776c);
  set_array_slot_if_empty(*(void **)((int)param_1 + 4),5,-0x7ffb7768);
  set_array_slot_if_empty(*(void **)((int)param_1 + 4),6,-0x7ffb7764);
  set_array_slot_if_empty(*(void **)((int)param_1 + 4),7,-0x7ffb7760);
  set_array_slot_if_empty(*(void **)((int)param_1 + 4),8,-0x7ffb775c);
  set_array_slot_if_empty(*(void **)((int)param_1 + 4),9,-0x7ffb7758);
  set_array_slot_if_empty(*(void **)((int)param_1 + 4),10,-0x7ffb7754);
  set_array_slot_if_empty(*(void **)((int)param_1 + 4),0xb,-0x7ffb7750);
  set_array_slot_if_empty(*(void **)((int)param_1 + 4),0xc,-0x7ffb774c);
  set_array_slot_if_empty(*(void **)((int)param_1 + 4),0xd,-0x7ffb7748);
  set_array_slot_if_empty(*(void **)((int)param_1 + 4),0xe,-0x7ffb7744);
  set_array_slot_if_empty(*(void **)((int)param_1 + 4),0xf,-0x7ffb7740);
  set_array_slot_if_empty(*(void **)((int)param_1 + 4),0x10,-0x7ffb773c);
  set_array_slot_if_empty(*(void **)((int)param_1 + 4),0x11,-0x7ffb7738);
  set_array_slot_if_empty(*(void **)((int)param_1 + 4),0x12,-0x7ffb7734);
  set_array_slot_if_empty(*(void **)((int)param_1 + 4),0x13,-0x7ffb7730);
  set_array_slot_if_empty(*(void **)((int)param_1 + 4),0x14,-0x7ffb772c);
  set_array_slot_if_empty(*(void **)((int)param_1 + 4),0x15,-0x7ffb7728);
  set_array_slot_if_empty(*(void **)((int)param_1 + 4),0x16,-0x7ffb7724);
  set_array_slot_if_empty(*(void **)((int)param_1 + 4),0x17,-0x7ffb7720);
  set_array_slot_if_empty(*(void **)((int)param_1 + 4),0x18,-0x7ffb771c);
  set_array_slot_if_empty(*(void **)((int)param_1 + 4),0x19,-0x7ffb7718);
  set_array_slot_if_empty(*(void **)((int)param_1 + 4),0x1a,-0x7ffb7714);
  set_array_slot_if_empty(*(void **)((int)param_1 + 4),0x1b,-0x7ffb7710);
  set_array_slot_if_empty(*(void **)((int)param_1 + 4),0x1c,-0x7ffb770c);
  set_array_slot_if_empty(*(void **)((int)param_1 + 4),0x1d,-0x7ffb7708);
  return uVar2;
}
