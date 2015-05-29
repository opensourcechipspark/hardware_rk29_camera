#ifndef ANDROID_HARDWARE_COMMONTYPE_H
#define ANDROID_HARDWARE_COMMONTYPE_H
//Ŀǰֻ��CameraAdapterΪframe provider��display��event��������frame�󣬿�ͨ������
//��buffer���ظ�CameraAdapter,CameraAdapterʵ�ָýӿڡ�

//����֡��Ϣ����width��height��bufaddr��fmt������֡�������յ�֡������������
//����zoom����Ϣ
typedef struct FramInfo
{
    int phy_addr;
    int vir_addr;
    int frame_width;
    int frame_height;
    int frame_index;
    int frame_fmt;
    int zoom_value;
    int used_flag;
    int frame_size;
    void* res;
}FramInfo_s;

typedef int (*func_displayCBForIsp)(void* frameinfo,void* cookie);

#endif
