/* @k10d invoke_virtual_slot_seven_104d6e98 @ 0x104d6e98
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 245_param_table_access (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_slot_seven_104d6e98(uint32_t param_1,uint32_t param_2)

{
  uintptr_t sp;
  uint8_t auStack_28 [28];
  uint32_t uStack_c;
  
  (*(code *)0x104de094/*ROM*/)(param_2);
  write_field_at_offset_0x2370(param_1,7);
  cls_105ba0ac_new(auStack_28);
  uStack_c = 0x105ba1d8/*ROM*/;
  invoke_virtual_slot_on_two_objects_104d8c46(auStack_28,param_2,param_1);
  (*(code *)0x104de82c/*ROM*/)(param_2);
  uStack_c = 0x105ba1d8/*ROM*/;
  cls_105ba0ac_delete(auStack_28,0);
  return 1;
}
