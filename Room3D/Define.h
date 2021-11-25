//----------------------------------------------//
//	File: common.h								//
//	Desc: 										//
//	Update: 2012.6  (by 001	)				//
//----------------------------------------------//

#ifndef DEFINE_H
#define DEFINE_H
#include <QString>

#define _SUPPORT_JPEG_STATIC_LIB
#define _SUPPORT_PHONON_MOVIE
// #define _SUPPORT_STEP2_TOOLBOX_CLASSIC
#define USE_SHOW_HIDE_FLOOR	0

#define SAFE_DELETE(p) { if(p) { delete (p);     (p)=NULL; } }

enum BUTTON_STATE { BTN_STATE_NORMAL, BTN_STATE_FOCUS, BTN_STATE_PRESSED, BTN_STATE_DISABLE };
enum APP_STEP{ APP_STARTING, APP_LOGO, APP_INTRO_MOVIE, APP_EDIT_STEP_1, APP_EDIT_STEP_2, APP_EDIT_STEP_3};
enum GUIDE_ID{ STEP_NONE, STEP_1_BROWSE, STEP_2_SET_CORNER, STEP_2_SET_HEIGHT, STEP_2_CALIBRATE, STEP_2_FINISH_SETTING};

enum APP_MESSAGE
{
	APP_MSG_LOAD_BACKGROUND_IMG = 0,
	APP_MSG_CALIB_SETCOORDINATE,
	APP_MSG_CALIB_SETHELPERAXIS,
	APP_MSG_CAMERA_ROTATE,
	APP_MSG_CAMERA_MOVE,
	APP_MSG_CAMERA_FOV_CHANGE,
	APP_MSG_FURNITURE_ADD,
	APP_MSG_FURNITURE_DEL,
	APP_MSG_FURNITURE_MOVE,
	APP_MSG_FURNITURE_ROTATE,
	APP_MSG_CHANGE_BK_IMG_BRIGHT_AND_CONTRAST
};

enum APP_VERSION
{
	ROOM3D_V_1_0 = 0,
};

#define ROOM3D_VERSION		ROOM3D_V_1_0
#define DOC_ID				"Thai Room3D Document"

struct DOC_HEADER
{
	QString		m_sDocID;
	APP_VERSION			m_nVersion;
};

typedef struct _ITEM_LAYOUT_INFO
{
	int		m_x, m_y, m_w, m_h;
} CITEM_LAYOUT_INFO;

#define MENUBAR_HEIGHT	40

#define STEPBAR_HEIGHT			36
#define STEPBAR_BTN_WIDTH		425
#define STEPBAR_COMMENT_COLOR	QColor(30,123,157)
#define SCEN_VIEW_BK_COLOR_START	QColor(198,198,198)
#define SCEN_VIEW_BK_COLOR_END		QColor(255,255,255)

#define TOOLBOX_WIDTH	350
#define TUTORIAL_BTN_WIDTH		150
#define BROWSE_BTN_WIDTH		150
#define MORE_ITEM_BTN_WIDTH		150
#define TOOLBOX_CONTENTS_MARGIN	30
#define TOOLBOX_COMMENT_EDIT_COLOR	QColor(12,14,10)
#define TOOLBOX_SEPARATOR_COLOR		QColor(26,26,23)
#define TOOLBOX1_SEPARATOR_HEIGHT	32

#define TOOLBOX2_COMMIT_BTN_WIDTH	100
#define TOOLBOX2_FINISH_COLOR	QColor(30,123,157)


#define INTRO_VIDEO_WIDTH			600
#define INTRO_VIDEO_HEIGHT			480

#define MAX_BRIGHTNESS				100
#define MIN_BRIGHTNESS				0
#define MAX_CONTRAST				100
#define MIN_CONTRAST				0

#define BK_COLOR_VIEWWRAPPER_START		qRgb(42, 39, 32)
#define BK_COLOR_VIEWWRAPPER_END		qRgb(73, 69, 60)
#define BOTTOM_EDGE_HEIGHT			12

#define TITLE_BAR_HEIGHT			40
#define TITLE_BAR_LEFT_WIDTH		60
#define TITLE_BAR_RIGHT_WIDTH		210
#define TITLE_BAR_PICKME_3D_WIDTH	120

#define USE_FILE_MENU 1

#endif // DEFINE_H
