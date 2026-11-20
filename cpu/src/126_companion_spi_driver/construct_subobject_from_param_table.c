/* @k10d construct_subobject_from_param_table @ 0x10440196
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Builds a parameter structure, allocates a sub-object via a constructor, stores it in
 *   the parent, and invokes its second virtual method.
 * summary:
 *   The function gathers values from get_or_init_sram_buffer_104277bc and
 *   read_table_entry_field, combines them with a set of constants (including addresses in
 *   the 0x5c005000 range and integers 0x47, 0xb0) into a stack structure. It calls
 *   cls_105a0a84_new with this structure, stores the returned pointer in param_1+4, and
 *   calls virtual slot 2 on the new object with argument 0. The specific subsystem role is
 *   not determinable from the provided callees or constants.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t construct_subobject_from_param_table(cls_105a0adc *param_1)

{
  void *pvVar1;
  void *puVar2;
  uint32_t uVar3;
  uintptr_t sp;
  uint32_t uStack_3c;
  uint32_t uStack_38;
  uint32_t uStack_34;
  uint32_t uStack_30;
  uint32_t uStack_2c;
  uint32_t uStack_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint32_t uStack_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t uStack_c;
  
  pvVar1 = (void *)get_or_init_sram_buffer_104277bc();
  alloc_and_zero_struct_10440100(&uStack_3c);
  uStack_34 = read_table_entry_field(pvVar1,0xf);
  uStack_3c = read_table_entry_field(pvVar1,0x3e);
  uStack_38 = read_table_entry_field(pvVar1,0x3d);
  uStack_30 = 0x5c005000;
  uStack_2c = 0x5c005001;
  uStack_28 = 0x5c005002;
  uStack_24 = 0x5c005004;
  uStack_1c = 0x5c005006;
  uStack_20 = 0x5c005007;
  uStack_18 = 0x5c005009;
  uStack_14 = 0x5c00500a;
  uStack_c = 0x47;
  uStack_10 = 0xb0;
  puVar2 = (void *)cls_105a0a84_new((cls_105a0a84 *)0x0,&uStack_3c);
  param_1->field_0x4 = (uint32_t)(puVar2);
  uVar3 = (((vtbl_entry*)(*(int *)((char*)puVar2 + 4)))[2].fn)
                    ((char*)puVar2 + ((vtbl_entry*)(*(int *)((char*)puVar2 + 4)))[2].adj,0);
  free_if_heap_flag_set_1044014c(&uStack_3c,2);
  return uVar3;
}
