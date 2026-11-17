#ifndef UITRON_H
#define UITRON_H
/* uITRON 4.0 main error codes (standard values).
 * Used by the REALOS kernel (unit 0); * = seen returned by a kernel parameter check. */
#define E_OK 0
#define E_SYS (-5)
#define E_NOSPT (-9)
#define E_RSFN (-10)
#define E_RSATR (-11)  /* * */
#define E_PAR (-17)  /* * */
#define E_ID (-18)  /* * */
#define E_CTX (-25)  /* * */
#define E_MACV (-26)
#define E_OACV (-27)
#define E_ILUSE (-28)
#define E_NOMEM (-33)
#define E_NOID (-34)  /* * */
#define E_OBJ (-41)  /* * */
#define E_NOEXS (-42)  /* * */
#define E_QOVR (-43)
#define E_RLWAI (-49)
#define E_TMOUT (-50)
#define E_DLT (-51)
#define E_CLS (-52)
#define E_WBLK (-57)
#define E_BOVR (-58)
#endif
