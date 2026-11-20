/* @k10d query_object_property_25 @ 0x104f1b16
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t query_object_property_25(int param_1)

{
  uint8_t uVar1;
  uintptr_t sp;
  cls_105a705c acStack_18 [4];
  
  cls_105a705c_new(acStack_18);
  copy_nine_bytes_to_buffer(*(int *)(param_1 + 8),acStack_18);
  uVar1 = (*(code *)0x10460cb6/*ROM*/)(acStack_18,0x19);
  cls_105a705c_delete(acStack_18,2);
  return uVar1;
}
