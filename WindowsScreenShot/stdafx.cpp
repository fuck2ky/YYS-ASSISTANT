
// stdafx.cpp : ֻ������׼�����ļ���Դ�ļ�
// WindowsScreenShot.pch ����ΪԤ����ͷ
// stdafx.obj ������Ԥ����������Ϣ

#include "stdafx.h"
#include "opencv/cv.h"
BOOL m_threadStartOrStop;
int  m_windowFlag = -1;
cv::Mat fightStart_ok = cv::imread("��ʼս��_ok.jpg");
cv::Mat fightStart_no = cv::imread("��ʼս��_no.jpg");
cv::Mat invite = cv::imread("����.jpg");
cv::Mat invite2 = cv::imread("����2.jpg");
cv::Mat Erkounv = cv::imread("����Ů.jpg");
cv::Mat prepareAction = cv::imread("׼��1.jpg");
cv::Mat prepareAction2 = cv::imread("׼��2.jpg");
cv::Mat Jiaotu = cv::imread("����.jpg");
cv::Mat Datianogou = cv::imread("���칷.jpg");
cv::Mat click2Continue = cv::imread("�����Ļ����.jpg");
cv::Mat victoryLogo = cv::imread("ʤ��logo.jpg");
cv::Mat challenge = cv::imread("��ս.jpg");
cv::Mat firstPortrait = cv::imread("��һ����ɫ.jpg");
cv::Mat findSuper = cv::imread("���ֳ�����.jpg"); 

cv::Mat wards = cv::imread("���.jpg");
cv::Mat toFight = cv::imread("����.jpg");
cv::Mat flush = cv::imread("ˢ��.jpg");

cv::Mat toFight12 = cv::imread("��ս12��.jpg");
//::LoadImage(NULL,_T("JPG"), MAKEINTRESOURCE(IDR_CLICK_CONTINUE));

//cv::Mat VictoryLogo1 = cv::imread(IDC_JPG9);


LPARAM FightStartPoint = MAKELPARAM(793, 452); //���ҳ�棬�ӳ���ʼս��
LPARAM PrepreActionPoint = MAKELPARAM(760, 390); //׼��
//LPARAM RightPoint = MAKELPARAM(420, 150); //x���꣬y����
LPARAM RightPoint = MAKELPARAM(627, 136); //x���꣬y����
LPARAM FightPassPoint = MAKELPARAM(805, 381); //x���꣬y����  ��յط�
LPARAM ChallengePoint = MAKELPARAM(615, 360); //x���꣬y����  ��ս  λ��


