/* @k10d read_virtual_property_field @ 0x1046437a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 140_property_access (unit names are model-proposed)
 * purpose:
 *   Reads a specific field from an object via a virtual getter and shifts the result based
 *   on a lookup table.
 * summary:
 *   The function dispatches to a virtual method (slot 11) of the object in param_1 to
 *   retrieve a value. It handles three cases: param_2 == 0x18 reads four consecutive fields
 *   (indices 0-3) and passes them to pack_four_byte_word; param_2 == 0x19 reads field 4 and
 *   passes it to pack_four_byte_word with other arguments zeroed; otherwise it uses a
 *   lookup table at 0x105a78c4 to determine the field index and shift amount, reads the
 *   field, and returns the shifted value directly. The role of the specific data being read
 *   is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint read_virtual_property_field(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint8_t uVar4;
  uintptr_t sp;
  uint8_t *puVar5;
  uint8_t *puVar6;
  uint8_t auStack_20 [4];
  
  puVar6 = auStack_20;
  puVar5 = auStack_20;
  if (param_2 == 0x18) {
    uVar1 = (**(code **)(*param_1 + 0x5c))((int)*(short *)(*param_1 + 0x58) + (int)param_1,3,0xff);
    iVar2 = (**(code **)(*param_1 + 0x5c))((int)*(short *)(*param_1 + 0x58) + (int)param_1,2,0xff);
    iVar3 = (**(code **)(*param_1 + 0x5c))((int)*(short *)(*param_1 + 0x58) + (int)param_1,1,0xff);
    uVar4 = (**(code **)(*param_1 + 0x5c))((int)*(short *)(*param_1 + 0x58) + (int)param_1,0,0xff);
    puVar5[3] = uVar4;
    puVar6 = puVar5;
  }
  else {
    if (param_2 != 0x19) {
      param_2 = param_2 * 8;
      iVar2 = (**(code **)(*param_1 + 0x5c))
                        ((int)*(short *)(*param_1 + 0x58) + (int)param_1,
                         *(uint *)(&DAT_105a78c4/*ROM*/ + param_2) & 0xff,(&DAT_105a78c8/*ROM*/)[param_2]);
      return iVar2 >> ((byte)(&DAT_105a78c9/*ROM*/)[param_2] & 0x1f);
    }
    uVar4 = (**(code **)(*param_1 + 0x5c))((int)*(short *)(*param_1 + 0x58) + (int)param_1,4,0xff);
    puVar6[3] = uVar4;
    uVar1 = 0;
    iVar2 = 0;
    iVar3 = 0;
  }
  uVar1 = pack_four_byte_word(param_1,uVar1,iVar2,iVar3,puVar6[3]);
  return uVar1;
}
