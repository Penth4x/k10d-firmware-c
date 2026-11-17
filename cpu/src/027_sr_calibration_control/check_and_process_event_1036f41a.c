/* @k10d check_and_process_event_1036f41a @ 0x1036f41a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 027_sr_calibration_control (unit names are model-proposed)
 * purpose:
 *   Checks specific state flags and calls a handler if conditions are met, returning a
 *   status code.
 * summary:
 *   The function verifies that two short values at an offset in a sub-object match specific
 *   constants and that a global flag is 2. If these conditions hold and another global is
 *   non-zero, it initializes a local buffer, calls a handler function with a parameter from
 *   the object, and cleans up the buffer. It returns 1 by default, 0 if the handler
 *   succeeds, or 2 if the handler fails.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t check_and_process_event_1036f41a(void *param_1)

{
  uint32_t uVar1;
  int iVar2;
  uintptr_t sp;
  uint8_t auStack_18 [16];
  
  uVar1 = 1;
  if ((((*(short *)(*(int *)((int)param_1 + 0x28) + 4) == _DAT_80015d3c/*SDRAM*/) &&
       (*(short *)(*(int *)((int)param_1 + 0x28) + 6) == _DAT_80015d3e/*SDRAM*/)) && (_DAT_80015d1c/*SDRAM*/ == 2)) &&
     (DAT_80015f14/*SDRAM*/ != '\0')) {
    copy_two_words_from_param2((int)auStack_18,-0x7ffea2fc);
    iVar2 = compare_two_int_pairs((void *)((int)param_1 + 0xa8),(void *)auStack_18);
    free_heap_if_flagged_1045c402(auStack_18,2);
    uVar1 = 0;
    if (iVar2 == 0) {
      uVar1 = 2;
    }
  }
  return uVar1;
}
