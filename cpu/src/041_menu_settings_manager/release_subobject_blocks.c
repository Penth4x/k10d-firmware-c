/* @k10d release_subobject_blocks @ 0x1039de86
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 041_menu_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_subobject_blocks(int param_1)

{
  void *pvVar1;
  int iVar2;
  
  iVar2 = **(int **)(param_1 + 0x60);
  (**(code **)(iVar2 + 0x8c))((int)*(int **)(param_1 + 0x60) + (int)*(short *)(iVar2 + 0x88));
  iVar2 = **(int **)(param_1 + 100);
  (**(code **)(iVar2 + 0x8c))((int)*(int **)(param_1 + 100) + (int)*(short *)(iVar2 + 0x88));
  iVar2 = **(int **)(param_1 + 0x68);
  (**(code **)(iVar2 + 0x8c))((int)*(int **)(param_1 + 0x68) + (int)*(short *)(iVar2 + 0x88));
  iVar2 = **(int **)(param_1 + 0x70);
  (**(code **)(iVar2 + 0x8c))((int)*(int **)(param_1 + 0x70) + (int)*(short *)(iVar2 + 0x88));
  iVar2 = **(int **)(param_1 + 0x7c);
  (**(code **)(iVar2 + 0x8c))((int)*(int **)(param_1 + 0x7c) + (int)*(short *)(iVar2 + 0x88));
  iVar2 = **(int **)(param_1 + 0x88);
  (**(code **)(iVar2 + 0x8c))((int)*(int **)(param_1 + 0x88) + (int)*(short *)(iVar2 + 0x88));
  iVar2 = **(int **)(param_1 + 0x6c);
  (**(code **)(iVar2 + 0x8c))((int)*(int **)(param_1 + 0x6c) + (int)*(short *)(iVar2 + 0x88));
  iVar2 = **(int **)(param_1 + 0x74);
  (**(code **)(iVar2 + 0x8c))((int)*(int **)(param_1 + 0x74) + (int)*(short *)(iVar2 + 0x88));
  iVar2 = **(int **)(param_1 + 0x78);
  (**(code **)(iVar2 + 0x8c))((int)*(int **)(param_1 + 0x78) + (int)*(short *)(iVar2 + 0x88));
  iVar2 = **(int **)(param_1 + 0x90);
  (**(code **)(iVar2 + 0x8c))((int)*(int **)(param_1 + 0x90) + (int)*(short *)(iVar2 + 0x88));
  iVar2 = **(int **)(param_1 + 0x80);
  (**(code **)(iVar2 + 0x8c))((int)*(int **)(param_1 + 0x80) + (int)*(short *)(iVar2 + 0x88));
  iVar2 = **(int **)(param_1 + 0x84);
  (**(code **)(iVar2 + 0x8c))((int)*(int **)(param_1 + 0x84) + (int)*(short *)(iVar2 + 0x88));
  iVar2 = **(int **)(param_1 + 0x8c);
  (**(code **)(iVar2 + 0x8c))((int)*(int **)(param_1 + 0x8c) + (int)*(short *)(iVar2 + 0x88));
  iVar2 = **(int **)(param_1 + 0x94);
  (**(code **)(iVar2 + 0x8c))((int)*(int **)(param_1 + 0x94) + (int)*(short *)(iVar2 + 0x88));
  pvVar1 = (void *)get_system_heap();
  mempool_release_block(pvVar1,*(void **)(param_1 + 0x98));
  return;
}
