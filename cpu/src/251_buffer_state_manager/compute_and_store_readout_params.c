/* @k10d compute_and_store_readout_params @ 0x104e2b32
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * purpose:
 *   Calculates a clamped value from object fields and stores it along with derived flags
 *   into a sub-object.
 * summary:
 *   The function first calls an initialization or reset routine (release_object_members)
 *   and checks a status via validate_sequence_counter. If the status is non-zero, it
 *   retrieves three values from the object, calls dispatch_param_by_index_104e4d00 with a
 *   field and a computed offset, and if successful, clamps a difference between a field at
 *   offset 0x2c0 and another value. It then writes these values and a flag (derived from a
 *   short at offset 700) into a sub-object pointed to by param_1[4], and updates fields in
 *   param_1[1]. The specific camera subsystem is not identifiable from the provided callees
 *   or code structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t compute_and_store_readout_params(int *param_1)

{
  int iVar1;
  uint32_t uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  release_object_members(param_1);
  iVar1 = validate_sequence_counter(param_1);
  if (iVar1 == 0) {
    uVar2 = 9;
  }
  else {
    uVar2 = get_object_field_at_offset_0x14(*param_1);
    iVar1 = get_field_at_offset_0x18(*param_1);
    uVar3 = (*(code *)0x104e048a/*ROM*/)(*param_1);
    iVar6 = param_1[4];
    iVar4 = dispatch_param_by_index_104e4d00(param_1[2],uVar2,param_1[6]);
    if (iVar4 == 0) {
      initialize_linked_struct_fields(param_1,0x2009);
      uVar2 = 9;
    }
    else {
      uVar5 = *(int *)(param_1[6] + 0x2c0) - iVar1;
      if (uVar5 <= uVar3) {
        uVar3 = uVar5;
      }
      dispatch_virtual_slot_two_104df936(param_1,0x101b,uVar3 + 0xc);
      *(int *)(iVar6 + 0x50) = iVar1;
      *(uint32_t *)(iVar6 + 0x28) = uVar2;
      uVar2 = 0;
      if (*(short *)(param_1[6] + 700) != 0x3801) {
        uVar2 = 2;
      }
      *(uint32_t *)(iVar6 + 0x48) = uVar2;
      initialize_linked_struct_fields(param_1,0x2001);
      *(uint32_t *)(param_1[1] + 0xc) = 0xc;
      (*(code *)0x104e0e6c/*ROM*/)(param_1[1],uVar3);
      *(uint32_t *)(param_1[1] + 0x30) = 1;
      uVar2 = 1;
    }
  }
  return uVar2;
}
