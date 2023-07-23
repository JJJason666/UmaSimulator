#include "GameDatabase.h"
#include "UmaData.h"

// 0 ��
// 1 ���Ϸɣ����ǣ�
// 2 
// 3
// 4
//


const std::string GameDatabase::AllUmaNames[ALL_UMA_NUM] = {
  "��",
  "�ر���"
  "Ӿװ�ر���"
  "�ܴ��ر���"
  "���Ϸ�",
  "����",
  "op��",
  "С������",
  "ˮ����",
  "������¹",
  "op����",
  "�𼦵���",
  "��������",
  "��ʬ����"
  "Ҳ�����"
  "��װ�����쳵"   
  "����"
  "�������"     // 2023.7.23�������
};


const std::map<int, int> GameDatabase::AllUmaGameIdToSimulatorId =
{
  {0,0},
  {100101,1},
  {100102,2},
  {100103,3},
  {101101,4},
  {102402,5},
  {102401,6},
  {109801,7},
  {101303,8},
  {100201,9},
  {100301,10},
  {100302,11},
  {101901,12},
  {101902,13},
  {107801,14},
  {101002,15},
  {106802,16},
  {110401,17},
};
const UmaData GameDatabase::AllUmas[ALL_UMA_NUM] =
{
    //0����
    {
      5,
      {
        false,false,false,false,false,false, false,false,false,false,false,false, false,false,false,false,false,false, false,false,false,false,false,false, //��һ��
        false,false,false,false,false,false, false,false,false,false,false,false, false,false,false,false,false,false, false,false,false,false,false,false, //�ڶ���
        false,false,false,false,false,false, false,false,false,false,false,false, false,false,false,false,false,false, false,false,false,false,false,false, //������
        false,false,false,false,false,true
      },
      {
        6,6,6,6,6
      },
      {
        110,110,110,110,110
      },

    },
    //1���ر���
    {
      5,
      {
        false,false,false,false,false,false, false,false,false,false,false,true, false,false,false,false,false,false, false,false,false,false,false,false, //��һ��
        false,false,true,false,false,false, false,false,false,true,false,false, false,false,false,false,false,false, false,true,false,false,false,false, //�ڶ���
        false,false,false,false,false,false, false,true,false,false,false,false, false,false,false,false,false,false, false,false,false,true,false,true, //������
        false,false,false,false,false,true
      },
      {
        0,20,0,0,10
      },
      {
        102,108,120,110,111
      },
    },
    //2��Ӿװ�ر���

    {
      5,
      {
        false,false,false,false,false,false, false,false,false,false,false,true, false,false,false,false,false,false, false,false,false,false,false,false, //��һ��
        false,false,true,false,false,false, false,false,false,true,false,false, false,false,false,false,false,false, false,true,false,false,false,false, //�ڶ���
        false,false,false,false,false,false, false,true,false,false,false,false, false,false,false,false,false,false, false,false,false,true,false,true, //������
        false,false,false,false,false,true
      },
      {
        0,10,10,10,0
      },
      {
        94,110,125,119,102
      },
    },

    //3���ܴ��ر���
    {
      5,
      {
        false,false,false,false,false,false, false,false,false,false,false,true, false,false,false,false,false,false, false,false,false,false,false,false, //��һ��
        false,false,true,false,false,false, false,false,false,true,false,false, false,false,false,false,false,false, false,true,false,false,false,false, //�ڶ���
        false,false,false,false,false,false, false,true,false,false,false,false, false,false,false,false,false,false, false,false,false,true,false,true, //������
        false,false,false,false,false,true
      },
      {
        10,10,0,0,10
      },
      {
        117,100,115,100,118
      },
    },
    //4�����Ϸ�
    {
      5,
      {
        false,false,false,false,false,false, false,false,false,false,false,true, false,false,false,false,false,false, false,false,false,false,true,false, //��һ��
        false,false,false,false,false,false, false,false,false,true,false,false, false,false,false,false,false,false, false,false,false,true,false,true, //�ڶ���
        false,false,false,false,false,false, false,false,false,false,false,true, false,false,false,false,false,false, true,false,false,false,false,true, //������
        false,false,false,false,false,true
      },
      {
        20,0,10,0,0
      },
      {
        118,91,129,96,116
      },
    },

    //5������
    {
      5,
      {
        false,false,false,false,false,false, false,false,false,false,false,true, false,false,false,false,false,false, false,false,false,false,false,false, //��һ��
        false,false,false,false,false,false, false,false,false,false,false,false, false,false,false,false,false,false, false,true,false,false,false,true, //�ڶ���
        false,false,false,false,false,true, false,true,false,false,false,true, false,false,false,false,false,false, false,true,false,false,false,true, //������
        false,false,false,false,false,true
      },
      {
        10,10,0,0,10
      },
      {
        102,123,100,110,115
      },
    },
    //6��op��
    {
      5,
      {
        false,false,false,false,false,false, false,false,false,false,false,true, false,false,false,false,false,false, false,false,false,false,false,false, //��һ��
        false,false,false,false,false,false, false,false,false,false,false,false, false,false,false,false,false,false, false,true,false,false,false,true, //�ڶ���
        false,false,false,false,false,true, false,true,false,false,false,true, false,false,false,false,false,false, false,true,false,false,false,true, //������
        false,false,false,false,false,true
      },
      {
        0,20,0,10,0
      },
      {
        94,130,86,123,117
      },
    },
    //7,С����
    {
      4,
      {
        false,false,false,false,false,false, false,false,false,false,false,true, false,false,false,false,false,false, false,false,false,false,false,true, //��һ��
        false,false,false,false,false,false, true,false,false,false,false,false, false,false,false,false,true,false, false,false,false,true,false,true, //�ڶ���
        false,false,false,true,false,false, false,false,true,false,false,true, false,false,false,false,true,false, true,false,true,false,false,true, //������
        false,false,false,false,false,true
      },
      {
        0,0,10,0,20
      },
      {
        104,97,103,96,100
      },
    },
    //8,ˮ����
    {
      3,
      {
        false,false,false,false,false,false, false,false,false,false,false,true, false,false,false,false,false,false, false,false,false,false,false,false, //��һ��
        false,false,false,false,false,false, false,false,false,false,false,false, false,false,false,false,false,true, false,true,false,false,false,false, //�ڶ���
        false,false,false,false,false,false, false,true,false,false,false,true, false,false,false,false,false,false, false,true,false,false,false,false, //������
        false,false,false,false,false,true
        },
      {
        8,8,0,0,14
      },
      {
        82,85,82,113,88
      },
    },
    //9��������¹
    {
      5,
      {
        false,false,false,false,false,false, false,false,false,false,false,true, false,false,false,false,false,false, false,false,false,false,false,false, //��һ��
        false,false,false,false,true,false, false,false,false,false,false,false, false,false,false,false,false,true, false,false,false,false,false,false, //�ڶ���
        false,false,false,false,true,false, false,false,false,false,false,true, false,false,false,false,false,false, true,true,false,false,false,false, //������
        false,false,false,false,false,true
      },
      {
        20,0,0,10,0
      },
      {
        124,102,94,122,108
      },

    },

    //10��ԭƤ����
    {
      5,
      {
        false,false,false,false,false,false, false,false,false,false,false,true, false,false,false,false,false,false, false,false,false,false,false,false, //��һ��
        false,true,false,false,false,false, true,false,false,true,false,false, false,false,false,false,false,false, false,true,false,false,false,false, //�ڶ���
        false,false,false,false,false,false, true,false,false,false,false,false, false,false,false,false,false,false, false,false,false,true,false,true, //������
        false,false,false,false,false,true
      },
      {
        20,10,0,0,0
      },
      {
        109,109,102,112,118
      },

    },

    //11���𼦵���
    {
      5,
      {
        false,false,false,false,false,false, false,false,false,false,false,true, false,false,false,false,false,false, false,false,false,false,false,false, //��һ��
        false,true,false,false,false,false, true,false,false,true,false,false, false,false,false,false,false,false, false,true,false,false,false,false, //�ڶ���
        false,false,false,false,false,false, true,false,false,false,false,false, false,false,false,false,false,false, false,false,false,true,false,true, //������
        false,false,false,false,false,true
      },
      {
        10,10,0,10,0
      },
      {
        109,125,98,106,112
      },

    },
    //12-13,����
    {
      5,
      {
        false,false,false,false,false,false, false,false,false,false,false,true,
        false,false,false,false,false,false, false,false,false,false,false,false, //��һ��
        false,false,false,true,false,false, false,false,true,false,false,false,
        true,false,false,false,false,false, false,false,false,true,false,false, //�ڶ���
        false,false,false,false,false,false, false,false,false,false,false,false,
        false,false,false,false,false,false, true,false,false,false,false,false, //������
        false,false,false,false,false,true
      },
      {
        8,8,7,0,7
      },
      {
        104,111,101,122,112
      },
    },
    {
      5,
      {
        false,false,false,false,false,false, false,false,false,false,false,true,
        false,false,false,false,false,false, false,false,false,false,false,false, //��һ��
        false,false,false,true,false,false, false,false,true,false,false,false,
        true,false,false,false,false,false, false,false,false,true,false,false, //�ڶ���
        false,false,false,false,false,false, false,false,false,false,false,false,
        false,false,false,false,false,false, true,false,false,false,false,false, //������
        false,false,false,false,false,true
      },
      {
        7,7,8,8,0
      },
      {
        104,111,120,129,86
      },
    },
    //14,Ҳ�����
    {
      5,
      {
        false,false,false,false,false,false, false,false,false,false,false,true, false,false,false,false,false,false, false,false,false,false,false,false, //��һ��
        false,true,false,false,false,false, true,false,false,true,false,false, false,false,false,false,false,false, false,true,false,false,false,false, //�ڶ���
        false,false,false,false,false,false, true,false,false,false,false,false, false,false,false,false,false,false, false,false,false,true,false,true, //������
        false,false,false,false,false,true
      },
      {
        10,0,0,10,10
      },
      {
        119,101,99,118,113
      },

    },
    //15,��װ�����쳵 
    {
      5,
      {
        false,false,false,false,false,false, false,false,false,false,false,true, false,false,false,false,false,false, false,false,false,false,false,false, //��һ��
        false,true,false,false,false,false, true,false,false,true,false,false, false,false,false,false,false,false, false,true,false,false,false,false, //�ڶ���
        false,false,false,false,false,false, true,false,false,false,false,false, false,false,false,false,false,false, false,false,false,true,false,true, //������
        false,false,false,false,false,true
      },
      {
        0,0,30,0,0
      },
      {
        124,87,130,112,97
      },

    },
    //16,����
    {
      5,
      {
        false,false,false,false,false,false, false,false,false,false,false,true, false,false,false,false,false,false, false,false,false,false,false,false, //��һ��
        false,true,false,false,false,false, true,false,false,true,false,false, false,false,false,false,false,false, false,true,false,false,false,false, //�ڶ���
        false,false,false,false,false,false, true,false,false,false,false,false, false,false,false,false,false,false, false,false,false,true,false,true, //������
        false,false,false,false,false,true
      },
      {
        10,0,10,0,10
      },
      {
       122,104,108,100,116
      },

    },
    //17,�������
    {
      5,
      {
        false,false,false,false,false,false, false,false,false,false,false,true, false,false,false,false,false,false, false,false,false,false,false,false, //��һ��
        false,true,false,false,false,false, true,false,false,true,false,false, false,false,false,false,false,false, false,true,false,false,false,false, //�ڶ���
        false,false,false,false,false,false, true,false,false,false,false,false, false,false,false,false,false,false, false,false,false,true,false,true, //������
        false,false,false,false,false,true
      },
      {
        10,0,10,10,0
      },
      {
       121,105,118,112,94
      },

    },
};
