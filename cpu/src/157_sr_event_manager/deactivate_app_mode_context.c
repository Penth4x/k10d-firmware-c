/* @k10d deactivate_app_mode_context @ 0x1046d8bc
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 157_sr_event_manager (unit names are model-proposed)
 * purpose:
 *   Tears down an application mode context by resetting sub-objects, releasing resources,
 *   and refreshing settings.
 * summary:
 *   The function takes a context pointer and calls five consecutive reset functions on the
 *   object at offset 0x1c. It performs a virtual call on the object at offset 0x18, then
 *   calls several resource management functions (invoke_virtual_slot_13_104835f0,
 *   write_structured_data_blocks, invoke_virtual_slot_6_104836e4) using pointers from
 *   offsets 0x14 and a global singleton. It calls save_settings_with_lock on the context
 *   itself, sets a flag at 0x44, and finally refreshes the settings working copy and
 *   updates objects at offset 0x3c. The sequence of resets and resource releases suggests a
 *   cleanup or deactivation routine for a camera mode or subsystem context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void deactivate_app_mode_context(int param_1)

{
  void *pvVar1;
  int iVar2;
  
  debug_flag_writer_0x1c(*(int *)(param_1 + 0x1c),0);
  debug_flag_writer_0x08(*(int *)(param_1 + 0x1c),0);
  debug_flag_writer_0x0c(*(int *)(param_1 + 0x1c),0);
  write_pattern_to_offset_0x10(*(int *)(param_1 + 0x1c),0);
  debug_flag_writer_0x14(*(int *)(param_1 + 0x1c),0);
  iVar2 = **(int **)(param_1 + 0x18);
  (**(code **)(iVar2 + 0x24))((int)*(int **)(param_1 + 0x18) + (int)*(short *)(iVar2 + 0x20),0);
  invoke_virtual_slot_13_104835f0(*(uint32_t *)(param_1 + 0x14));
  iVar2 = get_or_create_singleton_object_10485138();
  write_structured_data_blocks(*(void **)(iVar2 + 0x24));
  invoke_virtual_slot_6_104836e4(*(void **)(param_1 + 0x14));
  save_settings_with_lock(param_1);
  eventflag_clr_flg((uint32_t *)(param_1 + 0x44),1);
  send_cpucom_command_sequence_10462a46((void *)(*(uint32_t *)(param_1 + 0x34)),(void *)(param_1 + 4));
  twai_flg_obj((uint32_t *)(param_1 + 0x44),1,(void *)0x0,_DAT_105a2af0/*ROM*/);
  iVar2 = get_or_create_singleton_object_10485138();
  pvVar1 = *(void **)(iVar2 + 4);
  settings_refresh_working_copy(pvVar1);
  call_helper_with_two_offsets_104b9984(*(int *)(param_1 + 0x3c),pvVar1);
  guarded_call_with_lock_104ba4c0(*(uint32_t *)(param_1 + 0x3c),0,1);
  return;
}
