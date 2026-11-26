/* @k10d clear_linked_object_and_flags @ 0x104165be
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void clear_linked_object_and_flags(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x88) != 0) {
    if (*(char *)(*(int *)(param_1 + 0x88) + 0x29) != '\0') {
      eventflag_wai_flg((uint32_t *)(param_1 + 0x1540),0x20,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
    }
    if (*(char *)(*(int *)(param_1 + 0x88) + 0x2e) != '\0') {
      iVar1 = allocate_pool_block_for_object_1041819e(param_1,*(uint32_t *)(param_1 + 0x88));
      while (iVar1 == 0) {
        check_kernel_call_success_10459fea();
        iVar1 = allocate_pool_block_for_object_1041819e(param_1,*(uint32_t *)(param_1 + 0x88));
      }
    }
    if (*(char *)(*(int *)(param_1 + 0x88) + 0x2d) != '\0') {
      iVar1 = allocate_and_init_buffer_1041820a(param_1,*(uint32_t *)(param_1 + 0x88));
      while (iVar1 == 0) {
        check_kernel_call_success_10459fea();
        iVar1 = allocate_and_init_buffer_1041820a(param_1,*(uint32_t *)(param_1 + 0x88));
      }
    }
    *(uint32_t *)(param_1 + 0x88) = 0;
  }
  *(uint8_t *)(param_1 + 0x92) = 0;
  store_word_at_offset_0x1500(param_1,0);
  set_flg_obj((uint32_t *)(param_1 + 0x1538), 0x14);
  return;
}
