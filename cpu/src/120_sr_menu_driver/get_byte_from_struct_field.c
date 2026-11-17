/* @k10d get_byte_from_struct_field @ 0x1043405c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 120_sr_menu_driver (unit names are model-proposed)
 * purpose:
 *   Retrieves a byte value from the second field of a structure returned by an unknown
 *   helper.
 * summary:
 *   Calls get_or_init_singleton_object_1047316c to obtain a pointer to a structure. It then
 *   accesses the second field of that structure (offset +4) and passes it to
 *   read_byte_at_offset_0x45, which returns a byte value. This byte is returned as the
 *   function's result. The specific subsystem or data type is not identifiable from the
 *   provided pseudocode and unknown callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint get_byte_from_struct_field(void)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = get_or_init_singleton_object_1047316c();
  bVar2 = read_byte_at_offset_0x45(*(void **)(iVar1 + 4));
  return (uint)bVar2;
}
