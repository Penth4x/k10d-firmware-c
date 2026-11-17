/* @k10d process_buffer_with_status_check @ 0x105411e2
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Processes data from a source into a destination buffer, gated by a status flag check.
 * summary:
 *   The function takes a source identifier (param_1) and a destination buffer (param_2). It
 *   calls dispatch_parsed_string_result to retrieve pointers and checks a short value at
 *   offset 0xe of a structure. If the check passes, it processes data via
 *   resolve_file_path_and_read and process_0x20_byte_records, then writes results to
 *   param_2+0x200 using copy_null_terminated_string. It updates specific fields at offsets
 *   0x20d-0x214 in the destination structure and calls decrement_lens_update_step to
 *   finalize. The module context suggests lens-related operations, but the specific
 *   'firmware' role is not verifiable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint64_t process_buffer_with_status_check(char *param_1,void *param_2)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  uintptr_t sp;
  uint32_t *puVar4;
  uint8_t auStack_5c [4];
  uint auStack_58 [4];
  uint32_t uStack_48;
  uint16_t uStack_44;
  uint16_t uStack_42;
  uint8_t uStack_39;
  char local_34 [4];
  uint8_t auStack_30 [12];
  char *pcStack_24;
  uint uStack_20;
  int *piStack_1c;
  void *pvStack_18;
  
  puVar4 = (uint32_t *)auStack_5c;
  if (param_2 == (void *)0x0) {
    iVar2 = 0;
    iVar3 = -0x16;
  }
  else {
    iVar2 = dispatch_parsed_string_result(param_1,&pvStack_18,&pcStack_24);
    pvVar1 = pvStack_18;
    iVar3 = iVar2;
    if (iVar2 == 0) {
      if (*(short *)(*(int *)((int)pvStack_18 + 100) + 0xe) == 0) {
        *puVar4 = 0;
        iVar2 = resolve_file_path_and_read((int)pvVar1,pcStack_24,(int *)&uStack_20,(int *)auStack_58,
                             (int *)*puVar4);
        if (((iVar2 == -0x191) ||
            ((iVar3 = iVar2, iVar2 == 0 &&
             (iVar2 = process_0x20_byte_records(pvStack_18,uStack_20,auStack_58), iVar3 = iVar2, iVar2 == 0))))
           && (iVar2 = allocate_and_link_event_node_105382e4((int)pvStack_18,0x10,(int *)&piStack_1c,auStack_58),
              iVar3 = iVar2, iVar2 == 0)) {
          copy_null_terminated_string((void *)((int)param_2 + 0x200),auStack_30);
          if (local_34[0] != '\0') {
            copy_string_to_buffer((char *)((int)param_2 + 0x200),&DAT_10621f9c);
            copy_string_to_buffer((char *)((int)param_2 + 0x200),local_34);
          }
          copy_null_terminated_string(param_2,(void *)((int)param_2 + 0x200));
          *(uint16_t *)((int)param_2 + 0x20e) = uStack_44;
          *(uint16_t *)((int)param_2 + 0x210) = uStack_42;
          *(uint8_t *)((int)param_2 + 0x20d) = uStack_39;
          *(uint32_t *)((int)param_2 + 0x214) = uStack_48;
          iVar2 = decrement_lens_update_step(0x10,piStack_1c);
          iVar3 = iVar2;
        }
      }
      else {
        iVar3 = -6;
      }
    }
  }
  return CONCAT44(iVar3,iVar2);
}
