/* @k10d process_object_event_1047b918 @ 0x1047b918
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void process_object_event_1047b918(int param_1)

{
  struct {
    uint16_t uStack_70;
    uint8_t uStack_6e;
    uint8_t uStack_6d;
  } _cfg_70;
  int iVar1;
  uint16_t *puVar2;
  uintptr_t sp;
  uint16_t uStack_18;
  uint16_t uStack_16;
  
  iVar1 = check_six_char_pattern((char *)(param_1 + 0x48));
  if (iVar1 != 0) {
    puVar2 = (uint16_t *)**(uint32_t **)(*(int *)(param_1 + 0x70) + 0xc);
    alloc_and_init_0x68_struct(&_cfg_70.uStack_70);
    uStack_18 = *puVar2;
    uStack_16 = puVar2[1];
    iVar1 = invoke_callback_at_offset_4(*(uint32_t *)(param_1 + 0x54),(int)&_cfg_70.uStack_70);
    if (iVar1 != 0) {
      puVar2 = *(uint16_t **)(*(int *)(*(int *)(param_1 + 0x70) + 0xc) + 4);
      *puVar2 = _cfg_70.uStack_70;
      *(uint8_t *)(puVar2 + 1) = _cfg_70.uStack_6d;
      *(uint8_t *)((int)puVar2 + 3) = _cfg_70.uStack_6e;
      *(uint32_t *)(param_1 + 0x34) = 0;
    }
    free_object_if_flag_set_1047a4c0(&_cfg_70.uStack_70,2);
  }
  return;
}
