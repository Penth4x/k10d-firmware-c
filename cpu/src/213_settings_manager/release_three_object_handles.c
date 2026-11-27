/* @k10d release_three_object_handles @ 0x104af202
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Releases three object handles stored in a struct, calling a virtual method on the first
 *   if non-null.
 * summary:
 *   Reads the first pointer from param_1; if non-null, invokes virtual slot 1 (offset 0xc)
 *   with argument 3, then nulls it. Calls destroy_system_parameter_entry with the second
 *   handle and 3, then nulls it. Calls heap_free_2 with the third handle, then nulls it.
 *   Finally calls two unnamed functions get_or_init_sram_buffer_104ae40c and
 *   destroy_object_and_free_members.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_three_object_handles(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    (((vtbl_entry*)(*(int *)(iVar1 + 8)))[1].fn)(*(short *)(*(int *)(iVar1 + 8) + 8) + iVar1,3);
  }
  *param_1 = 0;
  destroy_system_parameter_entry(param_1[1],3);
  param_1[1] = 0;
  heap_free_2(param_1[2]);
  param_1[2] = 0;
  get_or_init_sram_buffer_104ae40c();
  destroy_object_and_free_members((uint32_t)param_1);
  return;
}
