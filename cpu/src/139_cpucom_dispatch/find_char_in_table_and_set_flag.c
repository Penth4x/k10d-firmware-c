/* @k10d find_char_in_table_and_set_flag @ 0x10463624
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

char find_char_in_table_and_set_flag(int param_1,char param_2)

{
  char cVar1;
  int iVar2;
  char cVar3;
  
  cVar1 = '\0';
  iVar2 = 0;
  do {
    cVar3 = cVar1;
    if (param_2 == *(char *)(iVar2 + 0x105a7466/*ROM*/)) break;
    iVar2 = iVar2 + 2;
    cVar1 = cVar1 + '\x01';
    cVar3 = 'O';
  } while (iVar2 < 0x9e);
  set_flg_obj((uint32_t *)(param_1 + 0x34));
  return cVar3;
}
