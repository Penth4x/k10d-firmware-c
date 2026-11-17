/* @k10d check_status_and_set_error_code @ 0x1036e444
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 024_mode_transition_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_status_and_set_error_code(int param_1,uint32_t *param_2)

{
  int iVar1;
  uint32_t uVar2;
  
  uVar2 = 1;
  iVar1 = read_field_from_param_offset((void *)param_1);
  if (iVar1 == 1) {
    *param_2 = 0xe;
    uVar2 = 0;
  }
  else if (*(char *)(param_1 + 0xf8) == '\0') {
    iVar1 = read_struct_field_at_index_104c2890((void *)0x80015b24/*SDRAM*/,0);
    if (iVar1 == 0) {
      *param_2 = 0xd;
      uVar2 = 0;
    }
  }
  else {
    *param_2 = 0xf;
    uVar2 = 0;
  }
  return uVar2;
}
