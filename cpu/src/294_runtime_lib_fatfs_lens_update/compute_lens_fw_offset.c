/* @k10d compute_lens_fw_offset @ 0x10542eec
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Calculates a byte offset into the lens firmware image based on row/column indices and
 *   element size.
 * summary:
 *   Reads the element size from offset 0x14 of the context object and the base address from
 *   offset 0x38. It calls write_buffer_via_virtual_method with a computed address (base +
 *   (row-2)*size) and a column offset (col*size), likely to fetch or validate data. The
 *   result is passed to unsigned_divide along with the element size, and the final value is
 *   stored in param_4. The module context is lens firmware update.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int compute_lens_fw_offset(void *param_1,void *param_2,int *param_3,uint *param_4)

{
  int iVar1;
  uint uVar2;
  uintptr_t sp;
  uint uStack_1c;
  
  uVar2 = *(uint *)((int)param_1 + 0x14);
  iVar1 = write_buffer_via_virtual_method(param_1,*(int *)((int)param_1 + 0x38) + (*param_3 + -2) * uVar2,
                       param_3[1] * uVar2,param_2,(int *)&uStack_1c);
  uVar2 = unsigned_divide(uStack_1c,uVar2);
  *param_4 = uVar2;
  return iVar1;
}
