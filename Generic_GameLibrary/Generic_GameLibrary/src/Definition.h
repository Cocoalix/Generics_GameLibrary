#ifndef GglDefinition_h__
#define GglDefinition_h__

#include <time.h>

// foreach��
#define GGL_FOREACH(val, init, terms, cont)				if((init)!=NULL)	for((val)=(init);(val)!=(terms)&&(val)!=NULL;(val)=(val)->cont)

/**
 * �ʖ���`
 */
typedef char*			GglString;		// ������^
typedef char			GglByte;		// �o�C�g�^(1byte)
typedef unsigned char	GglUByte;		// �����Ȃ��o�C�g�^(1byte)
typedef void*			GglObject;		// �I�u�W�F�N�g�^(���ӁA�ėp�|�C���^(void*)�ł�)
typedef unsigned int	GglSize;		// �T�C�Y�^ 32bit�}�V���ł�size_t�Ɠ���
typedef clock_t			GglClock;		// �N���b�N�^ Windows��clock_t�Ɠ���
typedef unsigned int*	GglSocket;

/**
 * �萔 
 */
#define GGL_SYSTEMVER					("1.0.0.PrivateBeta")	// �V�X�e���o�[�W����������

#define GGL_PI							(3.1416)				// �~����
#define GGL_GRAVITY_FACTOR				(-0.098)					// �d��
#define GGL_MAX_STRING_LENGTH			(256)
#define GglNetwork_USE_LOCALHOST		("localhost")			// �l�b�g���[�N�p��IP������

#define GGL_FILE_READ_MODE				("r")
#define GGL_FILE_WRITE_MODE				("w")
#define GGL_FILE_ADD_MODE				("a")
#define GGL_FILE_READ_PLUS				("r+")
#define GGL_FILE_WRITE_PLUS				("w+")
#define GGL_FILE_ADD_PLUS				("a+")

#define GGL_FILE_READ_BINALY			("rb")
#define GGL_FILE_WRITE_BINALY			("wb")
#define GGL_FILE_ADD_BINALY				("ab")
#define GGL_FILE_READ_BINPLUS			("rb+")
#define GGL_FILE_WRITE_BINPLUS			("wb+")
#define GGL_FILE_ADD_BINPLUS			("ab+")

/**
 * GglBoolean�񋓑�
 * �u�[���A��������
 */
enum GglBoolean			// �u�[���A��
{
	GglFalse,			// �U(=0)
	GglTrue				// �^(=1)

}typedef GglBoolean;



#endif