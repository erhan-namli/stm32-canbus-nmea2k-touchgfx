/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/calibrationscreen_screen/CalibrationScreenViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>

CalibrationScreenViewBase::CalibrationScreenViewBase() :
    flexButtonCallback(this, &CalibrationScreenViewBase::flexButtonCallbackHandler)
{
    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    Tank1CalibScrBG.setXY(0, 0);
    Tank1CalibScrBG.setBitmap(touchgfx::Bitmap(BITMAP_TANK1CALIBRATIONSCREEN_ID));
    add(Tank1CalibScrBG);

    Tank1CalibScrToHomeScr_Btn.setBitmaps(Bitmap(BITMAP_BACKBUTTONRELEASEDSAVEBUTTONRELEASED_ID), Bitmap(BITMAP_BACKBUTTONPRESSEDSAVEBUTTONRELEASED_ID));
    Tank1CalibScrToHomeScr_Btn.setBitmapXY(0, 0);
    Tank1CalibScrToHomeScr_Btn.setAction(flexButtonCallback);
    Tank1CalibScrToHomeScr_Btn.setPosition(409, 6, 64, 32);
    add(Tank1CalibScrToHomeScr_Btn);
}

CalibrationScreenViewBase::~CalibrationScreenViewBase()
{

}

void CalibrationScreenViewBase::setupScreen()
{

}

void CalibrationScreenViewBase::flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src)
{
    if (&src == &Tank1CalibScrToHomeScr_Btn)
    {
        //Tank1CalibScrToHomeScr_Interaction
        //When Tank1CalibScrToHomeScr_Btn clicked change screen to HomePageScreen
        //Go to HomePageScreen with screen transition towards North
        application().gotoHomePageScreenScreenSlideTransitionNorth();
    }
}
