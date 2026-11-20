/* @k10d parse_structured_data_block @ 0x104e4080
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * purpose:
 *   Reads and validates a structured data block from a stream, handling variable-length
 *   records and error recovery.
 * summary:
 *   The function initializes a local buffer and performs a series of virtual calls on an
 *   object pointed to by param_1. It appears to read a header, then iterates through a
 *   variable number of records (up to 0x21), reading and processing each one. If a specific
 *   error code (0x201) is encountered during record processing, it attempts to recover by
 *   reading additional data and returns a calculated offset. The use of virtual calls
 *   suggests it is operating on a stream or file interface object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104e4128) overlaps instruction at (ram,0x104e4126)
    */

int parse_structured_data_block(int param_1,uint32_t param_2)

{
  bool bVar1;
  uint32_t uVar2;
  int iVar3;
  uint uVar4;
  uint16_t *puVar5;
  int iVar6;
  int iVar7;
  uintptr_t sp;
  int iStack_138;
  uint16_t auStack_11c [2];
  uint8_t auStack_118 [272];
  
  fill_byte_array(auStack_11c,0,0x114);
  bVar1 = false;
  iVar6 = **(int **)(param_1 + 8);
  iVar6 = (((vtbl_entry*)(iVar6))[9].fn)
                    ((int)*(int **)(param_1 + 8) + (int)((vtbl_entry*)(iVar6))[9].adj,param_2,0xc,0);
  if (iVar6 != 0) {
    iVar6 = **(int **)(param_1 + 8);
    puVar5 = auStack_11c;
    iVar6 = (((vtbl_entry*)(iVar6))[7].fn)
                      ((int)*(int **)(param_1 + 8) + (int)((vtbl_entry*)(iVar6))[7].adj,param_2,puVar5,
                       0xc);
    if (iVar6 != 0) {
      uVar2 = check_tiff_header_magic(param_1,puVar5);
      iVar6 = convert_four_bytes_to_uint(param_1,auStack_118, __frv_reg_unset(6));
      iVar3 = swap_two_bytes_if_needed(param_1,(void*)((int)puVar5 + iVar6),uVar2);
      if (((iVar3 < 0x21) &&
          (iVar7 = **(int **)(param_1 + 8),
          iVar6 = (((vtbl_entry*)(iVar7))[9].fn)
                            ((int)*(int **)(param_1 + 8) + (int)((vtbl_entry*)(iVar7))[9].adj,param_2,
                             iVar6 + 0xe + iVar3 * 0xc,0), iVar6 != 0)) &&
         (iVar6 = **(int **)(param_1 + 8),
         iVar6 = (**(code **)(iVar6 + 0x3c))
                           ((int)*(int **)(param_1 + 8) + (int)*(short *)(iVar6 + 0x38),param_2,
                            puVar5,4), iVar6 != 0)) {
        iStack_138 = convert_four_bytes_to_uint(param_1,(void*)(puVar5),uVar2);
        iVar6 = **(int **)(param_1 + 8);
        iVar6 = (((vtbl_entry*)(iVar6))[9].fn)
                          ((int)*(int **)(param_1 + 8) + (int)((vtbl_entry*)(iVar6))[9].adj,param_2,
                           iStack_138 + 0xc,0);
        if (((iVar6 != 0) &&
            (iVar6 = **(int **)(param_1 + 8),
            iVar6 = (((vtbl_entry*)(iVar6))[7].fn)
                              ((int)*(int **)(param_1 + 8) + (int)((vtbl_entry*)(iVar6))[7].adj,param_2,
                               puVar5,2), iVar6 != 0)) &&
           (iVar6 = swap_two_bytes_if_needed(param_1,(void*)(puVar5),uVar2), iVar6 < 0x21)) {
          iStack_138 = iStack_138 + 0xe;
          iVar3 = **(int **)(param_1 + 8);
          iVar3 = (((vtbl_entry*)(iVar3))[9].fn)
                            ((int)*(int **)(param_1 + 8) + (int)((vtbl_entry*)(iVar3))[9].adj,param_2,
                             iStack_138,0);
          if ((iVar3 != 0) &&
             (iVar3 = **(int **)(param_1 + 8),
             iVar3 = (((vtbl_entry*)(iVar3))[7].fn)
                               ((int)*(int **)(param_1 + 8) + (int)((vtbl_entry*)(iVar3))[7].adj,param_2,
                                puVar5,iVar6 * 0xc), iVar3 != 0)) {
            uVar4 = 0;
            if (0 < iVar6) {
              do {
                iVar3 = swap_bytes_if_flag_set(param_1,*puVar5,uVar2);
                if (iVar3 == 0x201) {
                  iVar6 = **(int **)(param_1 + 8);
                  iVar6 = (((vtbl_entry*)(iVar6))[9].fn)
                                    ((int)*(int **)(param_1 + 8) + (int)((vtbl_entry*)(iVar6))[9].adj,
                                     param_2,uVar4 * 0xc + iStack_138 + 8,0);
                  if (iVar6 == 0) {
                    return 0;
                  }
                  iVar6 = **(int **)(param_1 + 8);
                  iVar6 = (((vtbl_entry*)(iVar6))[7].fn)
                                    ((int)*(int **)(param_1 + 8) + (int)((vtbl_entry*)(iVar6))[7].adj,
                                     param_2,auStack_11c,4);
                  if (iVar6 == 0) {
                    return 0;
                  }
                  iStack_138 = convert_four_bytes_to_uint(param_1,(void*)(auStack_11c),uVar2);
                  bVar1 = true;
                  break;
                }
                uVar4 = uVar4 + 1 & 0xffff;
                puVar5 = puVar5 + 6;
              } while ((int)uVar4 < iVar6);
            }
            if (bVar1) {
              return iStack_138 + 0xc;
            }
          }
        }
      }
    }
  }
  return 0;
}
