/* @k10d initialize_object_subsystems_104eb426 @ 0x104eb426
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Allocates and initializes multiple heap objects and registers them with a parent
 *   structure.
 * summary:
 *   The function allocates several blocks of memory (0x18, 0x400, 0x24 bytes) and stores
 *   their pointers in fields of the object pointed to by param_1. It calls constructors
 *   (cls_105bfd6c_new, cls_10621600_new, cls_105d8ab4_new) for some of these blocks and
 *   invokes virtual methods on them. It also calls 0x104e32b0 to register these new objects
 *   with param_2 using specific IDs (0x4002, 0x4003, 0x4009). The specific roles of these
 *   objects are not clear from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_object_subsystems_104eb426(int param_1,uint32_t param_2,uint32_t param_3)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uintptr_t sp;
  uint8_t *puVar4;
  uint8_t auStack_18 [4];
  
  puVar4 = auStack_18;
  iVar1 = heap_alloc((void *)0x18);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    alloc_and_zero_small_struct_104e125e((void *)iVar1);
  }
  *(int *)(param_1 + 0x1c) = iVar1;
  uVar2 = heap_alloc_2(0x400);
  *(uint32_t *)(param_1 + 0x28) = uVar2;
  uVar2 = heap_alloc_2(0x400);
  *(uint32_t *)(param_1 + 0x2c) = uVar2;
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 != 0) {
    uVar3 = *(uint32_t *)(param_1 + 0x28);
    puVar4[3] = 1;
    (*(code *)0x104e1294/*ROM*/)(iVar1,uVar3,uVar2,0x100);
  }
  iVar1 = heap_alloc((void *)0x24);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    cls_105bfd6c_new((void *)iVar1);
  }
  *(int *)(param_1 + 0x84) = iVar1;
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 8) + 0x2c))
              (*(short *)(*(int *)(iVar1 + 8) + 0x28) + iVar1,*(uint32_t *)(param_1 + 0x1c),
               param_3);
  }
  (*(code *)0x104e32b0/*ROM*/)(param_2,0x4002,*(uint32_t *)(param_1 + 0x84));
  iVar1 = heap_alloc((void *)0x24);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    cls_10621600_new((void *)iVar1);
  }
  *(int *)(param_1 + 0x88) = iVar1;
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 8) + 0x2c))
              (*(short *)(*(int *)(iVar1 + 8) + 0x28) + iVar1,*(uint32_t *)(param_1 + 0x1c),
               param_3);
  }
  (*(code *)0x104e32b0/*ROM*/)(param_2,0x4003,*(uint32_t *)(param_1 + 0x88));
  iVar1 = heap_alloc((void *)0x24);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    cls_105d8ab4_new((void *)iVar1);
  }
  *(int *)(param_1 + 0x8c) = iVar1;
  (**(code **)(*(int *)(iVar1 + 8) + 0x2c))
            (*(short *)(*(int *)(iVar1 + 8) + 0x28) + iVar1,*(uint32_t *)(param_1 + 0x1c),param_3)
  ;
  (*(code *)0x104e32b0/*ROM*/)(param_2,0x4009,*(uint32_t *)(param_1 + 0x8c));
  return;
}
