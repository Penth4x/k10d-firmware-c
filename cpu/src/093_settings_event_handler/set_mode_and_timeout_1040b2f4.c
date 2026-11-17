/* @k10d set_mode_and_timeout_1040b2f4 @ 0x1040b2f4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 093_settings_event_handler (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1040b3a0) overlaps instruction at (ram,0x1040b39e)
    */

int set_mode_and_timeout_1040b2f4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  *(int *)(param_1 + 0x14) = param_2;
  iVar2 = param_1;
  if (param_2 == 0xc) {
    iVar2 = init_singleton_object_103cc008();
  }
  if (*(int *)(param_1 + 0x14) == 0x11) {
    if (*(int *)(param_1 + 0x18) == 0x1bb000a) {
      iVar2 = get_or_create_singleton_object_1050b118();
      for (iVar2 = get_field_at_offset_0x28(iVar2); iVar2 != 0; iVar2 = get_field_at_offset_0x28(iVar2)) {
        check_kernel_call_success_10459fea();
        iVar2 = get_or_create_singleton_object_1050b118();
      }
      iVar2 = get_or_create_singleton_object_104bb22a();
      init_and_start_timer_object(*(uint32_t *)(iVar2 + 8));
    }
    iVar2 = init_singleton_object_103cc008();
  }
  iVar1 = *(int *)(param_1 + 0x14);
  if ((((iVar1 == 7) || (iVar1 == 0)) || (iVar1 == 1)) || (iVar1 == 3)) {
    *(uint8_t *)(param_1 + 0x22) = 0x8c;
    iVar2 = 0;
  }
  if ((*(int *)(param_1 + 0x14) == 0x19) || (*(int *)(param_1 + 0x14) == 9)) {
    *(uint8_t *)(param_1 + 0x22) = 0x50;
    iVar2 = 0;
  }
  if (*(int *)(param_1 + 0x14) == 0x18) {
    *(uint8_t *)(param_1 + 0x22) = 0xb4;
    iVar2 = 0;
  }
  if (*(int *)(param_1 + 0x14) == 0x2c) {
    *(uint8_t *)(param_1 + 0x22) = 0x8c;
    iVar2 = 0;
  }
  if (*(int *)(param_1 + 0x14) == 10) {
    *(uint8_t *)(param_1 + 0x22) = 200;
    iVar2 = 0;
  }
  return iVar2;
}
