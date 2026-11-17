/* @k10d process_event_and_update_state_103652c6 @ 0x103652c6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 003_ae_mode_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t process_event_and_update_state_103652c6(int *param_1)

{
  ushort uVar1;
  byte bVar6;
  ushort *puVar2;
  int iVar3;
  uint32_t uVar4;
  uint16_t uVar5;
  int *piVar7;
  
  *(uint16_t *)(param_1 + 0x87) = 0;
  *(uint16_t *)((int)param_1 + 0x21e) = 0;
  bVar6 = read_byte_at_offset_five_1051e50e((int)(param_1 + 7));
  puVar2 = (ushort *)read_array_element_at_offset((int)(param_1 + 7),(uint)bVar6);
  uVar1 = *puVar2;
  piVar7 = param_1 + 0x89;
  check_and_zero_two_buffers(piVar7);
  store_value_at_offset_eight_1047e480(piVar7,1);
  iVar3 = process_event_and_return_field_1036bc82(param_1,(uint)uVar1,piVar7);
  if (iVar3 == 1) {
    if (*(char *)(param_1 + 0x88) != '\0') {
      iterate_over_array_count(piVar7,1);
      *(ushort *)(param_1 + 0x87) = uVar1;
      uVar5 = (*(code *)0x1047e4e6/*ROM*/)(piVar7);
      *(uint16_t *)((int)param_1 + 0x21e) = uVar5;
    }
    init_object_and_call_virtual_slot_10364b70(param_1);
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}
