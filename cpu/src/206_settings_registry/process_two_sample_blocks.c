/* @k10d process_two_sample_blocks @ 0x104a633e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Reads two sample blocks from a source, transforms 16-bit values, and writes them to a
 *   destination buffer.
 * summary:
 *   The function iterates over two indices (0 and 1), calling an unknown getter
 *   (0x104a71fe) to obtain a pointer to a 12-bit sample block. For each valid block, it
 *   processes three 16-bit words, masking them to 12 bits and left-shifting by 5 (scaling
 *   to 16-bit range), writing the results via write_two_byte_value_104a7246 into a local
 *   buffer. Finally, it calls copy_bytes_to_struct_field to transfer the processed buffer
 *   to the destination specified by param_2. The specific camera subsystem (e.g., sensor
 *   readout, metering) is not identifiable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void process_two_sample_blocks(uint32_t param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uintptr_t sp;
  int iStack_40;
  int iStack_3c;
  uint8_t auStack_30 [40];
  
  (*(code *)0x104a725c/*ROM*/)(param_1,auStack_30,2,1);
  iVar2 = 4;
  iStack_3c = 0;
  do {
    iVar1 = (*(code *)0x104a71fe/*ROM*/)(param_1,iStack_3c);
    if (iVar1 != 0) {
      iStack_40 = 2;
      iVar3 = 0;
      do {
        write_two_byte_value_104a7246(param_1,auStack_30 + iVar2,(*(ushort *)(iVar1 + iVar3) & 0x7ff) << 5,1);
        write_two_byte_value_104a7246(param_1,auStack_30 + iVar2 + 2,(*(ushort *)(iVar1 + iVar3 + 2) & 0x7ff) << 5,1)
        ;
        write_two_byte_value_104a7246(param_1,auStack_30 + iVar2 + 4,(*(ushort *)(iVar1 + iVar3 + 4) & 0x7ff) << 5,1)
        ;
        iVar3 = iVar3 + 6;
        iVar2 = iVar2 + 6;
        iStack_40 = iStack_40 + -1;
      } while (-1 < iStack_40);
    }
    iStack_3c = iStack_3c + 1;
  } while (iStack_3c < 2);
  copy_bytes_to_struct_field(param_2,auStack_30,*(uint32_t *)(param_2 + 4));
  return;
}
