/* @k10d query_object_state_flag_104f357a @ 0x104f357a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 257_sr_debug_interface (unit names are model-proposed)
 * purpose:
 *   Retrieves an object pointer, sets a field to 3, and returns a boolean state from a
 *   helper.
 * summary:
 *   Calls sr_driver_singleton to get a base pointer, then calls module_array_getter with
 *   the pointer at offset +4 and the constant 3. It then calls return_sram_address_10435ae4
 *   to get another pointer and passes it to debug_flag_reader_0x0c, returning the boolean
 *   result. The specific subsystem is not identifiable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint query_object_state_flag_104f357a(void)

{
  int iVar1;
  void *pvVar2;
  bool bVar3;
  
  iVar1 = sr_driver_singleton();
  module_array_getter(*(void **)(iVar1 + 4),3);
  pvVar2 = (void *)return_sram_address_10435ae4();
  bVar3 = debug_flag_reader_0x0c(pvVar2);
  return (uint)bVar3;
}
