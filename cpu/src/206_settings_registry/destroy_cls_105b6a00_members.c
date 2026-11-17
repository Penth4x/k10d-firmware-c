/* @k10d destroy_cls_105b6a00_members @ 0x104a8704
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Destroys the members of a cls_105b6a00 object and invokes its base class destructor.
 * summary:
 *   This function is the body of the virtual destructor (slot 1) for class cls_105b6a00. It
 *   first nulls out a pointer at offset 0x34 (param_1[0xd]), then calls
 *   copy_first_field_to_second and cls_105a5c2c_delete on the member at offset 4. It then
 *   calls the base class destructor cls_105b6a10_delete. If the second argument (param_2)
 *   has bit 0 set, it calls release_heap_block_104a89ce, likely for additional cleanup or
 *   deallocation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void destroy_cls_105b6a00_members(uint32_t *param_1,uint param_2)

{
  if (param_1 != (uint32_t *)0x0) {
    param_1[0xd] = 0x105b6a00/*ROM*/;
    copy_first_field_to_second(param_1 + 1);
    cls_105a5c2c_delete(param_1 + 1,2);
    cls_105b6a10_delete(param_1,2);
    if ((param_2 & 1) != 0) {
      release_heap_block_104a89ce(param_1);
    }
  }
  return;
}
