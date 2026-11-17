/* @k10d apply_param_struct_to_object @ 0x10506e52
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * purpose:
 *   Maps two index fields to bitmasks and writes many fields from a parameter struct onto
 *   an object via a series of setter calls.
 * summary:
 *   The function takes an object pointer, a data pointer, and a parameter struct. It calls
 *   set_pointer_and_clear_flag on a sub-object at offset 0x14. It then maps the first field
 *   of the parameter struct to a bitmask (0x800, 0x400, 0, 0x8000, 0x100, 0x200) and passes
 *   it to set_bits_12_14_of_dat_400a0020. It maps the second field to another bitmask (0,
 *   0x1000, 0x2000, 0x3000) for set_mmio_bitfield_400a0020. It subsequently calls a series
 *   of functions (set_bit_14_of_dat_400a0020 through write_masked_value_to_mmio_10458556)
 *   passing individual fields from the parameter struct to a sub-object at offset 0xc.
 *   Finally, it conditionally calls dispatch_heap_operation_1045857a,
 *   dispatch_heap_operation_1045888c, and dispatch_heap_operation_10458c40 based on the
 *   mode, and finishes with calls to set_irq_enable_bit and set_mmio_flag_bit14. The
 *   pattern is a generic configuration application routine where the specific subsystem is
 *   not identifiable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void apply_param_struct_to_object(int param_1,void *param_2,int *param_3)

{
  int iVar1;
  uint32_t uVar2;
  
  set_pointer_and_clear_flag((int *)(param_1 + 0x14),param_2);
  switch(*param_3) {
  case 0:
    uVar2 = 0x800;
    break;
  case 1:
    uVar2 = 0x400;
    break;
  case 2:
    uVar2 = 0;
    break;
  case 3:
    uVar2 = 0x8000;
    break;
  case 4:
    uVar2 = 0x100;
    break;
  case 5:
    uVar2 = 0x200;
    break;
  default:
    goto switchD_10506e76_default;
  }
  set_bits_12_14_of_dat_400a0020(*(uint32_t *)(param_1 + 0xc),uVar2);
switchD_10506e76_default:
  iVar1 = param_3[1];
  if (iVar1 == 0) {
    uVar2 = 0;
LAB_10506ede:
    set_mmio_bitfield_400a0020(*(uint32_t *)(param_1 + 0xc),uVar2);
  }
  else {
    if (iVar1 == 1) {
      uVar2 = 0x1000;
      goto LAB_10506ede;
    }
    if (iVar1 == 2) {
      uVar2 = 0x2000;
      goto LAB_10506ede;
    }
    if (iVar1 == 3) {
      uVar2 = 0x3000;
      goto LAB_10506ede;
    }
  }
  set_bit_14_of_dat_400a0020(*(uint32_t *)(param_1 + 0xc),*(uint8_t *)(param_3 + 2));
  write_masked_value_to_mmio_104584cc(*(uint32_t *)(param_1 + 0xc),*(uint16_t *)(param_3 + 3));
  write_masked_value_to_mmio_104584ee(*(uint32_t *)(param_1 + 0xc),*(uint16_t *)((int)param_3 + 0xe));
  write_masked_value_to_mmio_104584aa(*(uint32_t *)(param_1 + 0xc),*(uint16_t *)((int)param_3 + 10));
  write_masked_value_to_mmio_10458510(*(uint32_t *)(param_1 + 0xc),param_3[4]);
  write_masked_value_to_mmio_10458534(*(uint32_t *)(param_1 + 0xc),*(uint16_t *)(param_3 + 5));
  write_masked_value_to_mmio_10458556(*(uint32_t *)(param_1 + 0xc),param_3[6]);
  iVar1 = param_3[1];
  uVar2 = 0;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    if (iVar1 == 1) {
      uVar2 = 0x1000;
      iVar1 = *param_3;
      goto LAB_10506f8a;
    }
    if (iVar1 == 2) {
      uVar2 = 0x2000;
      iVar1 = *param_3;
      goto LAB_10506f8a;
    }
    if (iVar1 != 3) {
      iVar1 = *param_3;
      goto LAB_10506f8a;
    }
    uVar2 = 0x3000;
  }
  iVar1 = *param_3;
LAB_10506f8a:
  if ((iVar1 != 0) && (iVar1 != 1)) {
    if (iVar1 != 5) {
      dispatch_heap_operation_1045857a(*(uint32_t *)(param_1 + 0xc),uVar2,param_3[7]);
      dispatch_heap_operation_1045888c(*(uint32_t *)(param_1 + 0xc),uVar2,param_3[8]);
    }
    if (*param_3 != 4) {
      dispatch_heap_operation_10458c40(*(uint32_t *)(param_1 + 0xc),uVar2,param_3[9]);
    }
  }
  set_irq_enable_bit(*(int *)(param_1 + 0x10),-0x7ffffff3,0);
  set_mmio_flag_bit14(*(uint32_t *)(param_1 + 0xc),1);
  return;
}
