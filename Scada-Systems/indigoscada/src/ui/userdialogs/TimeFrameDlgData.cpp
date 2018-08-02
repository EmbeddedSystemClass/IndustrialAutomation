/**********************************************************************
--- Qt Architect generated file ---
File: TimeFrameDlgData.cpp
Last generated: Fri Feb 16 15:12:43 2001
DO NOT EDIT!!!  This file will be automatically
regenerated by qtarch.  All changes will be lost.
*********************************************************************/
#include <qt.h>
#include "TimeFrameDlgData.h"

TimeFrameDlgData::TimeFrameDlgData(QWidget *parent, const char *name)
: QDialog(parent, name, TRUE, 208)
{
	QFrame *qtarch_Frame_1 = new QFrame(this, "Frame_1");
	qtarch_Frame_1->setGeometry(20, 20, 380, 130);
	qtarch_Frame_1->setMinimumSize(0, 0);
	qtarch_Frame_1->setMaximumSize(32767, 32767);
	qtarch_Frame_1->setFocusPolicy(QWidget::NoFocus);
	qtarch_Frame_1->setBackgroundMode(QWidget::PaletteBackground);
#if QT_VERSION < 300
	qtarch_Frame_1->setFontPropagation(QWidget::SameFont);
	qtarch_Frame_1->setPalettePropagation(QWidget::SameFont);
	#endif
	qtarch_Frame_1->setFrameStyle( 50 );
	qtarch_Frame_1->setLineWidth( 1 );
	qtarch_Frame_1->setMidLineWidth( 0 );
	qtarch_Frame_1->QFrame::setMargin( 0 );
	FromDate = new DATEEDIT(this, "User_1");
	FromDate->setGeometry(240, 50, 140, 30);
	FromDate->setMinimumSize(0, 0);
	FromDate->setMaximumSize(32767, 32767);
	FromDate->setFocusPolicy(QWidget::StrongFocus);
	FromDate->setBackgroundMode(QWidget::PaletteBackground);
#if QT_VERSION < 300
	FromDate->setFontPropagation(QWidget::SameFont);
	FromDate->setPalettePropagation(QWidget::SameFont);
	#endif
	QLabel *qtarch_Label_1 = new QLabel(this, "Label_1");
	qtarch_Label_1->setGeometry(40, 50, 50, 30);
	qtarch_Label_1->setMinimumSize(0, 0);
	qtarch_Label_1->setMaximumSize(32767, 32767);
	qtarch_Label_1->setFocusPolicy(QWidget::NoFocus);
	qtarch_Label_1->setBackgroundMode(QWidget::PaletteBackground);
#if QT_VERSION < 300
	qtarch_Label_1->setFontPropagation(QWidget::SameFont);
	qtarch_Label_1->setPalettePropagation(QWidget::SameFont);
	#endif
	qtarch_Label_1->setFrameStyle( 0 );
	qtarch_Label_1->setLineWidth( 1 );
	qtarch_Label_1->setMidLineWidth( 0 );
	qtarch_Label_1->QFrame::setMargin( 0 );
	qtarch_Label_1->setText( tr( "From" ) );
	qtarch_Label_1->setAlignment( AlignLeft|AlignVCenter|ExpandTabs );
	qtarch_Label_1->setMargin( 0 );
	FromTime = new TIMEEDIT(this, "User_2");
	FromTime->setGeometry(100, 50, 100, 30);
	FromTime->setMinimumSize(0, 0);
	FromTime->setMaximumSize(32767, 32767);
	FromTime->setFocusPolicy(QWidget::StrongFocus);
	FromTime->setBackgroundMode(QWidget::PaletteBackground);
#if QT_VERSION < 300
	FromTime->setFontPropagation(QWidget::SameFont);
	FromTime->setPalettePropagation(QWidget::SameFont);
	#endif
	ToTime = new TIMEEDIT(this, "User_3");
	ToTime->setGeometry(100, 90, 100, 30);
	ToTime->setMinimumSize(0, 0);
	ToTime->setMaximumSize(32767, 32767);
	ToTime->setFocusPolicy(QWidget::StrongFocus);
	ToTime->setBackgroundMode(QWidget::PaletteBackground);
#if QT_VERSION < 300
	ToTime->setFontPropagation(QWidget::SameFont);
	ToTime->setPalettePropagation(QWidget::SameFont);
	#endif
	ToDate = new DATEEDIT(this, "User_4");
	ToDate->setGeometry(240, 90, 140, 30);
	ToDate->setMinimumSize(0, 0);
	ToDate->setMaximumSize(32767, 32767);
	ToDate->setFocusPolicy(QWidget::StrongFocus);
	ToDate->setBackgroundMode(QWidget::PaletteBackground);
#if QT_VERSION < 300
	ToDate->setFontPropagation(QWidget::SameFont);
	ToDate->setPalettePropagation(QWidget::SameFont);
	#endif
	QLabel *qtarch_Label_2 = new QLabel(this, "Label_2");
	qtarch_Label_2->setGeometry(40, 90, 50, 30);
	qtarch_Label_2->setMinimumSize(0, 0);
	qtarch_Label_2->setMaximumSize(32767, 32767);
	qtarch_Label_2->setFocusPolicy(QWidget::NoFocus);
	qtarch_Label_2->setBackgroundMode(QWidget::PaletteBackground);
#if QT_VERSION < 300
	qtarch_Label_2->setFontPropagation(QWidget::SameFont);
	qtarch_Label_2->setPalettePropagation(QWidget::SameFont);
	#endif
	qtarch_Label_2->setFrameStyle( 0 );
	qtarch_Label_2->setLineWidth( 1 );
	qtarch_Label_2->setMidLineWidth( 0 );
	qtarch_Label_2->QFrame::setMargin( 0 );
	qtarch_Label_2->setText( tr( "To" ) );
	qtarch_Label_2->setAlignment( AlignLeft|AlignVCenter|ExpandTabs );
	qtarch_Label_2->setMargin( 0 );
	QPushButton *qtarch_PushButton_3 = new QPushButton(this, "PushButton_3");
	qtarch_PushButton_3->setGeometry(20, 160, 100, 30);
	qtarch_PushButton_3->setMinimumSize(0, 0);
	qtarch_PushButton_3->setMaximumSize(32767, 32767);
	qtarch_PushButton_3->setFocusPolicy(QWidget::TabFocus);
	qtarch_PushButton_3->setBackgroundMode(QWidget::PaletteButton);
#if QT_VERSION < 300
	qtarch_PushButton_3->setFontPropagation(QWidget::SameFont);
	qtarch_PushButton_3->setPalettePropagation(QWidget::SameFont);
	#endif
	qtarch_PushButton_3->setText( tr( "Ok" ) );
	qtarch_PushButton_3->setAutoRepeat( FALSE );
	qtarch_PushButton_3->setAutoResize( FALSE );
	qtarch_PushButton_3->setToggleButton( FALSE );
	qtarch_PushButton_3->setDefault( TRUE );
	qtarch_PushButton_3->setAutoDefault( TRUE );
	qtarch_PushButton_3->setIsMenuButton( FALSE );
	connect(qtarch_PushButton_3, SIGNAL(clicked()), SLOT(accept()));
	QPushButton *qtarch_PushButton_4 = new QPushButton(this, "PushButton_4");
	qtarch_PushButton_4->setGeometry(300, 160, 100, 30);
	qtarch_PushButton_4->setMinimumSize(0, 0);
	qtarch_PushButton_4->setMaximumSize(32767, 32767);
	qtarch_PushButton_4->setFocusPolicy(QWidget::TabFocus);
	qtarch_PushButton_4->setBackgroundMode(QWidget::PaletteButton);
#if QT_VERSION < 300
	qtarch_PushButton_4->setFontPropagation(QWidget::SameFont);
	qtarch_PushButton_4->setPalettePropagation(QWidget::SameFont);
	#endif
	qtarch_PushButton_4->setText( tr( "Cancel" ) );
	qtarch_PushButton_4->setAutoRepeat( FALSE );
	qtarch_PushButton_4->setAutoResize( FALSE );
	qtarch_PushButton_4->setToggleButton( FALSE );
	qtarch_PushButton_4->setDefault( FALSE );
	qtarch_PushButton_4->setAutoDefault( FALSE );
	qtarch_PushButton_4->setIsMenuButton( FALSE );
	connect(qtarch_PushButton_4, SIGNAL(clicked()), SLOT(reject()));
	resize(420,200);
	setMinimumSize(0, 0);
	setMaximumSize(32767, 32767);
}
TimeFrameDlgData::~TimeFrameDlgData()
{
}
