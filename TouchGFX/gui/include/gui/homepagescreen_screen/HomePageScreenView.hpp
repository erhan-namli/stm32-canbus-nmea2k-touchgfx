#ifndef HOMEPAGESCREENVIEW_HPP
#define HOMEPAGESCREENVIEW_HPP

#include <gui_generated/homepagescreen_screen/HomePageScreenViewBase.hpp>
#include <gui/homepagescreen_screen/HomePageScreenPresenter.hpp>

class HomePageScreenView : public HomePageScreenViewBase
{
public:
    HomePageScreenView();
    virtual ~HomePageScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // HOMEPAGESCREENVIEW_HPP
