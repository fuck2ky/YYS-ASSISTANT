
// stdafx.cpp : ֻ������׼�����ļ���Դ�ļ�
// WindowsScreenShot.pch ����ΪԤ����ͷ
// stdafx.obj ������Ԥ����������Ϣ

#include "stdafx.h"
#include "opencv/cv.h"
BOOL m_threadStartOrStop;
int  m_windowFlag = -1;
cv::Mat FightStart_ok = cv::imread("��ʼս��_ok.jpg");
cv::Mat FightStart_no = cv::imread("��ʼս��_no.jpg");
cv::Mat Invite = cv::imread("����.jpg");
cv::Mat Erkounv = cv::imread("����Ů.jpg");
cv::Mat PrepareAction = cv::imread("׼��.jpg");
cv::Mat Jiaotu = cv::imread("����.jpg");
cv::Mat Datianogou = cv::imread("���칷.jpg");
cv::Mat Click2Continue = cv::imread("�����Ļ����.jpg");
cv::Mat VictoryLogo = cv::imread("ʤ��logo.jpg");
cv::Mat Challenge = cv::imread("��ս.jpg");
cv::Mat FirstPortrait = cv::imread("��һ����ɫ.jpg");
cv::Mat FindSuper = cv::imread("���ֳ�����.jpg"); 

cv::Mat wards = cv::imread("���.jpg");
cv::Mat wards2 = cv::imread("���2.jpg");
cv::Mat toFight = cv::imread("����.jpg");
cv::Mat flush = cv::imread("ˢ��.jpg");

//::LoadImage(NULL,_T("JPG"), MAKEINTRESOURCE(IDR_CLICK_CONTINUE));

//cv::Mat VictoryLogo1 = cv::imread(IDC_JPG9);


LPARAM FightStartPoint = MAKELPARAM(680, 425); //x���꣬y����
LPARAM PrepreActionPoint = MAKELPARAM(760, 390); //x���꣬y����
//LPARAM RightPoint = MAKELPARAM(420, 150); //x���꣬y����
LPARAM RightPoint = MAKELPARAM(627, 136); //x���꣬y����
LPARAM FightPassPoint = MAKELPARAM(805, 381); //x���꣬y����  ��յط�
LPARAM ChallengePoint = MAKELPARAM(615, 360); //x���꣬y����  ��ս  λ��


