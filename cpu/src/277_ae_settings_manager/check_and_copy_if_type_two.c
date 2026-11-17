/* @k10d check_and_copy_if_type_two @ 0x1051e02a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_and_copy_if_type_two(uint32_t param_1,int param_2,void *param_3)

{
  uint32_t uVar1;
  byte *pbVar2;
  bool bVar3;
  
  bVar3 = *(short *)((int)param_3 + 2) == 2;
  if (bVar3) {
    uVar1 = get_or_init_sram_block_1049c644();
    pbVar2 = (byte *)(*(code *)0x104a8c94/*ROM*/)(param_3);
    parse_ascii_datetime_fields(uVar1,pbVar2,(uint16_t *)(param_2 + 0xb4));
    *(uint32_t *)(param_2 + 0xb0) = 1;
  }
  return bVar3;
}
