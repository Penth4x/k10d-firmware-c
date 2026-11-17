/* @k10d dispatch_buffer_copy @ 0x104ad562
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Copies data from a source buffer to a destination, selecting an aligned or unaligned
 *   copy routine based on pointer alignment.
 * summary:
 *   The function checks if the source and destination pointers (param_1 and param_2) are
 *   non-null and 4-byte aligned. If aligned, it calls extract_bitfield_with_offset (likely
 *   a size calculation or alignment helper) and advance_buffer_read_pointer_104ad4f8
 *   (likely an aligned copy). If unaligned, it calls append_to_buffer (likely an unaligned
 *   copy). Finally, it updates the destination structure via
 *   advance_buffer_read_pointer_104ad326 with the result of the copy operation. The
 *   specific camera subsystem is not identifiable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104ad590) overlaps instruction at (ram,0x104ad58e)
    */

int dispatch_buffer_copy(int *param_1,int *param_2,uint32_t param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = *param_2;
  if ((*param_1 != 0) && (iVar3 != 0)) {
    uVar1 = param_2[3];
    if (((uVar1 & 3) == 0) && ((param_1[2] & 3U) == 0)) {
      iVar2 = extract_bitfield_with_offset(uVar1,4,0);
      iVar2 = advance_buffer_read_pointer_104ad4f8(param_1,(void *)(iVar2 * 4 + iVar3),param_3);
    }
    else {
      iVar2 = append_to_buffer(param_1,(uint8_t *)(iVar3 + uVar1),param_3);
    }
    advance_buffer_read_pointer_104ad326(param_2,iVar2);
  }
  return iVar2;
}
