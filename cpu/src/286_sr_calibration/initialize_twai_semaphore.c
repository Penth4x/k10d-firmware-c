/* @k10d initialize_twai_semaphore @ 0x1052b590
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 286_sr_calibration (unit names are model-proposed)
 * purpose:
 *   Sets a flag at offset 0xc and initializes a semaphore object at offset 4.
 * summary:
 *   The function writes the value 1 to the memory location at param_1 + 0xc. It then calls
 *   twai_sem_obj with param_1 + 4 and the global constant _DAT_105a2bf0, likely
 *   initializing a semaphore structure. Finally, it returns the value stored at param_1 +
 *   0xc. The role of the 'twai' subsystem is not specified in the project brief.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t initialize_twai_semaphore(int param_1)

{
  *(uint32_t *)(param_1 + 0xc) = 1;
  twai_sem_obj((void *)(param_1 + 4),_DAT_105a2bf0/*ROM*/);
  return *(uint32_t *)(param_1 + 0xc);
}
