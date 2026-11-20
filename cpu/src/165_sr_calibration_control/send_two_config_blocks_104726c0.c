/* @k10d send_two_config_blocks_104726c0 @ 0x104726c0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 165_sr_calibration_control (unit names are model-proposed)
 * purpose:
 *   Sends two configuration blocks via dispatch_actuator_drive_command and toggles a
 *   virtual object state.
 * summary:
 *   The function calls dispatch_actuator_drive_command twice with different data pointers
 *   (DAT_105a9f28 and DAT_105a9f34) and parameters. Between these calls, it retrieves an
 *   object pointer, accesses a virtual method at offset 0x154, and calls it with arguments
 *   1 and 0, likely to enable and then disable a state or mode. It also calls
 *   wait_for_state_two_with_optional_delay with param_1 and 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void send_two_config_blocks_104726c0(int param_1)

{
  void *pvVar1;
  int iVar2;
  uintptr_t sp;
  uint8_t *puVar3;
  uint8_t auStackY_2c [2];
  
  puVar3 = auStackY_2c;
  dispatch_actuator_drive_command(param_1,4,2,&DAT_105a9f28/*ROM*/,6,0xff,'\0');
  pvVar1 = (void *)get_or_init_sram_buffer_104277bc();
  iVar2 = read_table_entry_field(pvVar1,0xb8);
  (((vtbl_entry*)(*(int *)(iVar2 + 4)))[42].fn)(((vtbl_entry*)(*(int *)(iVar2 + 4)))[42].adj + iVar2,1);
  wait_for_state_two_with_optional_delay(param_1,0);
  (((vtbl_entry*)(*(int *)(iVar2 + 4)))[42].fn)(iVar2 + ((vtbl_entry*)(*(int *)(iVar2 + 4)))[42].adj,0);
  *(uint16_t *)(puVar3 + 2) = 6;
  *(uint16_t *)(puVar3 + 6) = 0xff;
  puVar3[0xb] = 0;
  dispatch_actuator_drive_command(param_1,4,2,&DAT_105a9f34/*ROM*/,*(uint16_t *)(puVar3 + 2),*(uint16_t *)(puVar3 + 6),
               puVar3[0xb]);
  return;
}
