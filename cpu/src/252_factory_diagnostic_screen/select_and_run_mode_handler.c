/* @k10d select_and_run_mode_handler @ 0x104e4906
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * purpose:
 *   Selects one of three handler functions based on a state check and executes it with a
 *   mode parameter.
 * summary:
 *   The function retrieves a pointer from an object at offset 0x224 and uses
 *   compare_null_terminated_strings to test it against three different constants
 *   (pvRam80010bac, pvRam80010bb4, _DAT_80010ba4). Depending on which test succeeds, it
 *   sets an index (4, 6, or 2) and calls allocate_buffer_from_descriptor_104e653e with a
 *   value from an array in param_1 and the object pointer. The selected index is stored in
 *   param_3 if provided. The specific camera subsystem is not identifiable from the
 *   provided callees or constants.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t select_and_run_mode_handler(int param_1,int param_2,int *param_3)

{
  int iVar1;
  uint32_t uVar2;
  void *pvVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 == 0) {
    pvVar3 = (void *)0x0;
  }
  else {
    pvVar3 = *(void **)(param_2 + 0x224);
  }
  iVar1 = compare_null_terminated_strings((void *)(pvVar3),(void *)(pvRam80010bac));
  if (iVar1 == 0) {
    iVar4 = 4;
  }
  else {
    iVar1 = compare_null_terminated_strings((void *)(pvVar3),(void *)(pvRam80010bb4));
    if (iVar1 == 0) {
      iVar4 = 6;
    }
    else {
      iVar1 = compare_null_terminated_strings((void *)(pvVar3),(void *)(_DAT_80010ba4/*SDRAM*/));
      if (iVar1 != 0) {
        uVar2 = 0;
        goto LAB_104e498c;
      }
      iVar4 = 2;
    }
  }
  uVar2 = allocate_buffer_from_descriptor_104e653e(*(uint32_t *)(param_1 + 0x54 + iVar4 * 4),param_2);
LAB_104e498c:
  if (param_3 != (int *)0x0) {
    *param_3 = iVar4;
  }
  return uVar2;
}
