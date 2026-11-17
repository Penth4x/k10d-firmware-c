/* @k10d select_string_and_enable_display @ 0x1046a2b4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 148_bayer_decode_driver (unit names are model-proposed)
 * purpose:
 *   Selects one of three string pointers by index, performs a virtual call on an object,
 *   and enables the display output if the call succeeds.
 * summary:
 *   The function selects a string pointer and a size constant based on param_2 (3, 4, or
 *   5). It calls call_helper_and_store_result_1046a3ea with the object and selected string.
 *   If that succeeds, it makes a virtual call (slot 5) on the object at offset 0x248. If
 *   that call returns non-zero, it calls zero_and_fill_sram_buffers, sr_state_machine, and
 *   display_output_enable. It then makes two more virtual calls (slots 7 and 6) on the same
 *   object. It returns true if the first virtual call succeeded and the size from
 *   call_helper_and_store_result_1046a3ea matches the expected constant.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool select_string_and_enable_display(void *param_1,int param_2,int param_3)

{
  bool bVar2;
  int iVar1;
  ushort uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  uintptr_t sp;
  uint8_t *puVar7;
  uint8_t auStack_2c [4];
  bool bStack_15;
  uint32_t uStack_10;
  int iStack_c;
  
  puVar7 = auStack_2c;
  uStack_10 = 0;
  iStack_c = 0;
  bStack_15 = false;
  if (param_2 == 3) {
    pcVar4 = s_C__FWDC162D_BIN_105473d0;
    iVar5 = 0x800000;
  }
  else {
    if (param_2 == 4) {
      pcVar4 = s_C__FWDC162C_BIN_105473e0;
      iVar1 = 0x400000;
      iVar5 = 0x40000;
      goto LAB_1046a310;
    }
    if (param_2 != 5) {
      return false;
    }
    pcVar4 = s_C__FWDC162B_BIN_105473f0;
    iVar5 = 0x840000;
  }
  iVar1 = 0;
LAB_1046a310:
  bVar2 = call_helper_and_store_result_1046a3ea((int)param_1,pcVar4,&iStack_c);
  if ((bVar2) &&
     (iVar6 = **(int **)((int)param_1 + 0x248),
     iVar6 = (**(code **)(iVar6 + 0x2c))
                       ((int)*(int **)((int)param_1 + 0x248) + (int)*(short *)(iVar6 + 0x28),pcVar4,
                        1,&uStack_10), iVar6 != 0)) {
    zero_and_fill_sram_buffers(param_1);
    sr_state_machine(*(int *)((int)param_1 + 0x24c),_DAT_800042c8/*SDRAM*/,_DAT_800042c4/*SDRAM*/);
    display_output_enable(*(uint32_t *)((int)param_1 + 0x24c));
    uVar3 = _DAT_800042d0/*SDRAM*/ + 1;
    *(uint16_t *)(puVar7 + 2) = 7;
    forward_params_to_helper_1046a5be(param_1,0,(uint)uVar3,&DAT_105a8524/*ROM*/,*(uint16_t *)(puVar7 + 2));
    iVar6 = **(int **)((int)param_1 + 0x248);
    iVar1 = (**(code **)(iVar6 + 0x3c))
                      ((int)*(int **)((int)param_1 + 0x248) + (int)*(short *)(iVar6 + 0x38),
                       uStack_10,iVar1 * 2 + param_3,iStack_c);
    bStack_15 = iVar1 != 0;
    iVar1 = **(int **)((int)param_1 + 0x248);
    (**(code **)(iVar1 + 0x34))
              ((int)*(int **)((int)param_1 + 0x248) + (int)*(short *)(iVar1 + 0x30),uStack_10);
  }
  if (iVar5 != iStack_c) {
    bStack_15 = false;
  }
  return bStack_15;
}
