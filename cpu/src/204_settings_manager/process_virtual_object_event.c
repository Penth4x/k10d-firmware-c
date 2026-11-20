/* @k10d process_virtual_object_event @ 0x1049b668
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 204_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes virtual methods on an object to read a state byte, process a 2-byte payload,
 *   and update a status flag based on the result.
 * summary:
 *   The function performs a virtual call on the object in param_3 at vtable offset 0x44 to
 *   retrieve a status byte, storing it at param_1 + 0xc. It then calls another virtual
 *   method at offset 0x14, passing a local 2-byte buffer and param_2. The buffer is passed
 *   to match_two_byte_pattern (after a call to get_or_init_sram_buffer_1049c57c), and the
 *   result determines whether a third virtual method (offset 0x3c) is called with argument
 *   1 or 0. The specific camera subsystem is not identifiable from the provided pseudocode
 *   and unknown callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void process_virtual_object_event(int param_1,uint32_t param_2,int *param_3)

{
  uint8_t uVar3;
  uint32_t uVar1;
  int iVar2;
  uintptr_t sp;
  uint8_t auStack_a [2];
  
  uVar3 = (((vtbl_entry*)(*param_3))[8].fn)((int)((vtbl_entry*)(*param_3))[8].adj + (int)param_3);
  *(uint8_t *)(param_1 + 0xc) = uVar3;
  (((vtbl_entry*)(*param_3))[2].fn)
            ((int)((vtbl_entry*)(*param_3))[2].adj + (int)param_3,auStack_a,2,param_2);
  uVar1 = get_or_init_sram_buffer_1049c57c();
  iVar2 = match_two_byte_pattern(uVar1,auStack_a);
  if (iVar2 == 1) {
    (((vtbl_entry*)(*param_3))[7].fn)((int)((vtbl_entry*)(*param_3))[7].adj + (int)param_3,1);
  }
  else if (iVar2 == 2) {
    (((vtbl_entry*)(*param_3))[7].fn)((int)((vtbl_entry*)(*param_3))[7].adj + (int)param_3,0);
  }
  return;
}
