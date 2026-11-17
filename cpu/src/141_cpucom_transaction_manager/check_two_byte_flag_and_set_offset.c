/* @k10d check_two_byte_flag_and_set_offset @ 0x10464908
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 141_cpucom_transaction_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

char check_two_byte_flag_and_set_offset(int param_1,char param_2)

{
  char cVar1;
  int iVar2;
  char cVar3;
  
  cVar1 = '\0';
  iVar2 = 0;
  do {
    cVar3 = cVar1;
    if (param_2 == *(char *)(iVar2 + 0x105a7a44/*ROM*/)) break;
    iVar2 = iVar2 + 2;
    cVar1 = cVar1 + '\x01';
    cVar3 = '\x01';
  } while (iVar2 < 2);
  set_flg_obj((uint32_t *)(param_1 + 0x34));
  return cVar3;
}
