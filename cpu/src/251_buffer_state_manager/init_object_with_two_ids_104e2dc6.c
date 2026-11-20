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

uint32_t init_object_with_two_ids_104e2dc6(cls_105bf53c *param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  release_object_members((int *)param_1);
  iVar1 = validate_sequence_counter(param_1);
  uVar2 = 9;
  if (iVar1 != 0) {
    dispatch_virtual_slot_two_104df936(param_1,0x1005,0x28);
    param_1->field_0x1c = 0;
    param_1->field_0x20 = 0;
    param_1->field_0x24 = 0;
    param_1->field_0x28 = 0;
    param_1->field_0x2c = (uintptr_t)((void *)0x0);
    param_1->field_0x30 = 0;
    param_1->field_0x34 = 0;
    param_1->field_0x38 = 0;
    *(uint16_t *)&param_1->field_0x1c = 4;
    *(uint16_t *)((int)&param_1->field_0x1c + 2) = 3;
    *(uint16_t *)&param_1->field_0x20 = 0;
    uVar2 = collect_exposure_settings();
    param_1->field_0x34 = uVar2;
    iVar1 = extract_bitfield_from_word((int)(param_1->field_0x8),(uint *)(param_1->field_0x18));
    if (iVar1 == 0) {
      param_1->field_0x24 = 0;
      param_1->field_0x28 = 0;
      param_1->field_0x2c = (uintptr_t)((void *)0x0);
      param_1->field_0x30 = 0;
      *(uint16_t *)&param_1->field_0x38 = 0;
      uVar2 = 1;
    }
    else {
      param_1->field_0x24 = *(uint32_t *)param_1->field_0x18;
      param_1->field_0x28 = *(uint32_t *)(param_1->field_0x18 + 4);
      param_1->field_0x2c = (uintptr_t)(*(void **)(param_1->field_0x18 + 8));
      param_1->field_0x30 = *(uint32_t *)(param_1->field_0x18 + 0xc);
      *(uint16_t *)&param_1->field_0x38 = 0;
      write_struct_fields_to_target_104e2e9a((int)param_1);
      uVar2 = 1;
    }
  }
  return uVar2;
}
