/* @k10d query_class_105b6a30_state @ 0x104a983c
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 207_settings_registry (unit names are model-proposed)
 * purpose:
 *   Returns a status word from class cls_105b6a30 when param_2 is 0x62, otherwise returns
 *   0.
 * summary:
 *   The function checks if param_2 equals 0x62. If so, it calls
 *   construct_object_with_vtable (identified as a constructor/destructor body for
 *   cls_105b6a30) with arguments (0, 0x62, 3, 1, 0) and returns the result. Otherwise, it
 *   returns 0. The specific meaning of the 0x62 command and the returned value is not
 *   determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint query_class_105b6a30_state(uint32_t param_1,int param_2)

{
  uint uVar1;
  ushort uVar2;
  
  uVar1 = 0;
  if (param_2 == 0x62) {
    uVar2 = construct_object_with_vtable((uint16_t *)0x0,0x62,3,1,0);
    uVar1 = (uint)uVar2;
  }
  return uVar1;
}
