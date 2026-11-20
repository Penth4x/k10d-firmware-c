/* @k10d copy_bytes_from_object_offset @ 0x1051b346
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Copies a byte range from an object's internal buffer to a destination pointer,
 *   returning a success flag.
 * summary:
 *   Calculates a source offset within the object (param_1) using fields at +0x1c, +0x24,
 *   and param_4. Calls allocate_buffer_segment to validate or prepare the offset; if
 *   successful, it performs a byte-wise copy of param_3 bytes from the calculated source
 *   address to param_2. Returns 1 on success, 0 on failure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t copy_bytes_from_object_offset(cls_105d677c *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint32_t uStack_c;
  
  uStack_c = 0;
  iVar4 = param_1->field_0x1c + param_4 + param_1->field_0x24;
  iVar2 = allocate_buffer_segment((int)(param_1),(uint)(iVar4), (uint)(__frv_reg_unset(6)));
  if (iVar2 != 0) {
    iVar4 = param_1->field_0x4 + (iVar4 - param_1->field_0xc);
    iVar2 = 0;
    if (param_3 != 0) {
      iVar3 = param_3 + -3;
      if (2 < iVar3) {
        do {
          *(uint8_t *)(iVar2 + param_2) = *(uint8_t *)(iVar2 + iVar4);
          iVar1 = iVar2 + 2;
          *(uint8_t *)(iVar2 + 1 + param_2) = *(uint8_t *)(iVar2 + 1 + iVar4);
          iVar2 = iVar2 + 3;
          iVar3 = iVar3 + -3;
          *(uint8_t *)(iVar1 + param_2) = *(uint8_t *)(iVar1 + iVar4);
        } while (-1 < iVar3);
      }
      for (iVar3 = iVar3 + 2; -1 < iVar3; iVar3 = iVar3 + -1) {
        *(uint8_t *)(iVar2 + param_2) = *(uint8_t *)(iVar2 + iVar4);
        iVar2 = iVar2 + 1;
      }
    }
    uStack_c = 1;
  }
  return uStack_c;
}
