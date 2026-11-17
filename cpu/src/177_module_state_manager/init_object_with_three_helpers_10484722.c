/* @k10d init_object_with_three_helpers_10484722 @ 0x10484722
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Populates three fields of a struct by calling helper functions and storing their return
 *   values.
 * summary:
 *   The function calls sr_driver_singleton to get a pointer, then uses
 *   read_offset_eight_field to initialize field 8. It calls get_sram_address_0x8001dedc to
 *   initialize field 0xc and return_static_data_pointer (using the value from field 8) to
 *   initialize field 0x10. It returns 1 on success. The specific subsystem is not
 *   identifiable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_object_with_three_helpers_10484722(void *param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = sr_driver_singleton();
  uVar2 = (uint32_t)read_offset_eight_field(*(void **)(iVar1 + 4));
  *(uint32_t *)((int)param_1 + 8) = uVar2;
  uVar2 = (uint32_t)get_sram_address_0x8001dedc();
  *(uint32_t *)((int)param_1 + 0xc) = uVar2;
  uVar2 = (uint32_t)return_static_data_pointer(*(uint32_t *)((int)param_1 + 8));
  *(uint32_t *)((int)param_1 + 0x10) = uVar2;
  return 1;
}
