/* @k10d init_two_heap_objects_10521ec0 @ 0x10521ec0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 280_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_two_heap_objects_10521ec0(cls_105d8830 *param_1)

{
  cls_105d77cc *pcVar1;
  cls_105d7b7c *pcVar2;
  uint32_t uVar3;
  
  pcVar1 = (cls_105d77cc *)heap_alloc((void *)0x1c);
  if (pcVar1 == (cls_105d77cc *)0x0) {
    pcVar1 = (cls_105d77cc *)0x0;
  }
  else {
    cls_105d77cc_new(pcVar1);
  }
  param_1->field_0xc = (uintptr_t)((void *)pcVar1);
  pcVar2 = (cls_105d7b7c *)heap_alloc((void *)0x30);
  if (pcVar2 == (cls_105d7b7c *)0x0) {
    pcVar2 = (cls_105d7b7c *)0x0;
  }
  else {
    cls_105d7b7c_new(pcVar2);
  }
  param_1->field_0x10 = (uintptr_t)((void *)pcVar2);
  if (pcVar2 != (cls_105d7b7c *)0x0) {
    pcVar2->field_0x28 = param_1->field_0xc;
  }
  uVar3 = get_shared_sram_buffer();
  if (param_1->field_0x10 != 0) {
    *(uint32_t *)(param_1->field_0x10 + 0x1c) = uVar3;
  }
  return 1;
}
