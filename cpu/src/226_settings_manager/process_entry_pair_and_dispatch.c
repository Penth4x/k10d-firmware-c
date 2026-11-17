/* @k10d process_entry_pair_and_dispatch @ 0x104c05cc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 226_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t process_entry_pair_and_dispatch(int param_1)

{
  int iVar1;
  short *psVar2;
  short *psVar3;
  uint32_t uVar4;
  
  uVar4 = 1;
  if (*(char *)(param_1 + 0xeba1) == '\0') {
    iVar1 = *(int *)(param_1 + 0x8d0) * 0xb34;
    psVar3 = (short *)(param_1 + 0x15e4 + iVar1);
    psVar2 = (short *)(param_1 + 0x2118 + iVar1);
    if ((*psVar3 == *psVar2) && (psVar3[1] == psVar2[1])) {
      initialize_three_block_struct(psVar3);
      update_entry_pair_and_notify(param_1,0,0xffffffff);
      uVar4 = 1;
    }
    else {
      initialize_three_block_struct(psVar3);
      update_entry_pair_and_notify(param_1,0,0xffffffff);
      if (*(char *)(param_1 + 0xeba2) != '\0') {
        uVar4 = init_and_bind_object_slot(param_1,*(uint16_t *)(param_1 + 0xeba4),
                             *(uint16_t *)(param_1 + 0xeba6));
      }
    }
  }
  else {
    initialize_three_block_struct((uint16_t *)(param_1 + 0x15e4 + *(int *)(param_1 + 0x8d0) * 0xb34));
    update_entry_pair_and_notify(param_1,0,0xffffffff);
    uVar4 = 1;
  }
  return uVar4;
}
