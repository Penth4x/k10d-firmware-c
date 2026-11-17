/* @k10d lookup_entry_by_index @ 0x104bd778
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint lookup_entry_by_index(int param_1,int param_2,int param_3)

{
  int iVar1;
  byte bVar2;
  void *pvVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_2 == *(int *)(param_1 + 0x8d0)) {
    uVar4 = read_table_entry_if_present(param_1,param_3);
  }
  else {
    pvVar3 = (void *)(param_1 + 0xe04c + param_2 * 0xb34);
    iVar1 = compare_two_short_pairs_104c2112(param_1,(void *)(param_1 + 0x2118 + *(int *)(param_1 + 0x8d0) * 0xb34),pvVar3);
    if (iVar1 != 0) {
      bVar2 = read_byte_at_offset_1051ed64(pvVar3,param_3);
      uVar4 = (uint)bVar2;
    }
  }
  return uVar4;
}
