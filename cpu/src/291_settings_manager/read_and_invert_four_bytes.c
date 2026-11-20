/* @k10d read_and_invert_four_bytes @ 0x105323b4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 291_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void read_and_invert_four_bytes(int param_1,int param_2)

{
  struct {
    byte bStack_10;
    byte bStack_f;
    byte bStack_e;
    byte bStack_d;
  } _cfg_10;
  int *piVar1;
  uintptr_t sp;
  piVar1 = (int *)(*(int *)(param_1 + 0x14) + 0xa4);
  (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,&_cfg_10.bStack_10);
  _cfg_10.bStack_10 = read_byte_from_struct_offset_104a8c54(param_2,0);
  _cfg_10.bStack_10 = _cfg_10.bStack_10 ^ 0xff;
  _cfg_10.bStack_f = read_byte_from_struct_offset_104a8c54(param_2,1);
  _cfg_10.bStack_f = _cfg_10.bStack_f ^ 0xff;
  _cfg_10.bStack_e = read_byte_from_struct_offset_104a8c54(param_2,2);
  _cfg_10.bStack_e = _cfg_10.bStack_e ^ 0xff;
  _cfg_10.bStack_d = read_byte_from_struct_offset_104a8c54(param_2,3);
  _cfg_10.bStack_d = _cfg_10.bStack_d ^ 0xff;
  (((vtbl_entry*)(*piVar1))[8].fn)((int)((vtbl_entry*)(*piVar1))[8].adj + (int)piVar1,&_cfg_10.bStack_10);
  return;
}
