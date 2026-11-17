/* @k10d init_object_with_three_params_10367c9e @ 0x10367c9e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 009_mode_settings_manager (unit names are model-proposed)
 * purpose:
 *   Initializes an object by calling a virtual method and a helper with a fixed SDRAM
 *   address and value 3.
 * summary:
 *   The function calls reset_object_fields_and_call_base with a fixed SDRAM address
 *   (0x80015d04). It then calls retry_virtual_call_five_times_103682ac with param_1,
 *   param_1+0x40, another SDRAM address (0x80015af0), a large negative constant, and the
 *   value 3. It returns 1. The specific subsystem is not identifiable from the provided
 *   pseudocode and callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_object_with_three_params_10367c9e(void *param_1)

{
  uintptr_t sp;
  uint32_t *puVar1;
  uint8_t auStack_10 [4];
  
  puVar1 = (uint32_t *)auStack_10;
  reset_object_fields_and_call_base((void *)0x80015d04/*SDRAM*/);
  *puVar1 = 3;
  retry_virtual_call_five_times_103682ac((int)param_1,(int)param_1 + 0x40,0x80015af0/*SDRAM*/,-0x7ffea2fc,*puVar1);
  return 1;
}
