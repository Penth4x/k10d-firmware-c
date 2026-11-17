/* @k10d process_object_state_transition_10448bfc @ 0x10448bfc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t process_object_state_transition_10448bfc(void *param_1)

{
  int iVar1;
  ushort uVar2;
  uint32_t uVar3;
  
  uVar3 = 0;
  if ((*(char *)((int)param_1 + 0xde) != '\0') && (iVar1 = poll_until_two_flags_set(param_1), iVar1 != 0)) {
    uVar2 = rearui_draw_flags(*(void **)((int)param_1 + 0x110));
    if ((uVar2 & 0x15) == 0) {
      iVar1 = (*(code *)0x1044ab8a/*ROM*/)(*(uint32_t *)((int)param_1 + 0x110));
      if (iVar1 == 0) {
        uVar3 = 0;
        *(uint8_t *)((int)param_1 + 0xdd) = 0;
      }
      else {
        uVar3 = 1;
        if ((uVar2 & 0x2a) == 0) {
          *(uint8_t *)((int)param_1 + 0xdd) = 0;
        }
        else {
          *(uint8_t *)((int)param_1 + 0xdd) = 0;
          set_flag_and_notify_object(param_1,0);
          if (*(char *)((int)param_1 + 0xf8) != '\0') {
            if (*(int *)((int)param_1 + 0x3c4) == 0) {
              *(uint8_t *)((int)param_1 + 0xf8) = 0;
              set_object_flag_bit2_1044ad88(*(void **)((int)param_1 + 0x110),0);
              update_object_field_with_guard(param_1,*(uint *)((int)param_1 + 0xec) >> 1);
            }
            else if (*(int *)((int)param_1 + 0x3c4) == 1) {
              update_object_field_with_guard(param_1,26000);
            }
          }
        }
      }
    }
    else {
      uVar3 = 0;
      *(uint8_t *)((int)param_1 + 0xdd) = 0;
    }
    write_masked_value_to_struct_offset_1044b396(*(void **)((int)param_1 + 0x110),uVar2);
  }
  return uVar3;
}
