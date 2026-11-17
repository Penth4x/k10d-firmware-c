/* @k10d init_exposure_config_block @ 0x1050f2a8
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 271_test_mode_manager (unit names are model-proposed)
 * purpose:
 *   Initializes a sub-object at offset 0x148 of param_1 by calling an init routine and
 *   registering it with a manager.
 * summary:
 *   The function takes a base pointer in param_1 and operates on the member at offset
 *   0x148. It first calls bind_struct_fields_to_object on that member, likely performing
 *   initialization. It then calls test_mode_config_singleton to obtain a handle or ID, and
 *   finally calls exposure_cfg_loader with that handle, the member pointer, and the
 *   constant 1, suggesting a registration or association step. The specific subsystem is
 *   not identifiable from the available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_exposure_config_block(int param_1)

{
  uint32_t uVar1;
  
  bind_struct_fields_to_object(param_1 + 0x148);
  uVar1 = test_mode_config_singleton();
  exposure_cfg_loader(uVar1,(void *)(param_1 + 0x148),1);
  return;
}
