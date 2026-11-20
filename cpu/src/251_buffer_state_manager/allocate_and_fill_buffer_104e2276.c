/* @k10d allocate_and_fill_buffer_104e2276 @ 0x104e2276
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a buffer of size determined by a parameter, fills it via helper calls, and
 *   updates object state.
 * summary:
 *   The function checks a status via validate_sequence_counter. If non-zero, it calculates
 *   a size (aiStack_14[0] * 4), allocates memory using heap_alloc_2, and calls
 *   query_object_array_for_value or iterate_vtable_entries_104e506e to populate the buffer.
 *   It then updates the object's state via dispatch_virtual_slot_two_104df936 and
 *   copy_row_blocks_to_buffer. Returns a status code (1 or 9).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Type propagation algorithm not settling */

uint32_t allocate_and_fill_buffer_104e2276(cls_105be9a0 *param_1)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint32_t uVar4;
  uint uVar5;
  uintptr_t sp;
  int *piVar6;
  uint8_t auStack_2c [4];
  uint32_t uStack_18;
  int aiStack_14 [3];
  
  piVar6 = (int *)auStack_2c;
  aiStack_14[0] = 0;
  release_object_members((int *)param_1);
  iVar1 = validate_sequence_counter(param_1);
  if (iVar1 == 0) {
    uStack_18 = 9;
  }
  else {
    *(uint32_t *)(param_1->field_0x10 + 0x48) = 3;
    iVar1 = get_object_field_at_offset_0x14(param_1->field_0x0);
    if ((iVar1 == 0x10001) || (iVar1 = get_object_field_at_offset_0x14(param_1->field_0x0), iVar1 == -1)) {
      uVar4 = 0x2001;
    }
    else {
      uVar4 = 0x2008;
    }
    initialize_linked_struct_fields(param_1,uVar4);
    iVar1 = get_field_at_offset_0x18(param_1->field_0x0);
    if (iVar1 == 0x3002) {
      aiStack_14[0] = 1;
    }
    else if (iVar1 == 0) {
      iVar1 = (*(code *)0x104e048a/*ROM*/)(param_1->field_0x0);
      if (iVar1 == 0) {
        aiStack_14[0] = (*(code *)0x104e4b88/*ROM*/)(param_1->field_0x8);
      }
      else {
        iVar1 = (*(code *)0x104e048a/*ROM*/)(param_1->field_0x0);
        if (iVar1 == -1) {
          iVar1 = 100;
        }
        aiStack_14[0] = (*(code *)0x104e4b8e/*ROM*/)(param_1->field_0x8,iVar1);
      }
    }
    else {
      if (iVar1 != 0x3801) {
        initialize_linked_struct_fields(param_1,0x2014);
        return 9;
      }
      aiStack_14[0] = (*(code *)0x104e4b88/*ROM*/)(param_1->field_0x8);
      iVar1 = (*(code *)0x104e4bc4/*ROM*/)(param_1->field_0x8);
      aiStack_14[0] = aiStack_14[0] - iVar1;
    }
    uVar5 = aiStack_14[0] * 4;
    uStack_18 = 1;
    iVar1 = get_field_at_offset_0x18(param_1->field_0x0);
    if (iVar1 == 0x3002) {
      dispatch_virtual_slot_two_104df936(param_1,0x1007,aiStack_14[0] * 4 + 0x10);
      copy_bytes_if_flag_set(param_1->field_0xc,aiStack_14,4,0xc);
      aiStack_14[1] = 1;
      puVar2 = (uint *)param_1->field_0xc;
      *piVar6 = 1;
      copy_row_blocks_to_buffer(puVar2,(int)(aiStack_14 + 1),0x10,4,*piVar6);
      uStack_18 = 1;
    }
    else {
      aiStack_14[2] = 0;
      iVar1 = heap_alloc_2(uVar5 + 4);
      iVar3 = (*(code *)0x104e048a/*ROM*/)(param_1->field_0x0);
      if (iVar3 == 0) {
        iVar3 = param_1->field_0x8;
        *piVar6 = 0;
        iVar3 = query_object_array_for_value(iVar3,iVar1,uVar5,aiStack_14 + 2,*piVar6);
      }
      else {
        iVar3 = (*(code *)0x104e048a/*ROM*/)(param_1->field_0x0);
        if (iVar3 == -1) {
          iVar3 = 100;
        }
        iVar3 = iterate_vtable_entries_104e506e(param_1->field_0x8,iVar1,uVar5,iVar3);
      }
      if (iVar3 == 0) {
        initialize_linked_struct_fields(param_1,0x201d);
        uStack_18 = 9;
      }
      else {
        aiStack_14[0] = aiStack_14[0] - aiStack_14[2];
        dispatch_virtual_slot_two_104df936(param_1,0x1007,aiStack_14[0] * 4 + 0x10);
        copy_bytes_if_flag_set(param_1->field_0xc,aiStack_14,4,0xc);
        puVar2 = (uint *)param_1->field_0xc;
        *piVar6 = aiStack_14[0];
        copy_row_blocks_to_buffer(puVar2,iVar1,0x10,4,*piVar6);
      }
      if (iVar1 != 0) {
        heap_free_2(iVar1);
      }
    }
  }
  return uStack_18;
}
