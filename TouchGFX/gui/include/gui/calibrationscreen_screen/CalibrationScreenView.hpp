#ifndef CALIBRATIONSCREENVIEW_HPP
#define CALIBRATIONSCREENVIEW_HPP

#include <gui_generated/calibrationscreen_screen/CalibrationScreenViewBase.hpp>
#include <gui/calibrationscreen_screen/CalibrationScreenPresenter.hpp>

class CalibrationScreenView : public CalibrationScreenViewBase
{
public:
    CalibrationScreenView();
    virtual ~CalibrationScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // CALIBRATIONSCREENVIEW_HPP
