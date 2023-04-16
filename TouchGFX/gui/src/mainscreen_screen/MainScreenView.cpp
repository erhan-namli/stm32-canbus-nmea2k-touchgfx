#include <gui/mainscreen_screen/MainScreenView.hpp>

extern long result;

extern int isCanbusDataRx;

MainScreenView::MainScreenView()
{

}

void MainScreenView::setupScreen()
{
    MainScreenViewBase::setupScreen();
}

void MainScreenView::tearDownScreen()
{
    MainScreenViewBase::tearDownScreen();
}


void MainScreenView::handleTickEvent()
{

	if(isCanbusDataRx==1){

		Tank1Gauge.updateValue(result, 0);
		Tank1LineProgress.updateValue(result, 0);

	}
	isCanbusDataRx=0;

}
