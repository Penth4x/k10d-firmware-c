/* @k10d invoke_object_method_if_flag_clear @ 0x1036cc80
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 021_capture_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a virtual method on an object if a specific flag is clear and a pointer is valid.
 * summary:
 *   Checks if the integer at offset 0x244 in the object is zero and if the pointer at
 *   offset 0x70 is non-null. If both conditions are met, it reads a short value from the
 *   target object at offset 0xd0 and calls a function pointer at offset 0xd4 with the
 *   adjusted pointer and a value from read_byte_at_offset_five_1051e50e. The return value
 *   of the called function is returned.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_object_method_if_flag_clear(cls_10557d80 *param_1)

{
  short sVar1;
  uint32_t uVar2;
  int *piVar3;
  uint8_t uVar4;
  int iVar5;
  
  uVar2 = 0;
  if ((param_1->field_0x244 == 0) && (piVar3 = (int *)param_1->field_0x70, piVar3 != (int *)0x0)) {
    iVar5 = *piVar3;
    sVar1 = *(short *)(iVar5 + 0xd0);
    uVar4 = read_byte_at_offset_five_1051e50e((int)&param_1->field_0x1c);
    uVar2 = (((vtbl_entry*)(iVar5))[26].fn)((int)sVar1 + (int)piVar3,uVar4);
  }
  return uVar2;
}
