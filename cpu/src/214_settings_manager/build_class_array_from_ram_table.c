/* @k10d build_class_array_from_ram_table @ 0x104b116e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates an array of class instances and registers each with a manager object using
 *   parameters from a RAM table.
 * summary:
 *   The function reads a count from a RAM location and allocates a heap array of pointers.
 *   It iterates through the count, constructing objects via cls_105b7eac_new using byte
 *   pairs from a RAM table and registering them with the object returned by
 *   allocate_pixel_buffer_struct. It returns the manager object pointer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t build_class_array_from_ram_table(void *param_1,uint32_t param_2,int param_3)

{
  int iVar1;
  uint8_t uVar2;
  uint8_t uVar3;
  uint uVar4;
  uint32_t uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uintptr_t sp;
  uint8_t *puVar10;
  
  puVar10 = &stack0xffffffc0;
  uVar8 = (uint)*(byte *)(param_3 + 0x105f9bf1/*ROM*/);
  uVar5 = (uint32_t)(allocate_pixel_buffer_struct((uint32_t *)0x0,(ushort)*(byte *)(param_3 + 0x105f9bf1/*ROM*/),0,0, (uint16_t *)0x0));
  iVar6 = heap_alloc_2(uVar8 << 2);
  uVar4 = 0;
  uVar9 = 0;
  if (bRam105f9bcb != 0) {
    do {
      if (*(char *)(param_3 + 0x105f9bf9/*ROM*/ + uVar4 * 2) != '\0') {
        uVar9 = uVar9 + 1 & 0xff;
      }
      uVar4 = uVar4 + 1 & 0xff;
    } while (uVar4 < bRam105f9bcb);
  }
  uVar4 = 0;
  if (uVar8 != 0) {
    iVar1 = param_3 * 3;
    do {
      uVar2 = *(uint8_t *)(iVar1 + 0x105f9bf4/*ROM*/);
      uVar3 = *(uint8_t *)(iVar1 + 0x105f9bf5/*ROM*/);
      puVar10[3] = *(uint8_t *)(iVar1 + 0x105f9bf3/*ROM*/);
      puVar10[7] = uVar2;
      puVar10[0xb] = uVar3;
      puVar10[0xf] = 0;
      iVar7 = cls_105b7eac_new((cls_105b7eac *)0x0,uVar4,uVar4,uVar9,puVar10[3],puVar10[7], puVar10[0xb],puVar10[0xf]);
      *(int *)(iVar6 + uVar4 * 4) = iVar7;
      (*(code *)0x105207b2/*ROM*/)(uVar5,iVar7,uVar4,0);
      uVar4 = uVar4 + 1 & 0xff;
    } while (uVar4 < uVar8);
  }
  return uVar5;
}
