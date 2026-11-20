/* @k10d initialize_camera_mode_context_10446ad4 @ 0x10446ad4
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Initializes a camera mode context structure by allocating sub-objects and invoking a
 *   virtual setup method.
 * summary:
 *   The function takes a context pointer and an index, using the index to select
 *   configuration values from a global table at 0x105a1888. It allocates two sub-objects
 *   (one via cls_105a1a84_new and one via heap_alloc/cls_105a2be0_new) and stores their
 *   pointers in the context. It then constructs a local parameter structure and calls a
 *   virtual method (slot 2) on the first sub-object, passing the parameters. If the virtual
 *   call succeeds, it calls store_value_if_valid and dispatch_mode_command_10446d8a. The
 *   caller is a virtual method of cls_105a18b4, suggesting this is part of a camera mode or
 *   state machine initialization.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t initialize_camera_mode_context_10446ad4(void *param_1,int param_2)

{
  int iVar1;
  uint32_t uVar2;
  void *pvVar3;
  void *pvVar4;
  uint32_t uVar5;
  int iVar6;
  cls_105a2be0 *pcVar7;
  int iVar8;
  uintptr_t sp;
  uint32_t uStack_38;
  uint32_t uStack_2c;
  uint32_t uStack_28;
  uint16_t uStack_24;
  uint16_t uStack_22;
  uint8_t uStack_20;
  uint8_t uStack_1f;
  void *pvStack_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t uStack_c;
  
  pvVar3 = (void *)get_or_init_sram_buffer_104277bc();
  iVar1 = param_2 * 0x14;
  pvVar3 = (void *)read_table_entry_field(pvVar3,*(int *)(iVar1 + 0x105a188c/*ROM*/));
  pvVar4 = (void *)get_or_init_sram_buffer_104277bc();
  uVar5 = read_table_entry_field(pvVar4,*(int *)(iVar1 + 0x105a1888/*ROM*/));
  iVar8 = param_2 * 4;
  iVar6 = cls_105a1a84_new((cls_105a1a84 *)0x0,0);
  *(int *)((int)param_1 + iVar8 + 4) = iVar6;
  uVar2 = *(uint32_t *)(iVar1 + 0x105a1898/*ROM*/);
  pcVar7 = (cls_105a2be0 *)heap_alloc((void *)0xc);
  if (pcVar7 != (cls_105a2be0 *)0x0) {
    cls_105a2be0_new(pcVar7);
    pcVar7[1].field_0x0 = uVar2;
  }
  *(cls_105a2be0 **)((int)param_1 + iVar8 + 0xc) = pcVar7;
  uStack_38 = call_helper_with_fixed_args_1044a9a0((void*)(*(uint32_t *)((int)param_1 + iVar8 + 0xc)));
  clear_flag3_with_notify(pvVar3);
  set_flag2_with_notify(pvVar3);
  initialize_36_byte_struct(&uStack_2c);
  uStack_24 = 1;
  uStack_22 = 1;
  uStack_2c = 0xc15c;
  uStack_28 = 66000;
  uStack_14 = *(uint32_t *)((int)param_1 + 0x14);
  uStack_10 = *(uint32_t *)((int)param_1 + 0x18);
  uStack_1f = 1;
  uStack_20 = 1;
  uStack_c = *(uint32_t *)((int)param_1 + iVar8 + 0xc);
  iVar6 = *(int *)(*(int *)((int)param_1 + iVar8 + 4) + 4);
  pvStack_1c = pvVar3;
  uStack_18 = uVar5;
  iVar6 = (((vtbl_entry*)(iVar6))[2].fn)
                    (*(int *)((int)param_1 + iVar8 + 4) + (int)((vtbl_entry*)(iVar6))[2].adj,&uStack_2c);
  if (iVar6 != 0) {
    store_value_if_valid((void*)(*(uint32_t *)((int)param_1 + iVar8 + 4)),*(uint32_t *)(iVar1 + 0x105a1890/*ROM*/));
    uStack_38 = dispatch_mode_command_10446d8a(param_1,param_2);
  }
  free_if_flag_set_1044a988(&uStack_2c,2);
  return uStack_38;
}
