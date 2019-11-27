/*--+----1----+----2----+----3----+----4----+----5----+----6----+----7----+*/
/*  System Name   : 98025 "�������["                                       */
/*  Machine & OS  : Sony Play Station                                      */
/*  Language      : GNU C                                                  */
/*                                                                         */
/*  File Contents : font �\��                                              */
/*  File Name     : FONT.H                                                 */
/*                                                           by H.TATEYAMA */
/*                                                                         */
/*  void font_tim_set(void);                                               */
/*  void font_init(void);                                                  */
/*  void goprintf(int iX, int iY, char *str,...);                          */
/*  void goprintf2(int iX, int iY, char *str,...);                         */
/*                                                                         */
/*  >    goprintf goprintf2 �� C�֐� printf �݂����ȕ��ł� (DEBUG �p)      */
/*  >    goprintf  �͉�ʍ��W�� �w�E�x ���w�肵�܂�                        */
/*  >    goprintf2 �� �w�E�x �� �P �� �P�������� �P�ʂł�                  */
/*                                                                         */
/*  >    usage:                                                            */
/*  >         goprintf(16, 16, "��ʍ��� 16 X 16 ����\��");               */
/*  >         goprintf2(10,10, "��ʍ��� 10 X 10 ����������\��");         */
/*                                                                         */
/*--+----1----+----2----+----3----+----4----+----5----+----6----+----7----+*/
#ifndef _FONT_H_
#define _FONT_H_


/*--+----1----+----2----+----3----+----4----+----5----+----6----+----7----+*/
/*  �}�N�� & �u�� & �ϐ���                                                 */
/*--+----1----+----2----+----3----+----4----+----5----+----6----+----7----+*/
extern char   cCol;
extern short  iFontPri;

#define  MOJIKANX            14 
#define  MOJIKANY            16 
#define  HIRAGANAKANKAKU     2    // �Ђ炪�Ȃ̊Ԋu 
#define  SANO                144  // small 'a' font no 
#define  LANO                118  // large 'A' font no 
#define  ZERONO              108  // '0' font no 
#define  BARNO               60   // '-' or '�[' font no 
#define  HIRAGANANO          171  // '��' font no 
#define  KATAKANANO          254  // '�A' font no 
#define  McrFontPriSet(x) iFontPri = x;     // goprintf(2) �p OT �ł̈ʒu�w�� 


/*--+----1----+----2----+----3----+----4----+----5----+----6----+----7----+*/
/*  �֐��̃v���g�^�C�v�錾                                                 */
/*--+----1----+----2----+----3----+----4----+----5----+----6----+----7----+*/
extern void font_tim_set(void);
extern void font_init(void);
extern void fontput(short iNo, short iX, short iY);
extern void puts_str(unsigned char *str, short iX, short iY);   // ������\���i��ʍ��W�Łj 
extern void puts_str2(unsigned char *str, short iX, short iY);  // ������\�� 
extern void puts_dec(int iN, int iX, int iY, int iZ);           // ���� 10 �i���\���i��ʍ��W�Łj 
extern void puts_dec2(int iN, int iX, int iY, int iZ);          // ���� 10 �i���\�� 
extern void puts_hex(int iN, int iX, int iY, int iZ);           // ���� 16 �i���\���i��ʍ��W�Łj 
extern void puts_hex2(int iN, int iX, int iY, int iZ);          // ���� 16 �i���\�� 
extern void goprintf(int iX, int iY, char *str,...);            // �����w�蕶����\���i��ʍ��W�Łj 
extern void goprintf2(int iX, int iY, char *str,...);           // �����w�蕶����\�� 
extern void font_col_set(char cColNo);


#endif


