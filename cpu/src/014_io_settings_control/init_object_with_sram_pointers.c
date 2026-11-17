/* @k10d init_object_with_sram_pointers @ 0x103695b0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 014_io_settings_control (unit names are model-proposed)
 * purpose:
 *   Initializes an object by setting SDRAM pointers and calling a virtual method.
 * summary:
 *   The function calls dispatch_event_and_return_field with -1, then constructs a local
 *   struct with four SDRAM pointers (0x80015af0, 0x800158dc, -1, 3) and a flag. It passes
 *   this struct to retry_operation_five_times_1036a7ce along with two additional SDRAM
 *   addresses. It then calls several other functions (compute_exposure_compensation,
 *   init_object_state_from_ram_flags, dispatch_state_update) and invokes virtual slot 8 of
 *   the object. Finally, it calls request_ui_sync_code_4 on a sub-object and updates a
 *   field via dispatch_state_update with a value from check_setting_0x72_enabled.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_sram_pointers(int *param_1)

{
  int iVar1;
  uintptr_t sp;
  uint32_t *puVar2;
  uint8_t auStack_1c [20];
  
  puVar2 = (uint32_t *)auStack_1c;
  dispatch_event_and_return_field(param_1,0xffffffff);
  *puVar2 = 0x80015af0/*SDRAM*/;
  puVar2[1] = 0x800158dc/*SDRAM*/;
  puVar2[2] = 0xffffffff;
  puVar2[3] = 3;
  *(uint8_t *)((int)puVar2 + 0x13) = 1;
  retry_operation_five_times_1036a7ce((int)param_1,0,0x80018058/*SDRAM*/,0x80015d04/*SDRAM*/,*puVar2,puVar2[1],puVar2[2],puVar2[3],
               *(uint8_t *)((int)puVar2 + 0x13));
  compute_exposure_compensation(param_1);
  init_object_state_from_ram_flags(param_1);
  dispatch_state_update(param_1,0);
  (**(code **)(*param_1 + 0x44))((int)*(short *)(*param_1 + 0x40) + (int)param_1);
  request_ui_sync_code_4(param_1 + 5);
  iVar1 = check_setting_0x72_enabled(0x800158d4/*SDRAM*/);
  dispatch_state_update(param_1,iVar1);
  return;
}
