/* @k10d execute_lens_operation @ 0x10540238
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Performs a lens operation by preparing a buffer and invoking a virtual method on the
 *   lens object.
 * summary:
 *   The function retrieves a lens object via dispatch_parsed_string_result and checks a
 *   status flag at offset 0xe. It prepares a buffer using resolve_file_path_and_read and
 *   allocate_and_link_event_node_105382e4, then calls virtual slot 2 of the lens object
 *   (via the pointer at 0x10538b86) with the provided parameters. If the operation fails,
 *   it cleans up the buffer using decrement_lens_update_step. The specific operation is
 *   determined by the virtual method called.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int execute_lens_operation(char *param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  uintptr_t sp;
  uint32_t *puVar3;
  uint8_t auStack_80 [4];
  uint auStack_7c [3];
  uint32_t uStack_70;
  byte bStack_5d;
  int *piStack_48;
  uint16_t uStack_44;
  uint16_t uStack_42;
  uint32_t uStack_38;
  uint32_t uStack_34;
  uint32_t uStack_2c;
  uint32_t uStack_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint32_t uStack_1c;
  uint32_t uStack_18;
  char *pcStack_14;
  uint uStack_10;
  void *pvStack_c;
  
  puVar3 = (uint32_t *)auStack_80;
  if (param_2 == 0) {
    iVar2 = -0x16;
  }
  else {
    iVar2 = dispatch_parsed_string_result(param_1,&pvStack_c,&pcStack_14);
    pvVar1 = pvStack_c;
    if (iVar2 == 0) {
      if (*(short *)(*(int *)((int)pvStack_c + 100) + 0xe) == 0) {
        *puVar3 = 0;
        iVar2 = resolve_file_path_and_read((int)pvVar1,pcStack_14,(int *)&uStack_10,(int *)auStack_7c,
                             (int *)*puVar3);
        if ((iVar2 == -0x191) ||
           ((iVar2 == 0 && (iVar2 = process_0x20_byte_records(pvStack_c,uStack_10,auStack_7c), iVar2 == 0)))) {
          if ((bStack_5d & 0x10) == 0) {
            iVar2 = -0x14;
          }
          else {
            iVar2 = allocate_and_link_event_node_105382e4((int)pvStack_c,0x14,(int *)&piStack_48,auStack_7c);
            if (iVar2 == 0) {
              uStack_42 = 0;
              uStack_44 = 0x14;
              uStack_38 = 0;
              uStack_34 = uStack_70;
              uStack_2c = 1;
              uStack_28 = uStack_70;
              uStack_24 = 1;
              uStack_20 = 0;
              uStack_1c = 0;
              uStack_18 = 0;
              iVar2 = (*(code *)0x10538b86/*ROM*/)(pvStack_c,&piStack_48,param_2);
              if (iVar2 == 0) {
                iVar2 = 0;
              }
              else {
                decrement_lens_update_step(0x14,piStack_48);
              }
            }
          }
        }
      }
      else {
        iVar2 = -6;
      }
    }
  }
  return iVar2;
}
