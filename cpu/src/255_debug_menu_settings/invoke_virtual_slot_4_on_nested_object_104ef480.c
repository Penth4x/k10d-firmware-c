/* @k10d invoke_virtual_slot_4_on_nested_object_104ef480 @ 0x104ef480
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105c2e20": ignoring multiple overlapping fields */

void invoke_virtual_slot_4_on_nested_object_104ef480(cls_105c2e20 *param_1)

{
  int iVar1;
  void *puVar2;
  
  puVar2 = (void *)(((uint32_t *)&(param_1->field_0x4))[2]);
  iVar1 = *(int *)((char*)puVar2 + 4);
  (((vtbl_entry*)(iVar1))[4].fn)((char*)puVar2 + ((vtbl_entry*)(iVar1))[4].adj + 4,&param_1->field_0x4);
  return;
}
