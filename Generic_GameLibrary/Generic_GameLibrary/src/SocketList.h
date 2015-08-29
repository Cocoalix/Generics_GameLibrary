#ifndef GglSocketList_h__
#define GglSocketList_h__

#include "Definition.h"
#include "Socket.h"

/**
 * GglSocketList�\����
 * �\�P�b�g�̃��X�g
 */
struct GglSocketList
{
	GglSocketNode*	head;				// �ʐM���X�g�̐�[
	GglSocketNode*	tail;				// �ʐM���X�g�̍Ō��

	GglSocketNode*	hostServerModule;	// �z�X�g�A���邢�̓T�[�o����������̃\�P�b�g

	unsigned int	count;				// �ʐM���Ă��鐔
	GglBoolean		useNetworkFlag;		// �l�b�g���[�N�g�p�t���O

}typedef GglSocketList;


void GglSocketList_Initialize(GglSocketList* self);
void GglSocketList_Shutdown(GglSocketList* self);

GglBoolean GglSocketList_AddElement(GglSocketList* self, GglSocketNode* node);
GglBoolean GglSocketList_RemoveElement(GglSocketList* self, GglSocketNode* node);
GglBoolean GglSocketList_RemoveElementAt(GglSocketList* self, unsigned int element);
GglBoolean GglSocketList_RemoveAllElements(GglSocketList* self);

void		GglSocketList_GetIpAddress(GglSocketList* self, GglString out_ipAddr);	// ����IP�擾
GglBoolean	GglSocketList_MakeSocket(GglSocketList* self, GglSocketNode* _pModule, GglString _addressString, int _usePort);

//void		GglSocketList_HostServerWaitGuestClient(GglObject _object);
GglBoolean	GglSocketList_HostServerWaitGuestClientOnce(GglSocketList* self, GglObject _object);

void		GglSocketList_ReceiveData(GglSocketList* self, GglObject _object);
void		GglSocketList_SendData(GglSocketList* self, GglObject _object);

#endif