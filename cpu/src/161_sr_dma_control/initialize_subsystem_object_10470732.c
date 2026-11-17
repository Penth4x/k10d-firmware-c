/* @k10d initialize_subsystem_object_10470732 @ 0x10470732
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 161_sr_dma_control (unit names are model-proposed)
 * purpose:
 *   Initializes a subsystem object by configuring fields at offsets 0x40 and 0x44 and
 *   setting a flag.
 * summary:
 *   The function takes a pointer to an object and calls three initialization routines on
 *   its sub-objects. It configures the object at offset 0x44 with a value of 1, sets a
 *   parameter at offset 0x40 to 0xb, and links the object at offset 0x40 to the data at
 *   offset 4. Finally, it sets a flag on the object at offset 0x44 using twai_flg_obj.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void initialize_subsystem_object_10470732(int param_1)

{
  eventflag_clr_flg((uint32_t *)(param_1 + 0x44),1);
  write_byte_to_virtual_object((void *)(*(uint32_t *)(param_1 + 0x40)),0xb,1);
  send_data_via_cpucom(*(int **)(param_1 + 0x40),(void *)(param_1 + 4));
  twai_flg_obj((uint32_t *)(param_1 + 0x44),1,(void *)0x0,_DAT_105a2af0/*ROM*/);
  return;
}
