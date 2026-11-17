/* @k10d store_query_result_at_offset_0x70 @ 0x1049be0e
 * name: model (proposed by the local model from the decompile, confidence 0.55)
 * unit: 205_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls read_u16_from_struct_array with param_2 and 0, then stores the 16-bit result into
 *   the object field at offset 0x70.
 * summary:
 *   Reads a pointer from param_1+0x10, invokes the unknown callee
 *   read_u16_from_struct_array(param_2, 0), and writes the returned ushort into the memory
 *   location pointed to by that pointer plus 0x70. The callee's role is unknown, so the
 *   specific data being stored cannot be determined. This function is called as virtual
 *   method slot 4 of class cls_105b5834.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_query_result_at_offset_0x70(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x10);
  uVar1 = read_u16_from_struct_array(param_2,0);
  *(uint *)(iVar2 + 0x70) = (uint)uVar1;
  return;
}
