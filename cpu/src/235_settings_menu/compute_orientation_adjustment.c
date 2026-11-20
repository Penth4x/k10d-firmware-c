/* @k10d compute_orientation_adjustment @ 0x104c9b8c
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 235_settings_menu (unit names are model-proposed)
 * purpose:
 *   Computes a rotation/flip adjustment code by comparing stored orientation values against
 *   a reference table.
 * summary:
 *   Reads two 16-bit values from an object (offsets 0xf0/0xf2) and a third value via
 *   return_first_word_1045c514/read_struct_field_at_offset_4. It queries
 *   read_struct_field_at_index_104c2890 for a mode (mapped to 0,1,2) and uses
 *   select_two_parameter_values_by_index to fetch three pairs of reference values. It
 *   compares the stored values against these references to determine a transformation code
 *   (0, 1, or 2), then calls lookup_table_entry and lookup_table_value_minus_offset to
 *   compute final parameters stored at offsets 0x104 and 0x108. The logic strongly suggests
 *   handling image orientation or sensor readout direction adjustments.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void compute_orientation_adjustment(int param_1)

{
  short sVar1;
  uint32_t uVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  int *piVar6;
  int iVar7;
  uintptr_t sp;
  short sStack_14;
  short sStack_12;
  short sStack_10;
  short sStack_e;
  short sStack_c;
  short sStack_a;
  
  uVar2 = return_first_word_1045c514((uint32_t *)(*(int *)(param_1 + 0xe4) + 0x2c));
  *(short *)(param_1 + 0xf0) = (short)uVar2;
  iVar7 = 0;
  uVar3 = read_struct_field_at_offset_4((void *)(*(int *)(param_1 + 0xe4) + 0x2c));
  *(short *)(param_1 + 0xf2) = (short)uVar3;
  *(uint32_t *)(param_1 + 0x104) = 0;
  *(uint *)(param_1 + 0x108) = (uint)*(ushort *)(param_1 + 0xf0) * (uVar3 & 0xffff);
  iVar4 = read_struct_field_at_index_104c2890(*(void **)(param_1 + 0xd8),5);
  if (iVar4 == 3) {
    iVar7 = 0;
  }
  else if (iVar4 == 2) {
    iVar7 = 1;
  }
  else if (iVar4 == 1) {
    iVar7 = 2;
  }
  pvVar5 = (void *)heap_alloc((void *)1);
  sStack_14 = 0;
  sStack_12 = 0;
  sStack_10 = 0;
  sStack_e = 0;
  sStack_c = 0;
  sStack_a = 0;
  select_two_parameter_values_by_index(pvVar5,0,&sStack_14,&sStack_12);
  select_two_parameter_values_by_index(pvVar5,1,&sStack_10,&sStack_e);
  select_two_parameter_values_by_index(pvVar5,2,&sStack_c,&sStack_a);
  if (pvVar5 != 0) {
    heap_free((int)pvVar5);
  }
  sVar1 = *(short *)(param_1 + 0xf0);
  if (((sVar1 != sStack_14) || (*(short *)(param_1 + 0xf2) != sStack_12)) &&
     ((sVar1 != sStack_12 || (*(short *)(param_1 + 0xf2) != sStack_14)))) {
    if ((sVar1 == sStack_10) && (*(short *)(param_1 + 0xf2) == sStack_e)) {
      iVar4 = 1;
      goto LAB_104c9cd0;
    }
    if ((sVar1 == sStack_e) && (*(short *)(param_1 + 0xf2) == sStack_10)) {
      iVar4 = 1;
      goto LAB_104c9cd0;
    }
    if ((sVar1 == sStack_c) && (*(short *)(param_1 + 0xf2) == sStack_a)) {
      iVar4 = 2;
      goto LAB_104c9cd0;
    }
    if ((sVar1 == sStack_a) && (iVar4 = 2, *(short *)(param_1 + 0xf2) == sStack_c))
    goto LAB_104c9cd0;
  }
  iVar4 = 0;
LAB_104c9cd0:
  piVar6 = (int *)cls_1059e05c_new((cls_1059e05c *)0x0);
  uVar2 = lookup_table_entry(piVar6,iVar7,iVar4);
  *(uint32_t *)(param_1 + 0x104) = uVar2;
  iVar4 = lookup_table_value_minus_offset(piVar6,iVar7,iVar4);
  *(int *)(param_1 + 0x108) = iVar4;
  if (piVar6 != (int *)0x0) {
    (((vtbl_entry*)(*piVar6))[1].fn)((int)*(short *)(*piVar6 + 8) + (int)piVar6,3);
  }
  return;
}
