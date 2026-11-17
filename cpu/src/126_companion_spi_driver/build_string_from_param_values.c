/* @k10d build_string_from_param_values @ 0x104414d4
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Extracts four values from a parameter object, combines them with hardcoded ASCII into a
 *   buffer, and stores a new string object in the caller.
 * summary:
 *   Retrieves a base object via get_or_init_sram_buffer_104277bc and extracts four values
 *   using read_table_entry_field with indices 0x37, 0x39, 0x3b, and 0xb3. These are
 *   combined with hardcoded ASCII characters (99, 0x62, 0x61, 0x60, 0x66, 0xc, 0xb, 0xb2)
 *   into a stack buffer. A new object is allocated via cls_105a0b94_new, its pointer stored
 *   at offset 4 of param_1, and virtual slot 2 is invoked on it before cleanup via
 *   free_if_flag_set_1044148a.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t build_string_from_param_values(void *param_1)

{
  void *pvVar1;
  int iVar2;
  uint32_t uVar3;
  uintptr_t sp;
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
  initialize_48_byte_struct(&uStack_38);
  uStack_38 = read_table_entry_field(pvVar1,0x37);
  uStack_34 = read_table_entry_field(pvVar1,0x39);
  uStack_30 = read_table_entry_field(pvVar1,0x3b);
  uStack_2c = read_table_entry_field(pvVar1,0xb3);
  uStack_28 = 99;
  uStack_24 = 0x62;
  uStack_20 = 0x61;
  uStack_1c = 0x60;
  uStack_18 = 0x66;
  uStack_14 = 0xc;
  uStack_10 = 0xb;
  uStack_c = 0xb2;
  iVar2 = cls_105a0b94_new((uint32_t *)0x0,&uStack_38);
  *(int *)((int)param_1 + 4) = iVar2;
  uVar3 = (**(code **)(*(int *)(iVar2 + 4) + 0x14))
                    (iVar2 + *(short *)(*(int *)(iVar2 + 4) + 0x10),0);
  free_if_flag_set_1044148a(&uStack_38,2);
  return uVar3;
}
