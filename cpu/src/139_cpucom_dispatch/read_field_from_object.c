/* @k10d read_field_from_object @ 0x10463c88
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint read_field_from_object(int *param_1,int param_2)

{
  ushort uVar3;
  short sVar4;
  int iVar1;
  uint uVar2;
  
  if (param_2 == 0xf) {
    uVar3 = (((vtbl_entry*)(*param_1))[11].fn)((int)((vtbl_entry*)(*param_1))[11].adj + (int)param_1,1,0xff);
    sVar4 = (((vtbl_entry*)(*param_1))[11].fn)((int)((vtbl_entry*)(*param_1))[11].adj + (int)param_1,0,0xff);
    uVar3 = pack_two_byte_value_10465228(param_1,uVar3,sVar4);
    uVar2 = (uint)uVar3;
  }
  else {
    param_2 = param_2 * 8;
    iVar1 = (((vtbl_entry*)(*param_1))[11].fn)
                      ((int)((vtbl_entry*)(*param_1))[11].adj + (int)param_1,
                       *(uint *)(&DAT_105a76ec/*ROM*/ + param_2) & 0xff,(&DAT_105a76f0/*ROM*/)[param_2]);
    uVar2 = iVar1 >> ((byte)(&DAT_105a76f1/*ROM*/)[param_2] & 0x1f);
  }
  return uVar2;
}
