/* @k10d initialize_object_hierarchy @ 0x104a7a68
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Resets a set of objects via virtual slot 2 and configures their relationships via
 *   virtual slot 5.
 * summary:
 *   The function retrieves pointers to eight distinct objects using helper functions
 *   (get_or_create_singleton_object_10516ff2, get_or_init_sram_object_104a7cf2, etc.). It
 *   first invokes virtual slot 2 (offset 0x14) on each object with an argument of 0, likely
 *   performing initialization or reset. It then invokes virtual slot 5 (offset 0x44) on
 *   several of these objects, passing specific integer constants (0x8769, 0x8825, 0x14a,
 *   0xa005) and pointers to other objects as arguments, suggesting the establishment of
 *   links or configuration of parameters between them. The return value is propagated from
 *   the last slot 2 call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t initialize_object_hierarchy(void)

{
  short sVar1;
  int *piVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  int iVar5;
  
  piVar2 = (int *)get_or_create_singleton_object_10516ff2();
  (((vtbl_entry*)(*piVar2))[2].fn)((int)piVar2 + (int)((vtbl_entry*)(*piVar2))[2].adj,0);
  piVar2 = (int *)get_or_init_sram_object_104a7cf2();
  (((vtbl_entry*)(*piVar2))[2].fn)((int)piVar2 + (int)((vtbl_entry*)(*piVar2))[2].adj,0);
  piVar2 = (int *)get_or_init_singleton_object_10517512();
  (((vtbl_entry*)(*piVar2))[2].fn)((int)piVar2 + (int)((vtbl_entry*)(*piVar2))[2].adj,0);
  piVar2 = (int *)get_or_create_singleton_object_104a93d0();
  (((vtbl_entry*)(*piVar2))[2].fn)((int)piVar2 + (int)((vtbl_entry*)(*piVar2))[2].adj,0);
  piVar2 = (int *)get_or_create_singleton_object_10533e2c();
  (((vtbl_entry*)(*piVar2))[2].fn)((int)piVar2 + (int)((vtbl_entry*)(*piVar2))[2].adj,0);
  piVar2 = (int *)get_or_init_ram_object_10533a6c();
  (((vtbl_entry*)(*piVar2))[2].fn)((int)piVar2 + (int)((vtbl_entry*)(*piVar2))[2].adj,0);
  piVar2 = (int *)get_or_create_singleton_object_10533898();
  (((vtbl_entry*)(*piVar2))[2].fn)((int)piVar2 + (int)((vtbl_entry*)(*piVar2))[2].adj,0);
  piVar2 = (int *)get_or_create_singleton_object_10533ca8();
  uVar3 = (((vtbl_entry*)(*piVar2))[2].fn)((int)piVar2 + (int)((vtbl_entry*)(*piVar2))[2].adj,0);
  piVar2 = (int *)get_or_create_singleton_object_10516ff2();
  iVar5 = *piVar2;
  sVar1 = *(short *)(iVar5 + 0x40);
  uVar4 = get_or_init_sram_object_104a7cf2();
  (((vtbl_entry*)(iVar5))[8].fn)((int)piVar2 + (int)sVar1,0x8769,uVar4);
  piVar2 = (int *)get_or_create_singleton_object_10516ff2();
  (((vtbl_entry*)(*piVar2))[8].fn)((int)piVar2 + (int)((vtbl_entry*)(*piVar2))[8].adj,0x8825,0);
  piVar2 = (int *)get_or_create_singleton_object_10516ff2();
  iVar5 = *piVar2;
  sVar1 = *(short *)(iVar5 + 0x40);
  uVar4 = get_or_create_singleton_object_10516ff2();
  (((vtbl_entry*)(iVar5))[8].fn)((int)piVar2 + (int)sVar1,0x14a,uVar4);
  piVar2 = (int *)get_or_init_sram_object_104a7cf2();
  iVar5 = *piVar2;
  sVar1 = *(short *)(iVar5 + 0x40);
  uVar4 = get_or_init_sram_object_104a7cf2();
  (((vtbl_entry*)(iVar5))[8].fn)((int)piVar2 + (int)sVar1,0xa005,uVar4);
  piVar2 = (int *)get_or_create_singleton_object_10533e2c();
  iVar5 = *piVar2;
  sVar1 = *(short *)(iVar5 + 0x40);
  uVar4 = get_or_init_ram_object_10533a6c();
  (((vtbl_entry*)(iVar5))[8].fn)((int)piVar2 + (int)sVar1,0x8769,uVar4);
  piVar2 = (int *)get_or_create_singleton_object_10533e2c();
  (((vtbl_entry*)(*piVar2))[8].fn)((int)piVar2 + (int)((vtbl_entry*)(*piVar2))[8].adj,0x8825,0);
  piVar2 = (int *)get_or_create_singleton_object_10533e2c();
  iVar5 = *piVar2;
  sVar1 = *(short *)(iVar5 + 0x40);
  uVar4 = get_or_create_singleton_object_10533e2c();
  (((vtbl_entry*)(iVar5))[8].fn)((int)piVar2 + (int)sVar1,0x14a,uVar4);
  piVar2 = (int *)get_or_init_ram_object_10533a6c();
  iVar5 = *piVar2;
  sVar1 = *(short *)(iVar5 + 0x40);
  uVar4 = get_or_init_ram_object_10533a6c();
  (((vtbl_entry*)(iVar5))[8].fn)((int)piVar2 + (int)sVar1,0xa005,uVar4);
  return uVar3;
}
