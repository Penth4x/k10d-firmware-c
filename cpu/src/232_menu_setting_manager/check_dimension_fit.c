/* @k10d check_dimension_fit @ 0x104c5f38
 * name: model (proposed by the local model from the decompile, confidence 0.55)
 * unit: 232_menu_setting_manager (unit names are model-proposed)
 * purpose:
 *   Returns 1 if two stored 16-bit dimensions fit within two queried 16-bit limits, gated
 *   on a mode field equal to 2.
 * summary:
 *   Reads a mode word at param_2+0x18 and proceeds only if it equals 2. It heap-allocates a
 *   1-byte object, calls select_two_parameter_values_by_index three times with indices
 *   0,1,2 to populate three 16-bit values on the stack, then frees the allocation. It calls
 *   return_first_word_1045c514 and read_struct_field_at_offset_4 on param_2+0x2c to obtain
 *   two 16-bit limits and compares the third pair of extracted values against them,
 *   returning 1 if both are <= the limits, else 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_dimension_fit(uint32_t param_1,int param_2)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  uint32_t uVar4;
  uintptr_t sp;
  uint16_t uStack_14;
  uint16_t uStack_12;
  uint16_t uStack_10;
  uint16_t uStack_e;
  ushort uStack_c;
  ushort uStack_a;
  
  uVar4 = 0;
  if (*(int *)(param_2 + 0x18) == 2) {
    pvVar1 = (void *)heap_alloc((void *)1);
    uStack_14 = 0;
    uStack_12 = 0;
    uStack_10 = 0;
    uStack_e = 0;
    uStack_c = 0;
    uStack_a = 0;
    select_two_parameter_values_by_index(pvVar1,0,&uStack_14,&uStack_12);
    select_two_parameter_values_by_index(pvVar1,1,&uStack_10,&uStack_e);
    select_two_parameter_values_by_index(pvVar1,2,&uStack_c,&uStack_a);
    if (pvVar1 != (void *)0x0) {
      heap_free((int)pvVar1);
    }
    uVar2 = return_first_word_1045c514((uint32_t *)(param_2 + 0x2c));
    uVar3 = read_struct_field_at_offset_4((uint32_t *)(param_2 + 0x2c));
    if (((uint)uStack_c <= (uVar2 & 0xffff)) && ((uint)uStack_a <= (uVar3 & 0xffff))) {
      uVar4 = 1;
    }
  }
  return uVar4;
}
