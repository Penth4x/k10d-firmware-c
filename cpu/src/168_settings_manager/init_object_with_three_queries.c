/* @k10d init_object_with_three_queries @ 0x1047c7a4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 168_settings_manager (unit names are model-proposed)
 * purpose:
 *   Queries three values from a helper object and stores them in the target struct if all
 *   are non-zero.
 * summary:
 *   The function first calls eventflag_wai_flg with a pointer to offset 0x2c of the input
 *   object. If that call fails, it proceeds to call get_or_init_sram_object_10483206 to get
 *   a handle, then calls refresh_settings_and_compute_value_104832fc,
 *   refresh_settings_and_compute_value_1048332c, and refresh_and_compute_settings with that
 *   handle and a value from offset 0x68. If all three results are non-zero, it sets several
 *   byte flags at offsets 0x48-0x49 and stores the three results at offsets 0x74, 0x78, and
 *   0x7c. It also calls refresh_and_apply_settings and stores the result at 0x84. Finally,
 *   it calls set_flg_obj on the pointer at offset 0x2c.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_three_queries(int param_1)

{
  uint32_t *puVar1;
  bool bVar6;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uintptr_t sp;
  uint32_t uStack_c;
  
  uStack_c = 0;
  puVar1 = (uint32_t *)(param_1 + 0x2c);
  bVar6 = eventflag_wai_flg(puVar1,2,&uStack_c,iRam105a2af4);
  if (!bVar6) {
    iVar2 = get_or_init_sram_object_10483206();
    iVar3 = refresh_settings_and_compute_value_104832fc(iVar2,*(uint32_t *)(param_1 + 0x68));
    iVar4 = refresh_settings_and_compute_value_1048332c(iVar2,*(uint32_t *)(param_1 + 0x68));
    iVar5 = refresh_and_compute_settings(iVar2,*(uint32_t *)(param_1 + 0x68));
    if (((iVar3 != 0) && (iVar4 != 0)) && (iVar5 != 0)) {
      *(uint8_t *)(param_1 + 0x49) = 1;
      *(uint8_t *)(param_1 + 0x4c) = 0;
      *(uint8_t *)(param_1 + 0x4b) = 1;
      *(uint8_t *)(param_1 + 0x48) = 1;
      *(uint8_t *)(param_1 + 0x4a) = 0;
      *(int *)(param_1 + 0x74) = iVar3;
      *(int *)(param_1 + 0x78) = iVar4;
      *(int *)(param_1 + 0x7c) = iVar5;
      iVar2 = refresh_and_apply_settings(iVar2,*(uint32_t *)(param_1 + 0x68));
      *(int *)(param_1 + 0x84) = iVar2;
      *(bool *)(param_1 + 0x80) = iVar2 != 0;
      set_flg_obj(puVar1);
    }
    set_flg_obj(puVar1);
  }
  return;
}
