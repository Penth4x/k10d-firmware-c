/* @k10d allocate_and_init_ui_event @ 0x1052a77a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 285_event_queue_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a new object via cls_105b5410_new and invokes its virtual slot 8 with
 *   param_2.
 * summary:
 *   The function calls cls_105b5410_new(0) to obtain a pointer to a newly allocated object.
 *   It then performs a virtual call to slot 8 (offset 0x44) of the object's vtable, passing
 *   the adjusted this-pointer and param_2 as arguments. The pointer to the initialized
 *   object is returned to the caller. The specific role of the object is not determinable
 *   from the pseudocode alone, though the caller ui_post_input suggests it is used for UI
 *   input events.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int * allocate_and_init_ui_event(uint32_t param_1,uint32_t param_2)

{
  int *piVar1;
  
  piVar1 = (int *)cls_105b5410_new(0);
  (**(code **)(*piVar1 + 0x44))((int)*(short *)(*piVar1 + 0x40) + (int)piVar1,param_2);
  return piVar1;
}
