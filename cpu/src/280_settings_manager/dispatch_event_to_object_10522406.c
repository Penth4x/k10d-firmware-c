/* @k10d dispatch_event_to_object_10522406 @ 0x10522406
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 280_settings_manager (unit names are model-proposed)
 * purpose:
 *   Sets flags in a control block and dispatches an event to a virtual method on a linked
 *   object.
 * summary:
 *   The function writes the value 1 to offset 8 of the first argument and stores
 *   param_2/param_3 at offsets 0x858/0x859 of the object pointed to by param_1[2]. It calls
 *   store_value_to_pointer_1046c7d4 with param_1[2] and param_1[3], then clears param_1[3]
 *   and sets a flag at offset 7 of param_1[6]. It performs a virtual call (slot 5) on the
 *   object at param_1[4], passing the event structure and the linked object. If the return
 *   value is 0x82, it calls virtual slot 2 on the first argument's vtable.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_event_to_object_10522406(int *param_1,uint8_t param_2,uint8_t param_3)

{
  int iVar1;
  
  *(uint8_t *)(param_1 + 8) = 1;
  *(uint8_t *)(param_1[2] + 0x858) = param_2;
  *(uint8_t *)(param_1[2] + 0x859) = param_3;
  store_value_to_pointer_1046c7d4((void*)(param_1[2]),param_1[3]);
  param_1[3] = 0;
  *(uint8_t *)(param_1[6] + 7) = 1;
  iVar1 = *(int *)param_1[4];
  iVar1 = (((vtbl_entry*)(iVar1))[5].fn)(param_1[4] + (int)((vtbl_entry*)(iVar1))[5].adj,param_1,param_1[2])
  ;
  if (iVar1 == 0x82) {
    (((vtbl_entry*)(*param_1))[2].fn)((int)((vtbl_entry*)(*param_1))[2].adj + (int)param_1,0,0);
  }
  return 0;
}
