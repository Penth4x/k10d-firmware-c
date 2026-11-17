/* @k10d validate_and_copy_lens_object_fields @ 0x1053f376
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Validates a lens object's state, processes a derived buffer, and copies metadata fields
 *   into a destination structure.
 * summary:
 *   The function checks that param_2 is non-zero and that a lens object (retrieved via
 *   0x10538c70) has a state field of 2 and a nested status of 0. It calls
 *   dispatch_param2_command to populate a local buffer, then validate_block_sequence to
 *   process it. Finally, it calls 0x1053ab02 and copies three specific fields from the lens
 *   object into offsets 0x20e, 0x210, and 0x214 of the destination structure. The module
 *   context suggests lens communication, but the specific operation is validation and data
 *   transfer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int validate_and_copy_lens_object_fields(uint32_t param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uintptr_t sp;
  uint8_t auStack_2b0 [672];
  int *piStack_10;
  uint uStack_c;
  
  if (param_2 == 0) {
    iVar1 = -0x16;
  }
  else {
    iVar1 = (*(code *)0x10538c70/*ROM*/)(param_1,&piStack_10);
    if (iVar1 == 0) {
      iVar2 = *piStack_10;
      if (*(int *)(iVar2 + 8) == 2) {
        if (*(short *)(*(int *)(*(int *)(iVar2 + 0xc) + 100) + 0xe) == 0) {
          iVar1 = dispatch_param2_command(*(int *)(iVar2 + 0xc),(int *)(iVar2 + 0x10),auStack_2b0);
          if (iVar1 == 0) {
            iVar1 = validate_block_sequence(auStack_2b0,*(uint *)(iVar2 + 0x18),&uStack_c);
            if (iVar1 == 0) {
              (*(code *)0x1053ab02/*ROM*/)(auStack_2b0,*(uint32_t *)(iVar2 + 0x18),param_2);
              *(uint16_t *)(param_2 + 0x20e) = *(uint16_t *)(piStack_10 + 3);
              *(uint16_t *)(param_2 + 0x210) = *(uint16_t *)((int)piStack_10 + 0xe);
              *(int *)(param_2 + 0x214) = piStack_10[4];
              iVar1 = 0;
            }
            else {
              iVar1 = -0x38f;
            }
          }
        }
        else {
          iVar1 = -6;
        }
      }
      else {
        iVar1 = -9;
      }
    }
  }
  return iVar1;
}
