/* @k10d update_viewfinder_overlay_bounds @ 0x104bc192
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Computes and stores horizontal and vertical boundary offsets for a display overlay
 *   based on current position and size limits.
 * summary:
 *   The function checks a state field at param_1+0x32 for the value 100. If not 100, it
 *   reads two 16-bit values from param_2 (offsets 0x10 and 0x12), calls copy_two_word_pair
 *   and return_first_word_1045c514/read_struct_field_at_offset_4 to retrieve reference
 *   dimensions, and performs arithmetic to clamp or adjust the overlay's horizontal and
 *   vertical extents. The resulting offsets and flags are written back to param_1 at
 *   offsets 0x38 through 0x4c. The logic resembles adjusting a viewfinder or OSD region
 *   based on sensor or display geometry.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_viewfinder_overlay_bounds(int param_1,void *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uintptr_t sp;
  uint32_t in_stack_00000004;
  uint32_t in_stack_00000008;
  uint32_t in_stack_0000000c;
  uint32_t in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  uint32_t auStack_18 [4];
  
  if (*(short *)(param_1 + 0x32) != 100) {
    uVar5 = (uint)*(ushort *)((int)param_2 + 0x10);
    uVar4 = (uint)*(ushort *)((int)param_2 + 0x12);
    copy_two_word_pair(auStack_18,(void *)param_1);
    uVar1 = return_first_word_1045c514(auStack_18);
    uVar2 = read_struct_field_at_offset_4(auStack_18);
    if (uVar5 == (uVar1 & 0xffff)) {
      in_stack_0000000c = 0;
      in_stack_00000014 = uVar5 - 1;
    }
    else {
      iVar3 = (int)(uVar1 & 0xffff) >> 1;
      if (iVar3 < *(int *)(param_1 + 0x38)) {
        if ((int)(uVar5 - iVar3) <= *(int *)(param_1 + 0x38)) {
          in_stack_00000014 = uVar5 - 1;
        }
      }
      else {
        in_stack_0000000c = 0;
      }
    }
    if (uVar4 == (uVar2 & 0xffff)) {
      in_stack_00000010 = 0;
      in_stack_00000018 = uVar4 - 1;
    }
    else {
      iVar3 = (int)(uVar2 & 0xffff) >> 1;
      if (iVar3 < *(int *)(param_1 + 0x3c)) {
        if ((int)(uVar4 - iVar3) <= *(int *)(param_1 + 0x3c)) {
          in_stack_00000018 = uVar4 - 1;
        }
      }
      else {
        in_stack_00000010 = 0;
      }
    }
    free_heap_if_flagged_1045c402(auStack_18,2);
  }
  *(uint32_t *)(param_1 + 0x38) = in_stack_00000004;
  *(uint32_t *)(param_1 + 0x3c) = in_stack_00000008;
  *(uint32_t *)(param_1 + 0x40) = in_stack_0000000c;
  *(uint32_t *)(param_1 + 0x44) = in_stack_00000010;
  *(int *)(param_1 + 0x48) = in_stack_00000014;
  *(int *)(param_1 + 0x4c) = in_stack_00000018;
  return;
}
