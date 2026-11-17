/* @k10d allocate_buffer_with_status @ 0x1054539c
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Allocates or retrieves a buffer via a helper, returning a status code and optionally
 *   the new pointer.
 * summary:
 *   Validates that param_3 is a size between 1 and 0x24 (36) bytes. Calls
 *   parse_integer_token with the buffer pointer and size. Depending on the return code (0,
 *   1, 2, or 3) and the status in iStack_1c, it adjusts the returned pointer and sets a
 *   global flag _DAT_80014a70 to 0x21. Returns the status code in r4 and optionally writes
 *   the resulting pointer to param_2. The specific role (firmware loading vs. generic
 *   allocation) is not determinable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int allocate_buffer_with_status(void *param_1,uint32_t *param_2,int param_3)

{
  void *pvVar1;
  int iVar2;
  uintptr_t sp;
  int iStack_1c;
  void *pvStack_18;
  
  if ((param_3 == 0) || ((1 < param_3 && (param_3 < 0x25)))) {
    pvStack_18 = param_1;
    iVar2 = parse_integer_token(&pvStack_18,param_3,&iStack_1c);
    pvVar1 = param_1;
    if (iVar2 != -1) {
      pvVar1 = pvStack_18;
      if (iVar2 == 0) {
        if (-1 < iStack_1c) goto LAB_1054541a;
      }
      else if (iVar2 != 2) {
        if (iVar2 == 1) {
          if (iStack_1c < 1) goto LAB_1054541a;
        }
        else if (iVar2 != 3) goto LAB_1054541a;
        iStack_1c = -0x80000000/*SDRAM*/;
        _DAT_80014a70/*SDRAM*/ = 0x21;
        goto LAB_1054541a;
      }
      iStack_1c = 0x7fffffff;
      _DAT_80014a70/*SDRAM*/ = 0x21;
    }
  }
  else {
    iStack_1c = 0;
    pvVar1 = param_1;
  }
LAB_1054541a:
  pvStack_18 = pvVar1;
  if (param_2 != (uint32_t *)0x0) {
    *param_2 = pvStack_18;
  }
  return iStack_1c;
}
