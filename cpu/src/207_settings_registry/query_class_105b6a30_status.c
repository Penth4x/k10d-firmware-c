/* @k10d query_class_105b6a30_status @ 0x104a9a9a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 207_settings_registry (unit names are model-proposed)
 * purpose:
 *   Returns a status value from a class_105b6a30 instance when a specific condition is met.
 * summary:
 *   The function checks if param_2 equals 0x3ff. If true, it calls
 *   construct_object_with_vtable (identified as a constructor/destructor body for class
 *   cls_105b6a30) with specific arguments (0x0, 0x3ff, 7, 0x20, 0) and returns the result.
 *   Otherwise, it returns 0. The caller is a virtual method slot 4 of class cls_105b6ac8.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint query_class_105b6a30_status(uint32_t param_1,int param_2)

{
  uint uVar1;
  ushort uVar2;
  
  uVar1 = 0;
  if (param_2 == 0x3ff) {
    uVar2 = construct_object_with_vtable((uint16_t *)0x0,0x3ff,7,0x20,0);
    uVar1 = (uint)uVar2;
  }
  return uVar1;
}
