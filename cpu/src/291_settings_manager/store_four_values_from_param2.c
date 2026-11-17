/* @k10d store_four_values_from_param2 @ 0x10532640
 * name: model (proposed by the local model from the decompile, confidence 0.55)
 * unit: 291_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls read_u16_from_struct_array with param_2 and indices 0-3, storing each 16-bit
 *   result into consecutive words at offset 0x4dc in the object pointed to by
 *   *(param_1+0x14).
 * summary:
 *   The function dereferences param_1+0x14 to get a base pointer, then invokes
 *   read_u16_from_struct_array four times with param_2 and sequential integer arguments
 *   0,1,2,3. Each returned 16-bit value is written to offsets 0x4dc, 0x4de, 0x4e0, and
 *   0x4e2 of that base object. The callee read_u16_from_struct_array is not named, so the
 *   specific data being extracted is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_four_values_from_param2(int param_1,int param_2)

{
  uint16_t uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x14);
  uVar1 = read_u16_from_struct_array(param_2,0);
  *(uint16_t *)(iVar2 + 0x4dc) = uVar1;
  iVar2 = *(int *)(param_1 + 0x14);
  uVar1 = read_u16_from_struct_array(param_2,1);
  *(uint16_t *)(iVar2 + 0x4de) = uVar1;
  iVar2 = *(int *)(param_1 + 0x14);
  uVar1 = read_u16_from_struct_array(param_2,2);
  *(uint16_t *)(iVar2 + 0x4e0) = uVar1;
  iVar2 = *(int *)(param_1 + 0x14);
  uVar1 = read_u16_from_struct_array(param_2,3);
  *(uint16_t *)(iVar2 + 0x4e2) = uVar1;
  return;
}
