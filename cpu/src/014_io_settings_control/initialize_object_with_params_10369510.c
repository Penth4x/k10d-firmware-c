/* @k10d initialize_object_with_params_10369510 @ 0x10369510
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 014_io_settings_control (unit names are model-proposed)
 * purpose:
 *   Initializes an object by setting internal fields, calling a setup routine with a
 *   parameter block, and invoking a virtual method.
 * summary:
 *   The function first calls read_field_at_offset_eight_1036ba06 with -1, then constructs a
 *   20-byte parameter block on the stack with specific SDRAM pointers and flags. It passes
 *   this block to retry_operation_five_times_1036a7ce, followed by calls to
 *   compute_exposure_compensation and init_object_state_from_ram_flags. It then calls
 *   dispatch_state_update with 0, invokes virtual slot 8 of the object, calls
 *   request_ui_sync_code_4 on a sub-object, and finally calls dispatch_state_update again
 *   with a value returned from check_setting_0x72_enabled.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_object_with_params_10369510(int *param_1)

{
  int iVar1;
  uintptr_t sp;
  uint32_t *puVar2;
  uint8_t auStack_1c [20];
  
  puVar2 = (uint32_t *)auStack_1c;
  read_field_at_offset_eight_1036ba06(param_1,0xffffffff);
  *puVar2 = 0x80015af0/*SDRAM*/;
  puVar2[1] = 0x800158dc/*SDRAM*/;
  puVar2[2] = 0xffffffff;
  puVar2[3] = 3;
  *(uint8_t *)((int)puVar2 + 0x13) = 1;
  retry_operation_five_times_1036a7ce((int)param_1,(uint32_t)(0),(void *)(0x80018058/*SDRAM*/),(uint32_t)(0x80015d04/*SDRAM*/),(uint32_t)(*puVar2),(uint32_t)(puVar2[1]),(uint32_t)(puVar2[2]),(uint32_t)(puVar2[3]), (uint8_t)(*(uint8_t *)((int)puVar2 + 0x13)));
  compute_exposure_compensation(param_1);
  init_object_state_from_ram_flags(param_1);
  dispatch_state_update(param_1,0);
  (((vtbl_entry*)(*param_1))[8].fn)((int)((vtbl_entry*)(*param_1))[8].adj + (int)param_1);
  request_ui_sync_code_4(param_1 + 5);
  iVar1 = check_setting_0x72_enabled((int *)(0x800158d4/*SDRAM*/));
  dispatch_state_update(param_1,iVar1);
  return;
}
