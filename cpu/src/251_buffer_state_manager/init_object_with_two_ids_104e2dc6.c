/* @k10d init_object_with_two_ids_104e2dc6 @ 0x104e2dc6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * purpose:
 *   Initializes a 0x3c-byte object by zeroing fields, setting type/status words, and
 *   copying data from a pointer if a lookup succeeds.
 * summary:
 *   The function calls an initialization routine and a check function on the object. If the
 *   check passes, it zeros a block of fields, sets specific 16-bit values (4 and 3), and
 *   calls a helper to populate a field. It then calls a lookup function with two object
 *   fields; if successful, it copies four integers from the result pointer into the object
 *   and calls a finalization helper. Returns 1 on success or 9 on failure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_object_with_two_ids_104e2dc6(int *param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  release_object_members(param_1);
  iVar1 = validate_sequence_counter(param_1);
  uVar2 = 9;
  if (iVar1 != 0) {
    dispatch_virtual_slot_two_104df936(param_1,0x1005,0x28);
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    *(uint16_t *)(param_1 + 7) = 4;
    *(uint16_t *)((int)param_1 + 0x1e) = 3;
    *(uint16_t *)(param_1 + 8) = 0;
    iVar1 = collect_exposure_settings();
    param_1[0xd] = iVar1;
    iVar1 = extract_bitfield_from_word(param_1[2],param_1[6]);
    if (iVar1 == 0) {
      param_1[9] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      *(uint16_t *)(param_1 + 0xe) = 0;
      uVar2 = 1;
    }
    else {
      param_1[9] = *(int *)param_1[6];
      param_1[10] = *(int *)(param_1[6] + 4);
      param_1[0xb] = *(int *)(param_1[6] + 8);
      param_1[0xc] = *(int *)(param_1[6] + 0xc);
      *(uint16_t *)(param_1 + 0xe) = 0;
      write_struct_fields_to_target_104e2e9a((int)param_1);
      uVar2 = 1;
    }
  }
  return uVar2;
}
