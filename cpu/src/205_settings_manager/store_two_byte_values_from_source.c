/* @k10d store_two_byte_values_from_source @ 0x1049c2a2
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 205_settings_manager (unit names are model-proposed)
 * purpose:
 *   Reads two byte values from param_2 via a helper and stores them into an object pointed
 *   to by param_1+0x10.
 * summary:
 *   The function dereferences param_1+0x10 to get a base pointer, then calls
 *   read_byte_from_struct_offset_104a8c54 with param_2 and indices 0x10 and 0x11. The
 *   returned byte values are stored at offsets 0x20 and 0x24 of the base pointer. The role
 *   of read_byte_from_struct_offset_104a8c54 is unknown, so the specific data being copied
 *   cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_two_byte_values_from_source(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x10);
  cVar1 = read_byte_from_struct_offset_104a8c54(param_2,0x10);
  *(int *)(iVar2 + 0x20) = (int)cVar1;
  iVar2 = *(int *)(param_1 + 0x10);
  cVar1 = read_byte_from_struct_offset_104a8c54(param_2,0x11);
  *(int *)(iVar2 + 0x24) = (int)cVar1;
  return;
}
