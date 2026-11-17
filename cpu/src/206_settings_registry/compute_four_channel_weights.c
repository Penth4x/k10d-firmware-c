/* @k10d compute_four_channel_weights @ 0x104a6032
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Selects a 4-element ushort table by index and writes four scaled values to a
 *   destination via a helper.
 * summary:
 *   The function uses param_3 (0-7) to select an offset (0x40-0x5c) into a table pointer
 *   stored at param_1+100, loading a pointer to four ushort values. It then calls
 *   write_word_to_dynamic_array four times with indices 0-3, passing values computed by
 *   multiplying each table element by a corresponding ushort from a block at param_1+0x60
 *   (offsets 0x1a-0x20) and dividing by a corresponding ushort from a block at
 *   *(param_1+100)+0x38. The exact photographic role (e.g., metering weights, WB gains) is
 *   not determinable without knowing the contents of these tables or the purpose of
 *   write_word_to_dynamic_array.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void compute_four_channel_weights(int param_1,void *param_2,uint32_t param_3)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  
  puVar2 = (ushort *)0x0;
  switch(param_3) {
  case 0:
    iVar1 = *(int *)(param_1 + 100);
    iVar3 = 0x40;
    break;
  case 1:
    iVar1 = *(int *)(param_1 + 100);
    iVar3 = 0x44;
    break;
  case 2:
    iVar1 = *(int *)(param_1 + 100);
    iVar3 = 0x48;
    break;
  case 3:
    iVar1 = *(int *)(param_1 + 100);
    iVar3 = 0x4c;
    break;
  case 4:
    iVar1 = *(int *)(param_1 + 100);
    iVar3 = 0x50;
    break;
  case 5:
    iVar1 = *(int *)(param_1 + 100);
    iVar3 = 0x54;
    break;
  case 6:
    iVar1 = *(int *)(param_1 + 100);
    iVar3 = 0x58;
    break;
  case 7:
    iVar1 = *(int *)(param_1 + 100);
    iVar3 = 0x5c;
    break;
  default:
    goto LAB_104a608c;
  }
  puVar2 = *(ushort **)(iVar3 + iVar1);
LAB_104a608c:
  write_word_to_dynamic_array((int)param_2,0,
               (short)((int)((uint)*puVar2 * (uint)*(ushort *)(*(int *)(param_1 + 0x60) + 0x1a)) /
                      (int)(uint)**(ushort **)(*(int *)(param_1 + 100) + 0x38)));
  write_word_to_dynamic_array((int)param_2,1,
               (short)((int)((uint)puVar2[1] * (uint)*(ushort *)(*(int *)(param_1 + 0x60) + 0x1c)) /
                      (int)(uint)*(ushort *)(*(int *)(*(int *)(param_1 + 100) + 0x38) + 2)));
  write_word_to_dynamic_array((int)param_2,2,
               (short)((int)((uint)puVar2[2] * (uint)*(ushort *)(*(int *)(param_1 + 0x60) + 0x1e)) /
                      (int)(uint)*(ushort *)(*(int *)(*(int *)(param_1 + 100) + 0x38) + 4)));
  write_word_to_dynamic_array((int)param_2,3,
               (short)((int)((uint)puVar2[3] * (uint)*(ushort *)(*(int *)(param_1 + 0x60) + 0x20)) /
                      (int)(uint)*(ushort *)(*(int *)(*(int *)(param_1 + 100) + 0x38) + 6)));
  return;
}
