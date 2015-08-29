#ifndef GglSocket_h__
#define GglSocket_h__

#include <WinSock2.h>
#include "Definition.h"

// Network
#define GglNetwork_CloseSocket(x)						closesocket(x)

/****
 * GglSocketNode�\����
 * �l�b�g���[�N�̒ʐM�P�ʁA�\�P�b�g��ێ�����
************************************************************/
struct GglSocketNode
{
	struct GglSocketNode* next;				// ���X�g�̎���\���|�C���^
	struct GglSocketNode* prev;				// ���X�g�̑O��\���|�C���^

	GglSocket			socket;				// �\�P�b�g
	SOCKADDR_IN			address;			// �A�h���X
	CRITICAL_SECTION	criticalSection;	// �N���e�B�J���Z�N�V����

	GglSize				maxDataSize;		// �f�[�^�̃T�C�Y
	GglString			recvObject;			// ��M���
	GglString			sendObject;			// ���M���
	GglBoolean			recvDataUsedFlag;	// ��M�f�[�^���p�t���O

}typedef GglSocketNode;

#endif