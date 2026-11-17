/* @k10d write_byte_to_virtual_object @ 0x10463c16
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Writes a byte to a virtual object via a vtable call, using a lookup table for
 *   channel/shift/mask or a special 0xf case.
 * summary:
 *   The function performs a virtual call on the object pointed to by param_1 using the
 *   vtable entry at offset 0x4c. If param_2 is 0xf, it makes two calls with high and low
 *   bytes of param_3. Otherwise, it uses param_2 as an index into lookup tables at
 *   0x105a76ec, 0x105a76f0, and 0x105a76f1 to determine the channel, shift amount, and mask
 *   for the byte being written. No specific camera subsystem is identifiable from the code
 *   alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_byte_to_virtual_object(int *param_1,int param_2,uint param_3)

{
  if (param_2 == 0xf) {
    (**(code **)(*param_1 + 0x4c))
              ((int)*(short *)(*param_1 + 0x48) + (int)param_1,0,(int)param_3 >> 8 & 0xff,0xff);
    (**(code **)(*param_1 + 0x4c))
              ((int)*(short *)(*param_1 + 0x48) + (int)param_1,1,param_3 & 0xff,0xff);
  }
  else {
    param_2 = param_2 * 8;
    (**(code **)(*param_1 + 0x4c))
              ((int)*(short *)(*param_1 + 0x48) + (int)param_1,
               *(uint *)(&DAT_105a76ec/*ROM*/ + param_2) & 0xff,
               param_3 << ((&DAT_105a76f1/*ROM*/)[param_2] & 0xf) & 0xff,(&DAT_105a76f0/*ROM*/)[param_2]);
  }
  return;
}
