/* @k10d set_state_and_timeout @ 0x103ef9fc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 086_exposure_mode_menu (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103efa86) overlaps instruction at (ram,0x103efa84)
    */

int set_state_and_timeout(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  
  iVar2 = get_or_create_singleton_object_10485138();
  pvVar3 = *(void **)(iVar2 + 0x24);
  *(int *)(param_1 + 0x14) = param_2;
  iVar2 = param_1;
  if (param_2 == 0xc) {
    iVar2 = get_or_init_singleton_object_103c8200();
  }
  if (*(int *)(param_1 + 0x14) == 0x11) {
    if ((*(ushort *)(param_1 + 0xc) & 1) != 1) {
      call_two_helpers_on_struct_10485110(*(uint32_t *)(param_1 + 8),0);
    }
    write_structured_data_blocks(pvVar3);
    *(uint8_t *)(param_1 + 0x22) = 0x50;
    iVar2 = 0;
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
