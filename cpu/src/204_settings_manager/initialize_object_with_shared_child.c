/* @k10d initialize_object_with_shared_child @ 0x1049b012
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 204_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates two new objects, links them via a shared pointer, copies three fields from
 *   param_1, and invokes a virtual method on the new object.
 * summary:
 *   The function calls cls_105b5628_new and cls_105b55fc_new to create two instances. It
 *   stores the second instance in both param_1+0x14 and the first instance+0x14,
 *   effectively sharing a child object. It copies three 32-bit values from param_1 (offsets
 *   0x20, 0x24, 0x28) into the first instance (offsets 0x1c, 0x18, 0x20). Finally, it calls
 *   virtual slot 2 of the object at first_instance+0x10 with argument 0, and stores the
 *   first instance pointer in param_1+8. The specific camera subsystem role is not
 *   determinable from the generic object manipulation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_object_with_shared_child(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = cls_105b5628_new(0);
  iVar2 = cls_105b55fc_new((uint32_t *)0x0);
  *(int *)(param_1 + 0x14) = iVar2;
  *(int *)(iVar1 + 0x14) = iVar2;
  *(uint32_t *)(iVar1 + 0x1c) = *(uint32_t *)(param_1 + 0x20);
  *(uint32_t *)(iVar1 + 0x18) = *(uint32_t *)(param_1 + 0x24);
  *(uint32_t *)(iVar1 + 0x20) = *(uint32_t *)(param_1 + 0x28);
  (**(code **)(*(int *)(iVar1 + 0x10) + 0x14))(*(short *)(*(int *)(iVar1 + 0x10) + 0x10) + iVar1,0);
  *(int *)(param_1 + 8) = iVar1;
  return;
}
