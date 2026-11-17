/* @k10d initialize_status_struct @ 0x104d080a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 242_event_settings_manager (unit names are model-proposed)
 * purpose:
 *   Populates a structure with values from four global state getters and initializes a sub-
 *   field.
 * summary:
 *   The function retrieves pointers from four unknown global state functions
 *   (get_or_create_singleton_object_10485138, sr_driver_singleton,
 *   initialize_singleton_object_1045d6a0) and copies specific offsets into the structure
 *   pointed to by param_1. It calls an unknown function at 0x104836de, retrieves a value
 *   from 0x10520adc, and initializes a sub-structure at offset 0x10 via wait_flg_obj. The
 *   specific camera subsystem is not identifiable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t initialize_status_struct(int param_1, uint32_t param_x1)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = get_or_create_singleton_object_10485138();
  *(uint32_t *)(param_1 + 8) = *(uint32_t *)(iVar1 + 4);
  iVar1 = sr_driver_singleton();
  *(uint32_t *)(param_1 + 0xc) = *(uint32_t *)(iVar1 + 4);
  (*(code *)0x104836de/*ROM*/)();
  uVar2 = (*(code *)0x10520adc/*ROM*/)();
  *(uint32_t *)(param_1 + 0x1c) = uVar2;
  wait_flg_obj((void *)(param_1 + 0x10),0);
  iVar1 = initialize_singleton_object_1045d6a0();
  *(uint32_t *)(param_1 + 0x18) = *(uint32_t *)(iVar1 + 8);
  return 1;
}
