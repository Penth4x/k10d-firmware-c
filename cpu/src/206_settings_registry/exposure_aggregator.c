/* @k10d exposure_aggregator @ 0x104a4600
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed init_module_context_from_state)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Populates a module context structure by copying pointers and values from a state object
 *   and calling a helper to resolve sub-object references.
 * summary:
 *   The function takes a state object pointer (param_1) and a context object (r8). It
 *   copies a pointer from state+4 into context+0x60. It calls
 *   read_struct_field_by_index_104a2a78 with the state and argument 1, storing the result
 *   in context+8. If a specific field in the resolved object is 2 or 3, it calls
 *   read_struct_field_by_index_104a2a78 again with argument 3 and stores the result in
 *   context+12. Finally, it populates context fields 16 through 48 with pointers calculated
 *   as offsets from the base pointer stored in context+0x60, and copies two specific values
 *   from the state object into context fields 0x40 and 0x54. Returns 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* Exposure subsystem aggregator ctor: caches composite sub-objects into module ctx
   (ctx+0x14=state+0x30 LENS, +0x1c=state+0x7c STROBE, +0x28/2c/30=AE RAM A/B/C, +0x44=state+0x164
   settings, etc.) */

uint32_t exposure_aggregator(void *param_1)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t *caller_r8;
  
  caller_r8[0x16] = *(uint32_t *)((int)param_1 + 4);
  uVar2 = read_struct_field_by_index_104a2a78(param_1,1);
  caller_r8[2] = uVar2;
  iVar1 = *(int *)(*(int *)*caller_r8 + 4);
  if ((iVar1 == 2) || (iVar1 == 3)) {
    uVar2 = read_struct_field_by_index_104a2a78((int *)*caller_r8,3);
    caller_r8[3] = uVar2;
  }
  caller_r8[4] = caller_r8[0x16];
  caller_r8[5] = caller_r8[0x16] + 0x1c;
  caller_r8[6] = caller_r8[0x16] + 0x30;
  caller_r8[7] = caller_r8[0x16] + 0x7c;
  caller_r8[8] = caller_r8[0x16] + 0x9c;
  caller_r8[9] = caller_r8[0x16] + 0xa4;
  caller_r8[10] = caller_r8[0x16] + 0xb0;
  caller_r8[0xb] = caller_r8[0x16] + 0xc4;
  caller_r8[0xc] = caller_r8[0x16] + 0xd8;
  caller_r8[0xd] = caller_r8[0x16] + 0xec;
  caller_r8[0xe] = caller_r8[0x16] + 0xfc;
  caller_r8[0xf] = caller_r8[0x16] + 0x10c;
  caller_r8[0x10] = caller_r8[0x16] + 0x4bc;
  caller_r8[0x11] = caller_r8[0x16] + 0x164;
  caller_r8[0x12] = caller_r8[0x16] + 0x4a8;
  caller_r8[0x13] = caller_r8[0x16] + 0x4b0;
  caller_r8[0x18] = *(uint32_t *)(caller_r8[0x16] + 0x4c4);
  caller_r8[0x15] = *(uint32_t *)(caller_r8[0x16] + 0x4d0);
  return 1;
}
