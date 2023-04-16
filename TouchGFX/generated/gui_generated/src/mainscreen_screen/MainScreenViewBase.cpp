/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/mainscreen_screen/MainScreenViewBase.hpp>
#include <touchgfx/canvas_widget_renderer/CanvasWidgetRenderer.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

MainScreenViewBase::MainScreenViewBase() :
    flexButtonCallback(this, &MainScreenViewBase::flexButtonCallbackHandler)
{
    touchgfx::CanvasWidgetRenderer::setupBuffer(canvasBuffer, CANVAS_BUFFER_SIZE);
    
    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    GaugesContainer.setXY(0, 0);
    GaugesContainer.setSwipeCutoff(50);
    GaugesContainer.setEndSwipeElasticWidth(50);

    TanksGaugeScreen.setWidth(480);
    TanksGaugeScreen.setHeight(272);
    TanksGaugeScreenBG.setXY(0, 0);
    TanksGaugeScreenBG.setBitmap(touchgfx::Bitmap(BITMAP_TANKGAUGESTANKGAUGESPAGE_ID));
    TanksGaugeScreen.add(TanksGaugeScreenBG);

    Tank2Gauge.setBackground(touchgfx::Bitmap(BITMAP_GAUGEBACKGROUND_ID));
    Tank2Gauge.setPosition(260, 76, 120, 120);
    Tank2Gauge.setCenter(60, 60);
    Tank2Gauge.setStartEndAngle(-97.4f, 97.4f);
    Tank2Gauge.setRange(0, 300);
    Tank2Gauge.setValue(50);
    Tank2Gauge.setNeedle(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_GAUGE_TINY_NEEDLES_ROUGH_ID, 5, 33);
    Tank2Gauge.setMovingNeedleRenderingAlgorithm(touchgfx::TextureMapper::BILINEAR_INTERPOLATION);
    Tank2Gauge.setSteadyNeedleRenderingAlgorithm(touchgfx::TextureMapper::BILINEAR_INTERPOLATION);
    TanksGaugeScreen.add(Tank2Gauge);

    Tank1Gauge.setBackground(touchgfx::Bitmap(BITMAP_GAUGEBACKGROUND_ID));
    Tank1Gauge.setPosition(17, 76, 120, 120);
    Tank1Gauge.setCenter(60, 60);
    Tank1Gauge.setStartEndAngle(-97.4f, 97.4f);
    Tank1Gauge.setRange(0, 226);
    Tank1Gauge.setValue(100);
    Tank1Gauge.setNeedle(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_GAUGE_TINY_NEEDLES_ROUGH_ID, 5, 33);
    Tank1Gauge.setMovingNeedleRenderingAlgorithm(touchgfx::TextureMapper::BILINEAR_INTERPOLATION);
    Tank1Gauge.setSteadyNeedleRenderingAlgorithm(touchgfx::TextureMapper::BILINEAR_INTERPOLATION);
    TanksGaugeScreen.add(Tank1Gauge);

    Tank1CapacityGaugeText.setPosition(46, 145, 61, 25);
    Tank1CapacityGaugeText.setColor(touchgfx::Color::getColorFromRGB(57, 87, 121));
    Tank1CapacityGaugeText.setLinespacing(0);
    Tank1CapacityGaugeText.setTypedText(touchgfx::TypedText(T___SINGLEUSE_D72K));
    TanksGaugeScreen.add(Tank1CapacityGaugeText);

    Tank1CapacityBarText.setPosition(149, 76, 74, 25);
    Tank1CapacityBarText.setColor(touchgfx::Color::getColorFromRGB(57, 87, 121));
    Tank1CapacityBarText.setLinespacing(0);
    Tank1CapacityBarText.setTypedText(touchgfx::TypedText(T___SINGLEUSE_RO5M));
    TanksGaugeScreen.add(Tank1CapacityBarText);

    Tank2CapacityBarText.setPosition(384, 76, 74, 25);
    Tank2CapacityBarText.setColor(touchgfx::Color::getColorFromRGB(57, 87, 121));
    Tank2CapacityBarText.setLinespacing(0);
    Tank2CapacityBarText.setTypedText(touchgfx::TypedText(T___SINGLEUSE_E710));
    TanksGaugeScreen.add(Tank2CapacityBarText);

    Tank1LineProgress.setXY(172, 104);
    Tank1LineProgress.setProgressIndicatorPosition(0, 0, 18, 100);
    Tank1LineProgress.setRange(0, 226);
    Tank1LineProgress.setBackground(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_LINEPROGRESS_BACKGROUNDS_IMAGE_PLAIN_THICK_TINY_90_ID));
    Tank1LineProgressPainter.setBitmap(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_LINEPROGRESS_FILLERS_PLAIN_THICK_TINY_DARK_90_ID));
    Tank1LineProgress.setPainter(Tank1LineProgressPainter);
    Tank1LineProgress.setStart(9, 100);
    Tank1LineProgress.setEnd(9, 0);
    Tank1LineProgress.setLineWidth(18);
    Tank1LineProgress.setLineEndingStyle(touchgfx::Line::BUTT_CAP_ENDING);
    Tank1LineProgress.setValue(60);
    TanksGaugeScreen.add(Tank1LineProgress);

    Tank2LineProgress.setXY(412, 104);
    Tank2LineProgress.setProgressIndicatorPosition(0, 0, 18, 100);
    Tank2LineProgress.setRange(0, 100);
    Tank2LineProgress.setBackground(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_LINEPROGRESS_BACKGROUNDS_IMAGE_PLAIN_THICK_TINY_90_ID));
    Tank2LineProgressPainter.setBitmap(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_LINEPROGRESS_FILLERS_PLAIN_THICK_TINY_DARK_90_ID));
    Tank2LineProgress.setPainter(Tank2LineProgressPainter);
    Tank2LineProgress.setStart(9, 100);
    Tank2LineProgress.setEnd(9, 0);
    Tank2LineProgress.setLineWidth(18);
    Tank2LineProgress.setLineEndingStyle(touchgfx::Line::BUTT_CAP_ENDING);
    Tank2LineProgress.setValue(60);
    TanksGaugeScreen.add(Tank2LineProgress);

    TanksGaugeScrToHomeScr_Btn.setBitmaps(Bitmap(BITMAP_BACKBUTTONRELEASEDSAVEBUTTONRELEASED_ID), Bitmap(BITMAP_BACKBUTTONPRESSEDSAVEBUTTONRELEASED_ID));
    TanksGaugeScrToHomeScr_Btn.setBitmapXY(0, 0);
    TanksGaugeScrToHomeScr_Btn.setAction(flexButtonCallback);
    TanksGaugeScrToHomeScr_Btn.setPosition(409, 6, 64, 32);
    TanksGaugeScreen.add(TanksGaugeScrToHomeScr_Btn);

    Tank2CapacityGaugeText.setPosition(290, 145, 60, 24);
    Tank2CapacityGaugeText.setColor(touchgfx::Color::getColorFromRGB(57, 87, 121));
    Tank2CapacityGaugeText.setLinespacing(0);
    Tank2CapacityGaugeText.setTypedText(touchgfx::TypedText(T___SINGLEUSE_4AN6));
    TanksGaugeScreen.add(Tank2CapacityGaugeText);

    GaugesContainer.add(TanksGaugeScreen);

    TanksSettingScren.setWidth(480);
    TanksSettingScren.setHeight(272);
    TankSettingBG.setXY(0, 0);
    TankSettingBG.setBitmap(touchgfx::Bitmap(BITMAP_TANKSETTINGSTANKSETTINGS_ID));
    TanksSettingScren.add(TankSettingBG);

    Tank3WaterEdit_Btn.setBitmaps(Bitmap(BITMAP_EDITBUTTONRELEASED_ID), Bitmap(BITMAP_EDITBUTTONPRESSED_ID));
    Tank3WaterEdit_Btn.setBitmapXY(0, 0);
    Tank3WaterEdit_Btn.setPosition(406, 117, 64, 32);
    TanksSettingScren.add(Tank3WaterEdit_Btn);

    TanksSettingSave_Btn.setBitmaps(Bitmap(BITMAP_SAVEBUTTONRELEASED_ID), Bitmap(BITMAP_SAVEBUTTONPRESSED_ID));
    TanksSettingSave_Btn.setBitmapXY(0, 0);
    TanksSettingSave_Btn.setPosition(406, 204, 64, 32);
    TanksSettingScren.add(TanksSettingSave_Btn);

    Tank2FuelEdit_Btn.setBitmaps(Bitmap(BITMAP_EDITBUTTONRELEASED_ID), Bitmap(BITMAP_EDITBUTTONPRESSED_ID));
    Tank2FuelEdit_Btn.setBitmapXY(0, 0);
    Tank2FuelEdit_Btn.setPosition(406, 82, 64, 32);
    TanksSettingScren.add(Tank2FuelEdit_Btn);

    Tank1FuelEdit_Btn.setBitmaps(Bitmap(BITMAP_EDITBUTTONRELEASED_ID), Bitmap(BITMAP_EDITBUTTONPRESSED_ID));
    Tank1FuelEdit_Btn.setBitmapXY(0, 0);
    Tank1FuelEdit_Btn.setPosition(406, 46, 64, 32);
    TanksSettingScren.add(Tank1FuelEdit_Btn);

    CapacityDown_Btn.setBitmaps(Bitmap(BITMAP_DOWNBUTTONRELEASED_ID), Bitmap(BITMAP_DOWNBUTTONPRESSED_ID));
    CapacityDown_Btn.setBitmapXY(0, 0);
    CapacityDown_Btn.setPosition(348, 228, 32, 32);
    TanksSettingScren.add(CapacityDown_Btn);

    CapacityUp_Btn.setBitmaps(Bitmap(BITMAP_UPBUTTONRELEASED_ID), Bitmap(BITMAP_UPBUTTONPRESSED_ID));
    CapacityUp_Btn.setBitmapXY(0, 0);
    CapacityUp_Btn.setPosition(348, 180, 32, 32);
    TanksSettingScren.add(CapacityUp_Btn);

    Tank1FuelText.setPosition(276, 50, 64, 23);
    Tank1FuelText.setColor(touchgfx::Color::getColorFromRGB(57, 87, 121));
    Tank1FuelText.setLinespacing(0);
    Tank1FuelText.setTypedText(touchgfx::TypedText(T___SINGLEUSE_PPG8));
    TanksSettingScren.add(Tank1FuelText);

    Tank3WaterText.setPosition(276, 122, 64, 23);
    Tank3WaterText.setColor(touchgfx::Color::getColorFromRGB(57, 87, 121));
    Tank3WaterText.setLinespacing(0);
    Tank3WaterText.setTypedText(touchgfx::TypedText(T___SINGLEUSE_HI8H));
    TanksSettingScren.add(Tank3WaterText);

    Tank4FuelText.setPosition(171, 162, 57, 23);
    Tank4FuelText.setColor(touchgfx::Color::getColorFromRGB(57, 87, 121));
    Tank4FuelText.setLinespacing(0);
    Tank4FuelText.setTypedText(touchgfx::TypedText(T___SINGLEUSE_WGA0));
    TanksSettingScren.add(Tank4FuelText);

    CapacityText.setPosition(221, 203, 110, 34);
    CapacityText.setColor(touchgfx::Color::getColorFromRGB(57, 87, 121));
    CapacityText.setLinespacing(0);
    CapacityText.setTypedText(touchgfx::TypedText(T___SINGLEUSE_TD2N));
    TanksSettingScren.add(CapacityText);

    Tank2FuelText.setPosition(276, 86, 64, 25);
    Tank2FuelText.setColor(touchgfx::Color::getColorFromRGB(57, 87, 121));
    Tank2FuelText.setLinespacing(0);
    Tank2FuelText.setTypedText(touchgfx::TypedText(T___SINGLEUSE_RIA3));
    TanksSettingScren.add(Tank2FuelText);

    TankSettingsToHomeScr_Button.setBitmaps(Bitmap(BITMAP_BACKBUTTONRELEASEDSAVEBUTTONRELEASED_ID), Bitmap(BITMAP_BACKBUTTONPRESSEDSAVEBUTTONRELEASED_ID));
    TankSettingsToHomeScr_Button.setBitmapXY(0, 0);
    TankSettingsToHomeScr_Button.setAction(flexButtonCallback);
    TankSettingsToHomeScr_Button.setPosition(409, 6, 64, 32);
    TanksSettingScren.add(TankSettingsToHomeScr_Button);

    GaugesContainer.add(TanksSettingScren);

    GaugesContainer.setSelectedPage(0);
    add(GaugesContainer);
}

MainScreenViewBase::~MainScreenViewBase()
{
    touchgfx::CanvasWidgetRenderer::resetBuffer();
}

void MainScreenViewBase::setupScreen()
{

}

void MainScreenViewBase::flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src)
{
    if (&src == &TankSettingsToHomeScr_Button)
    {
        //TankSettingsScrToHomeScr_Interaction
        //When TankSettingsToHomeScr_Button clicked change screen to HomePageScreen
        //Go to HomePageScreen with screen transition towards South
        application().gotoHomePageScreenScreenSlideTransitionSouth();
    }
    if (&src == &TanksGaugeScrToHomeScr_Btn)
    {
        //TanksGaugeScrToHomeScr_Interaction
        //When TanksGaugeScrToHomeScr_Btn clicked change screen to HomePageScreen
        //Go to HomePageScreen with screen transition towards South
        application().gotoHomePageScreenScreenSlideTransitionSouth();
    }
}