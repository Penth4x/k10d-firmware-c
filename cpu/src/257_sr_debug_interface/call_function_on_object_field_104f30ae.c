/* @k10d call_function_on_object_field_104f30ae @ 0x104f30ae
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 257_sr_debug_interface (unit names are model-proposed)
 * purpose:
 *   Constructs a temporary object, passes it to a helper with a field from param_1, and
 *   returns the helper's result.
 * summary:
 *   The function allocates a stack object via cls_105a6c24_new, calls
 *   copy_32_bytes_from_struct_field_1045e360 with the integer at param_1+8 and the new
 *   object, then invokes an unknown function at 0x1045f990 on the object. It cleans up the
 *   object with cls_105a6c24_delete and returns the result from the 0x1045f990 call. The
 *   specific subsystem is not identifiable from the available callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_function_on_object_field_104f30ae(int param_1)

{
  uint32_t uVar1;
  uintptr_t sp;
  uint8_t auStack_2c [36];
  
  cls_105a6c24_new((void *)auStack_2c);
  copy_32_bytes_from_struct_field_1045e360(*(int *)(param_1 + 8),auStack_2c);
  uVar1 = (*(code *)0x1045f990/*ROM*/)(auStack_2c);
  cls_105a6c24_delete((void *)auStack_2c,2);
  return uVar1;
}
