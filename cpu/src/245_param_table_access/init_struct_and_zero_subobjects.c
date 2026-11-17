/* @k10d init_struct_and_zero_subobjects @ 0x104d6104
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 245_param_table_access (unit names are model-proposed)
 * purpose:
 *   Zeroes two fields at offsets 0x794/0x798, calls an init helper, then loops 16 times
 *   calling two sub-object initializers.
 * summary:
 *   The function takes a pointer to a large struct (param_1). It first clears a 4-byte
 *   field at offset 0x794 and a 1-byte field at offset 0x798. It then calls
 *   fill_byte_array_at_offset with the struct pointer and 0. It enters a loop that iterates
 *   16 times (iStack_c starts at 0x10). In each iteration, it calls
 *   init_struct_and_call_helper_104d5ad8 on a pointer at offset 0xac + iVar1 and
 *   init_struct_and_call_helper_104d5d3e on a pointer at offset 0x464 + iVar2. iVar1
 *   increments by 0x38 and iVar2 by 0x30 each iteration. The callees are not named, so the
 *   specific subsystem is unknown, but the pattern is clearly initializing an array of 16
 *   sub-objects within the parent struct.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_struct_and_zero_subobjects(void *param_1)

{
  int iVar1;
  int iVar2;
  int iStack_c;
  
  *(uint32_t *)((int)param_1 + 0x794) = 0;
  *(uint8_t *)((int)param_1 + 0x798) = 0;
  fill_byte_array_at_offset((int)param_1,0);
  iStack_c = 0x10;
  iVar1 = 0;
  iVar2 = 0;
  do {
    init_struct_and_call_helper_104d5ad8((void *)((int)param_1 + iVar1 + 0xac));
    init_struct_and_call_helper_104d5d3e((void *)((int)param_1 + iVar2 + 0x464));
    init_struct_and_call_helper_104d5ad8((void *)((int)param_1 + iVar1 + 200));
    init_struct_and_call_helper_104d5d3e((void *)((int)param_1 + iVar2 + 0x47c));
    iVar2 = iVar2 + 0x30;
    iVar1 = iVar1 + 0x38;
    iStack_c = iStack_c + -1;
  } while (-1 < iStack_c);
  return;
}
