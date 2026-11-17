/* @k10d build_and_write_param_struct @ 0x104e36da
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * purpose:
 *   Constructs a data structure from param_1 fields and writes it to param_2 via helper
 *   functions.
 * summary:
 *   The function checks if param_2 is null, then allocates a temporary object and calls a
 *   virtual method on param_1 (slot at offset 0x5c) to populate a buffer. It processes this
 *   buffer with call_with_offset_lock_1048101c, performs a byte-reversal or copy operation
 *   on the result, and writes the data to param_2 using copy_eight_bytes_1045c584 and
 *   free_heap_if_flag_set_1045c56c. It then calls another virtual method (slot at offset
 *   0x24) to populate a second buffer, and if successful, writes six additional fields to
 *   param_2 using a series of FUN_1045c5xx helpers. Finally, it cleans up the temporary
 *   object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Type propagation algorithm not settling */

uint32_t build_and_write_param_struct(int param_1,uint16_t *param_2)

{
  uint32_t uVar1;
  int iVar2;
  int iVar3;
  uintptr_t sp;
  uint8_t auStack_42c [256];
  uint8_t auStack_32c [19];
  uint8_t auStack_319 [13];
  uint8_t auStack_30c [682];
  uint16_t uStack_62;
  byte bStack_5f;
  uint8_t uStack_5d;
  byte bStack_5b;
  byte bStack_59;
  byte bStack_57;
  uint8_t auStack_19 [17];
  
  if (param_2 == (uint16_t *)0x0) {
    uVar1 = 0;
  }
  else {
    cls_105ab468_new((uint8_t *)__frv_reg_unset(4));
    fill_byte_array(auStack_42c,0,0x100);
    (**(code **)(*(int *)(param_1 + 0x18) + 0x5c))
              (*(short *)(*(int *)(param_1 + 0x18) + 0x58) + param_1,auStack_42c);
    iVar2 = call_with_offset_lock_1048101c(*(void **)(param_1 + 8),auStack_42c,auStack_32c);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      iVar2 = 8;
      do {
        iVar3 = iVar2 + -1;
        auStack_19[iVar2 + 8] = auStack_319[iVar2];
        iVar2 = iVar3;
      } while (iVar3 != 0);
      iVar2 = 8;
      do {
        iVar3 = iVar2 + -1;
        auStack_19[iVar2] = auStack_19[iVar2 + 8];
        iVar2 = iVar3;
      } while (iVar3 != 0);
      copy_eight_bytes_1045c584(param_2,(uint16_t *)((int)auStack_19 + 1U));
      free_heap_if_flag_set_1045c56c((void *)((int)auStack_19 + 1U),2);
      uVar1 = 1;
    }
    init_0x2f4_byte_object(auStack_30c);
    iVar2 = (**(code **)(*(int *)(param_1 + 0x18) + 0x24))
                      (*(short *)(*(int *)(param_1 + 0x18) + 0x20) + param_1,auStack_30c);
    if (iVar2 != 0) {
      store_second_word(param_2,uStack_62);
      set_clamped_byte_field(param_2,(uint)bStack_5f);
      clamp_and_store_byte_at_offset3(param_2,uStack_5d,0);
      store_capped_byte_at_offset(param_2,(uint)bStack_5b);
      store_clamped_byte_at_offset_6(param_2,(uint)bStack_59);
      store_clamped_byte_at_offset_7(param_2,(uint)bStack_57);
    }
    cls_105ab468_delete(auStack_32c,2);
  }
  return uVar1;
}
