/* @k10d extract_status_bitfield @ 0x1046b25a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 148_bayer_decode_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int extract_status_bitfield(void *param_1,uint32_t param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)status_item_location(param_2);
  switch(param_2) {
  case 7:
  case 8:
  case 0x16:
  case 0x19:
  case 0x1a:
  case 0x20:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
    iVar1 = (int)(uint)(*(byte *)((int)param_1 + *piVar2 + 4) & *(byte *)(piVar2 + 1)) >>
            (*(byte *)((int)piVar2 + 5) & 0x1f);
    break;
  default:
    iVar1 = (int)((*(byte *)((int)param_1 + *piVar2 + 4) ^ 0xffffffff) & (uint)*(byte *)(piVar2 + 1)
                 ) >> (*(byte *)((int)piVar2 + 5) & 0x1f);
    break;
  case 0x29:
  case 0x2a:
    iVar1 = (int)(char)(*(byte *)((int)param_1 + *piVar2 + 4) & *(byte *)(piVar2 + 1));
  }
  return iVar1;
}
